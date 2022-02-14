
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int link_active_reporting; } ;
struct pci_bus {int max_bus_speed; void* cur_bus_speed; struct pci_dev* self; } ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (struct pci_dev*,int ,int*) ;
 int* VAR_21 ;
 int FUNC_7 (struct pci_bus*,int) ;
 void** VAR_22 ;

__attribute__((used)) static void FUNC_8(struct pci_bus *VAR_23)
{
 struct pci_dev *VAR_24 = VAR_23->self;
 int VAR_25;

 VAR_25 = FUNC_1(VAR_24, VAR_2);
 if (!VAR_25)
  VAR_25 = FUNC_1(VAR_24, VAR_3);
 if (VAR_25) {
  u32 VAR_26, VAR_27;

  FUNC_3(VAR_24, VAR_25 + VAR_1, &VAR_26);
  VAR_23->max_bus_speed = FUNC_0(VAR_26 & 8, VAR_26 & 7);

  FUNC_3(VAR_24, VAR_25 + VAR_0, &VAR_27);
  VAR_23->cur_bus_speed = FUNC_0(VAR_26 & 8, VAR_27 & 7);
 }

 VAR_25 = FUNC_1(VAR_24, VAR_4);
 if (VAR_25) {
  u16 VAR_28;
  enum pci_bus_speed VAR_29;

  FUNC_4(VAR_24, VAR_25 + VAR_14,
         &VAR_28);

  if (VAR_28 & VAR_17) {
   VAR_29 = VAR_11;
  } else if (VAR_28 & VAR_16) {
   VAR_29 = VAR_10;
  } else if (VAR_28 & VAR_15) {
   if ((VAR_28 & VAR_20) == VAR_19)
    VAR_29 = VAR_12;
   else
    VAR_29 = VAR_9;
  } else {
   VAR_29 = VAR_13;
  }

  VAR_23->max_bus_speed = VAR_29;
  VAR_23->cur_bus_speed = VAR_22[
   (VAR_28 & VAR_18) >> 6];

  return;
 }

 if (FUNC_2(VAR_24)) {
  u32 VAR_30;
  u16 VAR_31;

  FUNC_5(VAR_24, VAR_5, &VAR_30);
  VAR_23->max_bus_speed = VAR_21[VAR_30 & VAR_7];
  VAR_24->link_active_reporting = !!(VAR_30 & VAR_6);

  FUNC_6(VAR_24, VAR_8, &VAR_31);
  FUNC_7(VAR_23, VAR_31);
 }
}
