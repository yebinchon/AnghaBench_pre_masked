
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct plat_stmmacenet_data {int phy_addr; TYPE_1__* dma_cfg; int interface; int bus_id; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int pbl; int pblx8; int fixed_burst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct plat_stmmacenet_data*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int VAR_2 ;
 int FUNC_3 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_3,
         struct plat_stmmacenet_data *VAR_4)
{
 int VAR_5;


 FUNC_0(VAR_4);





 VAR_5 = FUNC_3(VAR_3, VAR_2);
 if (VAR_5 < 0) {

  if (FUNC_1(VAR_0))
   return VAR_5;






  VAR_5 = 1;
 }

 VAR_4->bus_id = FUNC_2(VAR_3);
 VAR_4->phy_addr = VAR_5;
 VAR_4->interface = VAR_1;

 VAR_4->dma_cfg->pbl = 16;
 VAR_4->dma_cfg->pblx8 = 1;
 VAR_4->dma_cfg->fixed_burst = 1;


 return 0;
}
