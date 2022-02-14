
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct mcp251x_priv {int tx_work; int wq; struct sk_buff* tx_skb; scalar_t__ tx_len; struct spi_device* spi; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (int *,char*) ;
 struct mcp251x_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static netdev_tx_t FUNC_5(struct sk_buff *VAR_2,
        struct net_device *VAR_3)
{
 struct mcp251x_priv *VAR_4 = FUNC_2(VAR_3);
 struct spi_device *VAR_5 = VAR_4->spi;

 if (VAR_4->tx_skb || VAR_4->tx_len) {
  FUNC_1(&VAR_5->dev, "hard_xmit called while tx busy\n");
  return VAR_0;
 }

 if (FUNC_0(VAR_3, VAR_2))
  return VAR_1;

 FUNC_3(VAR_3);
 VAR_4->tx_skb = VAR_2;
 FUNC_4(VAR_4->wq, &VAR_4->tx_work);

 return VAR_1;
}
