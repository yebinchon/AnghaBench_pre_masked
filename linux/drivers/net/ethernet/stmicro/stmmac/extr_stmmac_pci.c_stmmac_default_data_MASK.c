
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct plat_stmmacenet_data {int bus_id; TYPE_1__* dma_cfg; int interface; scalar_t__ phy_addr; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int pbl; int pblx8; } ;


 int VAR_0 ;
 int FUNC_0 (struct plat_stmmacenet_data*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_1,
          struct plat_stmmacenet_data *VAR_2)
{

 FUNC_0(VAR_2);

 VAR_2->bus_id = 1;
 VAR_2->phy_addr = 0;
 VAR_2->interface = VAR_0;

 VAR_2->dma_cfg->pbl = 32;
 VAR_2->dma_cfg->pblx8 = 1;


 return 0;
}
