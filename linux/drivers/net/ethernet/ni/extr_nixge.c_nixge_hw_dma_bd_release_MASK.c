
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nixge_priv {int tx_bd_p; int * tx_bd_v; scalar_t__ tx_skb; int rx_bd_p; int * rx_bd_v; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 struct nixge_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6)
{
 struct nixge_priv *VAR_7 = FUNC_4(VAR_6);
 dma_addr_t VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_8 = FUNC_5(&VAR_7->rx_bd_v[VAR_10],
           VAR_4);

  FUNC_3(VAR_6->dev.parent, VAR_8,
     VAR_1,
     VAR_0);

  VAR_9 = (struct sk_buff *)(uintptr_t)
   FUNC_5(&VAR_7->rx_bd_v[VAR_10],
       VAR_5);
  FUNC_0(VAR_9);
 }

 if (VAR_7->rx_bd_v)
  FUNC_2(VAR_6->dev.parent,
      sizeof(*VAR_7->rx_bd_v) * VAR_2,
      VAR_7->rx_bd_v,
      VAR_7->rx_bd_p);

 if (VAR_7->tx_skb)
  FUNC_1(VAR_6->dev.parent, VAR_7->tx_skb);

 if (VAR_7->tx_bd_v)
  FUNC_2(VAR_6->dev.parent,
      sizeof(*VAR_7->tx_bd_v) * VAR_3,
      VAR_7->tx_bd_v,
      VAR_7->tx_bd_p);
}
