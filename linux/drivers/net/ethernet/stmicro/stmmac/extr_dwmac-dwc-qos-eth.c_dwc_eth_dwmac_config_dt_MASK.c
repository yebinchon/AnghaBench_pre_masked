
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_axi {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct plat_stmmacenet_data {int has_gmac4; int tso_en; int pmt; TYPE_2__* dma_cfg; TYPE_3__* axi; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int axi_wr_osr_lmt; int axi_rd_osr_lmt; int* axi_blen; int axi_lpi_en; } ;
struct TYPE_5__ {int aal; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int,int ) ;
 int FUNC_1 (struct device_node*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2,
       struct plat_stmmacenet_data *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->dev.of_node;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;

 if (!VAR_3->axi) {
  VAR_3->axi = FUNC_0(sizeof(struct stmmac_axi), VAR_1);

  if (!VAR_3->axi)
   return -VAR_0;
 }

 VAR_3->axi->axi_lpi_en = FUNC_1(VAR_4, "snps,en-lpi");
 if (FUNC_2(VAR_4, "snps,write-requests",
     &VAR_3->axi->axi_wr_osr_lmt)) {




  VAR_3->axi->axi_wr_osr_lmt = 1;
 } else {




  VAR_3->axi->axi_wr_osr_lmt--;
 }

 if (FUNC_2(VAR_4, "snps,read-requests",
     &VAR_3->axi->axi_rd_osr_lmt)) {




  VAR_3->axi->axi_rd_osr_lmt = 1;
 } else {




  VAR_3->axi->axi_rd_osr_lmt--;
 }
 FUNC_2(VAR_4, "snps,burst-map", &VAR_5);


 for (VAR_6 = 0; VAR_6 < 7; VAR_6++) {
  if (VAR_5 & (1 << VAR_6)) {
   switch (VAR_6) {
   case 0:
   VAR_3->axi->axi_blen[VAR_7] = 4; break;
   case 1:
   VAR_3->axi->axi_blen[VAR_7] = 8; break;
   case 2:
   VAR_3->axi->axi_blen[VAR_7] = 16; break;
   case 3:
   VAR_3->axi->axi_blen[VAR_7] = 32; break;
   case 4:
   VAR_3->axi->axi_blen[VAR_7] = 64; break;
   case 5:
   VAR_3->axi->axi_blen[VAR_7] = 128; break;
   case 6:
   VAR_3->axi->axi_blen[VAR_7] = 256; break;
   default:
   break;
   }
   VAR_7++;
  }
 }


 VAR_3->has_gmac4 = 1;
 VAR_3->dma_cfg->aal = 1;
 VAR_3->tso_en = 1;
 VAR_3->pmt = 1;

 return 0;
}
