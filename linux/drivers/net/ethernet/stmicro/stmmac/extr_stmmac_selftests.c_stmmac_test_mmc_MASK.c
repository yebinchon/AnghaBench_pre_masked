
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_counters {scalar_t__ mmc_tx_framecount_g; } ;
struct TYPE_2__ {int rmon; } ;
struct stmmac_priv {int mmcaddr; struct stmmac_counters mmc; TYPE_1__ dma_cap; } ;
typedef int initial ;
typedef int final ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stmmac_counters*,int ,int) ;
 int FUNC_1 (struct stmmac_priv*,int ,struct stmmac_counters*) ;
 int FUNC_2 (struct stmmac_priv*) ;

__attribute__((used)) static int FUNC_3(struct stmmac_priv *VAR_2)
{
 struct stmmac_counters VAR_3, VAR_4;
 int VAR_5;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));

 if (!VAR_2->dma_cap.rmon)
  return -VAR_1;


 FUNC_1(VAR_2, VAR_2->mmcaddr, &VAR_2->mmc);

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  return VAR_5;


 FUNC_1(VAR_2, VAR_2->mmcaddr, &VAR_4);






 if (VAR_4.mmc_tx_framecount_g <= VAR_3.mmc_tx_framecount_g)
  return -VAR_0;

 return 0;
}
