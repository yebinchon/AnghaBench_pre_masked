
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int enable; } ;
struct TYPE_5__ {int rssen; } ;
struct stmmac_priv {TYPE_2__* plat; TYPE_4__ rss; int hw; TYPE_3__* dev; TYPE_1__ dma_cap; } ;
struct TYPE_7__ {int features; } ;
struct TYPE_6__ {int rx_queues_to_use; int rss_en; } ;


 int VAR_0 ;
 int FUNC_0 (struct stmmac_priv*,int ,TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_1)
{
 if (!VAR_1->dma_cap.rssen || !VAR_1->plat->rss_en) {
  VAR_1->rss.enable = 0;
  return;
 }

 if (VAR_1->dev->features & VAR_0)
  VAR_1->rss.enable = 1;
 else
  VAR_1->rss.enable = 0;

 FUNC_0(VAR_1, VAR_1->hw, &VAR_1->rss,
        VAR_1->plat->rx_queues_to_use);
}
