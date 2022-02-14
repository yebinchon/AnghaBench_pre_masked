
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct mcp251x_priv {scalar_t__ tx_len; int * tx_skb; int net; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 struct mcp251x_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct mcp251x_priv *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->tx_skb || VAR_1->tx_len)
  VAR_0->stats.tx_errors++;
 FUNC_1(VAR_1->tx_skb);
 if (VAR_1->tx_len)
  FUNC_0(VAR_1->net, 0);
 VAR_1->tx_skb = ((void*)0);
 VAR_1->tx_len = 0;
}
