
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int pm_cap; } ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ pm_message_t ;
typedef scalar_t__ pci_power_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;





 int FUNC_1 (struct pci_dev*,char*,int) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

pci_power_t FUNC_3(struct pci_dev *VAR_3, pm_message_t VAR_4)
{
 pci_power_t VAR_5;

 if (!VAR_3->pm_cap)
  return VAR_0;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 != VAR_2)
  return VAR_5;

 switch (VAR_4.event) {
 case 130:
  return VAR_0;
 case 132:
 case 129:

 case 128:
 case 131:
  return VAR_1;
 default:
  FUNC_1(VAR_3, "unrecognized suspend event %d\n",
    VAR_4.event);
  FUNC_0();
 }
 return VAR_0;
}
