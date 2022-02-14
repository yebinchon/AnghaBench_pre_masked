
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct pci_dev {scalar_t__ current_state; struct device dev; } ;
typedef scalar_t__ pci_power_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct device*) ;

bool FUNC_4(struct pci_dev *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 pci_power_t VAR_4;

 if (!FUNC_3(VAR_3) || FUNC_2(VAR_2))
  return 1;

 VAR_4 = FUNC_1(VAR_2, FUNC_0(VAR_3));






 return VAR_4 != VAR_2->current_state &&
  VAR_4 != VAR_0 &&
  VAR_2->current_state != VAR_1;
}
