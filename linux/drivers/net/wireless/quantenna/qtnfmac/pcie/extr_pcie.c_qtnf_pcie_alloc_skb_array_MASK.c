
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qtnf_pcie_bus_priv {int tx_bd_num; int rx_bd_num; struct sk_buff** rx_skb; struct sk_buff** tx_skb; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff** FUNC_0 (int *,int,int ) ;

int FUNC_1(struct qtnf_pcie_bus_priv *VAR_2)
{
 struct sk_buff **VAR_3;
 int VAR_4;

 VAR_4 = VAR_2->tx_bd_num * sizeof(*VAR_2->tx_skb) +
  VAR_2->rx_bd_num * sizeof(*VAR_2->rx_skb);
 VAR_3 = FUNC_0(&VAR_2->pdev->dev, VAR_4, VAR_1);

 if (!VAR_3)
  return -VAR_0;

 VAR_2->tx_skb = VAR_3;

 VAR_3 += VAR_2->tx_bd_num;
 VAR_2->rx_skb = VAR_3;

 return 0;
}
