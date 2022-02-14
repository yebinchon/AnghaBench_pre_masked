
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_0, const struct pci_device_id *VAR_1)
{
 FUNC_0(&VAR_0->dev);
 FUNC_1(&VAR_0->dev);

 return 0;
}
