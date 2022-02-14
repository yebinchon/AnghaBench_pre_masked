
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ time_stamp; scalar_t__ atime_stamp; } ;
struct stmmac_priv {int adv_ts; scalar_t__ hwts_rx_en; scalar_t__ hwts_tx_en; int dev; TYPE_2__ dma_cap; scalar_t__ extend_desc; TYPE_1__* plat; } ;
struct TYPE_3__ {scalar_t__ has_xgmac; scalar_t__ has_gmac4; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct stmmac_priv*) ;

__attribute__((used)) static int FUNC_2(struct stmmac_priv *VAR_1)
{
 bool VAR_2 = VAR_1->plat->has_gmac4 || VAR_1->plat->has_xgmac;

 if (!(VAR_1->dma_cap.time_stamp || VAR_1->dma_cap.atime_stamp))
  return -VAR_0;

 VAR_1->adv_ts = 0;

 if (VAR_2 && VAR_1->dma_cap.atime_stamp)
  VAR_1->adv_ts = 1;

 else if (VAR_1->extend_desc && VAR_1->dma_cap.atime_stamp)
  VAR_1->adv_ts = 1;

 if (VAR_1->dma_cap.time_stamp)
  FUNC_0(VAR_1->dev, "IEEE 1588-2002 Timestamp supported\n");

 if (VAR_1->adv_ts)
  FUNC_0(VAR_1->dev,
       "IEEE 1588-2008 Advanced Timestamp supported\n");

 VAR_1->hwts_tx_en = 0;
 VAR_1->hwts_rx_en = 0;

 FUNC_1(VAR_1);

 return 0;
}
