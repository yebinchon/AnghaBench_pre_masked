
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ef4_nic {scalar_t__ state; scalar_t__ reset_pending; } ;
typedef int pci_ers_result_t ;
typedef enum pci_channel_state { ____Placeholder_pci_channel_state } pci_channel_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*) ;
 int VAR_5 ;
 int FUNC_3 (struct pci_dev*) ;
 struct ef4_nic* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static pci_ers_result_t FUNC_7(struct pci_dev *VAR_6,
           enum pci_channel_state VAR_7)
{
 pci_ers_result_t VAR_8 = VAR_2;
 struct ef4_nic *VAR_9 = FUNC_4(VAR_6);

 if (VAR_7 == VAR_5)
  return VAR_0;

 FUNC_5();

 if (VAR_9->state != VAR_3) {
  VAR_9->state = VAR_4;
  VAR_9->reset_pending = 0;

  FUNC_0(VAR_9);

  FUNC_2(VAR_9);
  FUNC_1(VAR_9);

  VAR_8 = VAR_1;
 } else {



  VAR_8 = VAR_2;
 }

 FUNC_6();

 FUNC_3(VAR_6);

 return VAR_8;
}
