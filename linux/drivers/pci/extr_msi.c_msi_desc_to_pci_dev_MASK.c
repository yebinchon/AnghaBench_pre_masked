
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct msi_desc {int dev; } ;


 struct pci_dev* FUNC_0 (int ) ;

struct pci_dev *FUNC_1(struct msi_desc *VAR_0)
{
 return FUNC_0(VAR_0->dev);
}
