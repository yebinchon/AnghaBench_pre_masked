
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdmmc_priv {int sg_cpu; int sg_dma; } ;
struct sdmmc_lli_desc {int dummy; } ;
struct mmci_host {TYPE_2__* mmc; TYPE_1__* variant; struct sdmmc_priv* dma_priv; } ;
struct TYPE_4__ {int max_segs; int max_req_size; int max_seg_size; } ;
struct TYPE_3__ {int stm32_idmabsize_mask; scalar_t__ dma_lli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct sdmmc_priv* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct mmci_host *VAR_3)
{
 struct sdmmc_priv *VAR_4;

 VAR_4 = FUNC_1(FUNC_3(VAR_3->mmc), sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->dma_priv = VAR_4;

 if (VAR_3->variant->dma_lli) {
  VAR_4->sg_cpu = FUNC_2(FUNC_3(VAR_3->mmc),
         VAR_2,
         &VAR_4->sg_dma, VAR_1);
  if (!VAR_4->sg_cpu) {
   FUNC_0(FUNC_3(VAR_3->mmc),
    "Failed to alloc IDMA descriptor\n");
   return -VAR_0;
  }
  VAR_3->mmc->max_segs = VAR_2 /
   sizeof(struct sdmmc_lli_desc);
  VAR_3->mmc->max_seg_size = VAR_3->variant->stm32_idmabsize_mask;
 } else {
  VAR_3->mmc->max_segs = 1;
  VAR_3->mmc->max_seg_size = VAR_3->mmc->max_req_size;
 }

 return 0;
}
