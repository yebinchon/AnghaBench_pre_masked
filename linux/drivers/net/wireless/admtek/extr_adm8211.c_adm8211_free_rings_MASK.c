
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {unsigned int rx_ring_size; unsigned int tx_ring_size; TYPE_2__* tx_buffers; int pdev; TYPE_1__* rx_buffers; } ;
struct TYPE_6__ {int len; } ;
struct TYPE_5__ {TYPE_3__* skb; int mapping; } ;
struct TYPE_4__ {TYPE_3__* skb; int mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_3)
{
 struct adm8211_priv *VAR_4 = VAR_3->priv;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->rx_ring_size; VAR_5++) {
  if (!VAR_4->rx_buffers[VAR_5].skb)
   continue;

  FUNC_1(
   VAR_4->pdev,
   VAR_4->rx_buffers[VAR_5].mapping,
   VAR_2, VAR_0);

  FUNC_0(VAR_4->rx_buffers[VAR_5].skb);
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->tx_ring_size; VAR_5++) {
  if (!VAR_4->tx_buffers[VAR_5].skb)
   continue;

  FUNC_1(VAR_4->pdev,
     VAR_4->tx_buffers[VAR_5].mapping,
     VAR_4->tx_buffers[VAR_5].skb->len,
     VAR_1);

  FUNC_0(VAR_4->tx_buffers[VAR_5].skb);
 }
}
