
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct stmmac_tx_queue {size_t queue_index; int txtimer; struct stmmac_priv* priv_data; } ;
struct stmmac_priv {struct stmmac_channel* channel; } ;
struct stmmac_channel {int tx_napi; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct stmmac_tx_queue* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 struct stmmac_tx_queue* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_2)
{
 struct stmmac_tx_queue *VAR_3 = FUNC_2(VAR_3, VAR_2, VAR_1);
 struct stmmac_priv *VAR_4 = VAR_3->priv_data;
 struct stmmac_channel *VAR_5;

 VAR_5 = &VAR_4->channel[VAR_3->queue_index];





 if (FUNC_3(FUNC_5(&VAR_5->tx_napi)))
  FUNC_1(&VAR_5->tx_napi);
 else
  FUNC_4(&VAR_3->txtimer, FUNC_0(10));
}
