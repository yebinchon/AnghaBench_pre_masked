
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eee; } ;
struct stmmac_priv {int tx_lpi_timer; int dev; int lock; TYPE_2__* hw; int eee_ctrl_timer; scalar_t__ eee_enabled; scalar_t__ eee_active; TYPE_1__ dma_cap; } ;
struct TYPE_4__ {scalar_t__ pcs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int VAR_5 ;
 int FUNC_6 (struct stmmac_priv*,TYPE_2__*,int ,int) ;
 int FUNC_7 (int *,int ,int ) ;

bool FUNC_8(struct stmmac_priv *VAR_6)
{
 int VAR_7 = VAR_6->tx_lpi_timer;




 if ((VAR_6->hw->pcs == VAR_1) ||
     (VAR_6->hw->pcs == VAR_3) ||
     (VAR_6->hw->pcs == VAR_2))
  return 0;


 if (!VAR_6->dma_cap.eee)
  return 0;

 FUNC_3(&VAR_6->lock);


 if (!VAR_6->eee_active) {
  if (VAR_6->eee_enabled) {
   FUNC_5(VAR_6->dev, "disable EEE\n");
   FUNC_1(&VAR_6->eee_ctrl_timer);
   FUNC_6(VAR_6, VAR_6->hw, 0, VAR_7);
  }
  FUNC_4(&VAR_6->lock);
  return 0;
 }

 if (VAR_6->eee_active && !VAR_6->eee_enabled) {
  FUNC_7(&VAR_6->eee_ctrl_timer, VAR_5, 0);
  FUNC_2(&VAR_6->eee_ctrl_timer, FUNC_0(VAR_4));
  FUNC_6(VAR_6, VAR_6->hw, VAR_0,
         VAR_7);
 }

 FUNC_4(&VAR_6->lock);
 FUNC_5(VAR_6->dev, "Energy-Efficient Ethernet initialized\n");
 return 1;
}
