
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plat_stmmacenet_data {int bus_id; int interface; scalar_t__ phy_addr; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,struct plat_stmmacenet_data*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_1,
     struct plat_stmmacenet_data *VAR_2)
{
 VAR_2->bus_id = 1;
 VAR_2->phy_addr = 0;
 VAR_2->interface = VAR_0;
 return FUNC_0(VAR_1, VAR_2);
}
