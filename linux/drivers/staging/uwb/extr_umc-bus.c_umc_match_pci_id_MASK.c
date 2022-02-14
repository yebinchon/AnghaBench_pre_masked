
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct umc_driver {struct pci_device_id* match_data; } ;
struct TYPE_2__ {int parent; } ;
struct umc_dev {TYPE_1__ dev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (struct pci_device_id const*,struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ) ;

int FUNC_3(struct umc_driver *VAR_0, struct umc_dev *VAR_1)
{
 const struct pci_device_id *VAR_2 = VAR_0->match_data;
 struct pci_dev *VAR_3;

 if (!FUNC_0(VAR_1->dev.parent))
  return 0;

 VAR_3 = FUNC_2(VAR_1->dev.parent);
 return FUNC_1(VAR_2, VAR_3) != ((void*)0);
}
