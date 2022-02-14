
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mwl8k_rx_queue {int * rxd; int rxd_dma; TYPE_2__* buf; } ;
struct mwl8k_priv {TYPE_1__* rxd_ops; int pdev; struct mwl8k_rx_queue* rxq; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
struct TYPE_6__ {int * skb; } ;
struct TYPE_5__ {int rxd_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int *,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_4, int VAR_5)
{
 struct mwl8k_priv *VAR_6 = VAR_4->priv;
 struct mwl8k_rx_queue *VAR_7 = VAR_6->rxq + VAR_5;
 int VAR_8;

 if (VAR_7->rxd == ((void*)0))
  return;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (VAR_7->buf[VAR_8].skb != ((void*)0)) {
   FUNC_5(VAR_6->pdev,
      FUNC_0(&VAR_7->buf[VAR_8], VAR_3),
      VAR_1, VAR_2);
   FUNC_1(&VAR_7->buf[VAR_8], VAR_3, 0);

   FUNC_3(VAR_7->buf[VAR_8].skb);
   VAR_7->buf[VAR_8].skb = ((void*)0);
  }
 }

 FUNC_2(VAR_7->buf);
 VAR_7->buf = ((void*)0);

 FUNC_4(VAR_6->pdev,
       VAR_0 * VAR_6->rxd_ops->rxd_size,
       VAR_7->rxd, VAR_7->rxd_dma);
 VAR_7->rxd = ((void*)0);
}
