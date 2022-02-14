
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nixge_tx_skb {int dummy; } ;
struct nixge_priv {size_t tx_bd_ci; struct nixge_tx_skb* tx_skb; struct nixge_hw_dma_bd* tx_bd_v; } ;
struct nixge_hw_dma_bd {unsigned int status; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct nixge_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nixge_priv*,struct nixge_tx_skb*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct nixge_priv *VAR_4 = FUNC_0(VAR_3);
 struct nixge_hw_dma_bd *VAR_5;
 struct nixge_tx_skb *VAR_6;
 unsigned int VAR_7 = 0;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;

 VAR_5 = &VAR_4->tx_bd_v[VAR_4->tx_bd_ci];
 VAR_6 = &VAR_4->tx_skb[VAR_4->tx_bd_ci];

 VAR_7 = VAR_5->status;

 while (VAR_7 & VAR_2) {
  FUNC_2(VAR_4, VAR_6);
  VAR_5->status = 0;

  VAR_9 += VAR_7 & VAR_1;
  VAR_8++;

  ++VAR_4->tx_bd_ci;
  VAR_4->tx_bd_ci %= VAR_0;
  VAR_5 = &VAR_4->tx_bd_v[VAR_4->tx_bd_ci];
  VAR_6 = &VAR_4->tx_skb[VAR_4->tx_bd_ci];
  VAR_7 = VAR_5->status;
 }

 VAR_3->stats.tx_packets += VAR_8;
 VAR_3->stats.tx_bytes += VAR_9;

 if (VAR_8)
  FUNC_1(VAR_3);
}
