
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (char*,struct pci_dev*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_2,
         const struct pci_device_id *VAR_3)
{
 if (FUNC_1(VAR_2)) {
  FUNC_3("error enabling pci device %p\n", VAR_2);
  return -VAR_0;
 }
 FUNC_2(VAR_2);
 FUNC_0(VAR_1, VAR_2);
 return 0;
}
