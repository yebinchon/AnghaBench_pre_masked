
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {scalar_t__ probe; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_driver*,struct pci_dev*,struct pci_device_id const*) ;
 struct pci_device_id* FUNC_1 (struct pci_driver*,struct pci_dev*) ;

__attribute__((used)) static int FUNC_2(struct pci_driver *VAR_1, struct pci_dev *VAR_2)
{
 const struct pci_device_id *VAR_3;
 int VAR_4 = 0;

 if (!VAR_2->driver && VAR_1->probe) {
  VAR_4 = -VAR_0;

  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3)
   VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 }
 return VAR_4;
}
