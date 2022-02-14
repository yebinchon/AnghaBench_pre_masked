
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct controller {int power_fault_detected; int requester; int reset_lock; int pending_events; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int ) ;
 struct pci_dev* FUNC_2 (struct controller*) ;
 int FUNC_3 (struct controller*,char*,int ) ;
 int FUNC_4 (struct controller*,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct controller*) ;
 int FUNC_10 (struct controller*) ;
 int FUNC_11 (struct controller*,int) ;
 int FUNC_12 (int,void*) ;
 int FUNC_13 (struct controller*,int ,int ) ;
 int FUNC_14 (struct controller*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_18(int VAR_11, void *VAR_12)
{
 struct controller *VAR_13 = (struct controller *)VAR_12;
 struct pci_dev *VAR_14 = FUNC_2(VAR_13);
 irqreturn_t VAR_15;
 u32 VAR_16;

 FUNC_7(VAR_14);


 if (FUNC_0(~VAR_10, &VAR_13->pending_events) & VAR_10) {
  VAR_15 = FUNC_12(VAR_11, VAR_12);
  FUNC_6(VAR_11);
  if (VAR_15 != VAR_3) {
   FUNC_8(VAR_14);
   return VAR_15;
  }
 }

 FUNC_15(VAR_11);
 VAR_16 = FUNC_1(&VAR_13->pending_events, 0);
 if (!VAR_16) {
  FUNC_8(VAR_14);
  return VAR_2;
 }


 if (VAR_16 & VAR_6) {
  FUNC_4(VAR_13, "Slot(%s): Attention button pressed\n",
     FUNC_14(VAR_13));
  FUNC_9(VAR_13);
 }


 if ((VAR_16 & VAR_9) && !VAR_13->power_fault_detected) {
  VAR_13->power_fault_detected = 1;
  FUNC_3(VAR_13, "Slot(%s): Power fault\n", FUNC_14(VAR_13));
  FUNC_13(VAR_13, VAR_5,
          VAR_4);
 }





 FUNC_5(&VAR_13->reset_lock);
 if (VAR_16 & VAR_0)
  FUNC_10(VAR_13);
 else if (VAR_16 & (VAR_8 | VAR_7))
  FUNC_11(VAR_13, VAR_16);
 FUNC_16(&VAR_13->reset_lock);

 FUNC_8(VAR_14);
 FUNC_17(&VAR_13->requester);
 return VAR_1;
}
