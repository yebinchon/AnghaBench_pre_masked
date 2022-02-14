
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_tx_queue {scalar_t__ mss; scalar_t__ cur_tx; scalar_t__ dirty_tx; int * dma_tx; TYPE_1__* dma_etx; } ;
struct stmmac_priv {TYPE_3__* dev; int mode; scalar_t__ extend_desc; struct stmmac_tx_queue* tx_queue; } ;
struct TYPE_5__ {int tx_errors; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct TYPE_4__ {int basic; } ;


 int VAR_0 ;
 int FUNC_0 (struct stmmac_priv*,size_t) ;
 int FUNC_1 (TYPE_3__*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct stmmac_priv*,int *,int ,int) ;
 int FUNC_6 (struct stmmac_priv*,size_t) ;
 int FUNC_7 (struct stmmac_priv*,size_t) ;

__attribute__((used)) static void FUNC_8(struct stmmac_priv *VAR_1, u32 VAR_2)
{
 struct stmmac_tx_queue *VAR_3 = &VAR_1->tx_queue[VAR_2];
 int VAR_4;

 FUNC_3(FUNC_1(VAR_1->dev, VAR_2));

 FUNC_7(VAR_1, VAR_2);
 FUNC_0(VAR_1, VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1->extend_desc)
   FUNC_5(VAR_1, &VAR_3->dma_etx[VAR_4].basic,
     VAR_1->mode, (VAR_4 == VAR_0 - 1));
  else
   FUNC_5(VAR_1, &VAR_3->dma_tx[VAR_4],
     VAR_1->mode, (VAR_4 == VAR_0 - 1));
 VAR_3->dirty_tx = 0;
 VAR_3->cur_tx = 0;
 VAR_3->mss = 0;
 FUNC_2(FUNC_1(VAR_1->dev, VAR_2));
 FUNC_6(VAR_1, VAR_2);

 VAR_1->dev->stats.tx_errors++;
 FUNC_4(FUNC_1(VAR_1->dev, VAR_2));
}
