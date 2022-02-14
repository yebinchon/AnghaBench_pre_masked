
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int match_driver; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct pci_device_id* FUNC_0 (struct pci_driver*,struct pci_dev*) ;
 struct pci_dev* FUNC_1 (struct device*) ;
 struct pci_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_1(VAR_0);
 struct pci_driver *VAR_3;
 const struct pci_device_id *VAR_4;

 if (!VAR_2->match_driver)
  return 0;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4)
  return 1;

 return 0;
}
