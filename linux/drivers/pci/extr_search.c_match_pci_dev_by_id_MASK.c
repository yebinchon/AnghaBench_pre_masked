
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct pci_device_id const*,struct pci_dev*) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, const void *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_1(VAR_0);
 const struct pci_device_id *VAR_3 = VAR_1;

 if (FUNC_0(VAR_3, VAR_2))
  return 1;
 return 0;
}
