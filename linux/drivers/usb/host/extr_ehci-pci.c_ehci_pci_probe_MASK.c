
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,struct pci_device_id const*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1, const struct pci_device_id *VAR_2)
{
 if (FUNC_0(VAR_1))
  return -VAR_0;
 return FUNC_1(VAR_1, VAR_2);
}
