
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rmon; } ;
struct stmmac_priv {int dev; int mmc; int mmcaddr; TYPE_1__ dma_cap; } ;
struct stmmac_counters {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct stmmac_priv*,int ,unsigned int) ;
 int FUNC_3 (struct stmmac_priv*,int ) ;

__attribute__((used)) static void FUNC_4(struct stmmac_priv *VAR_4)
{
 unsigned int VAR_5 = VAR_3 | VAR_0 |
       VAR_2 | VAR_1;

 FUNC_3(VAR_4, VAR_4->mmcaddr);

 if (VAR_4->dma_cap.rmon) {
  FUNC_2(VAR_4, VAR_4->mmcaddr, VAR_5);
  FUNC_0(&VAR_4->mmc, 0, sizeof(struct stmmac_counters));
 } else
  FUNC_1(VAR_4->dev, "No MAC Management Counters available\n");
}
