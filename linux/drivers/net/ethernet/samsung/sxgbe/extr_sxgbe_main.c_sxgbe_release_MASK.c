
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sxgbe_priv_data {int sxgbe_clk; int ioaddr; TYPE_3__* hw; int napi; int eee_ctrl_timer; scalar_t__ eee_enabled; } ;
struct net_device {scalar_t__ phydev; } ;
struct TYPE_6__ {TYPE_2__* mac; TYPE_1__* dma; } ;
struct TYPE_5__ {int (* enable_rx ) (int ,int) ;int (* enable_tx ) (int ,int) ;} ;
struct TYPE_4__ {int (* stop_rx ) (int ,int ) ;int (* stop_tx ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sxgbe_priv_data*) ;
 int FUNC_3 (int *) ;
 struct sxgbe_priv_data* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct sxgbe_priv_data*) ;
 int FUNC_13 (struct sxgbe_priv_data*) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_2)
{
 struct sxgbe_priv_data *VAR_3 = FUNC_4(VAR_2);

 if (VAR_3->eee_enabled)
  FUNC_1(&VAR_3->eee_ctrl_timer);


 if (VAR_2->phydev) {
  FUNC_7(VAR_2->phydev);
  FUNC_6(VAR_2->phydev);
 }

 FUNC_5(VAR_2);

 FUNC_3(&VAR_3->napi);


 FUNC_13(VAR_3);


 VAR_3->hw->dma->stop_tx(VAR_3->ioaddr, VAR_1);
 VAR_3->hw->dma->stop_rx(VAR_3->ioaddr, VAR_0);


 FUNC_12(VAR_3);


 FUNC_2(VAR_3);


 VAR_3->hw->mac->enable_tx(VAR_3->ioaddr, 0);
 VAR_3->hw->mac->enable_rx(VAR_3->ioaddr, 0);

 FUNC_0(VAR_3->sxgbe_clk);

 return 0;
}
