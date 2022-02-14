
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_desc {int dummy; } ;
struct net_device {int dummy; } ;
struct hip04_priv {int tx_desc_dma; int tx_desc; scalar_t__* tx_skb; scalar_t__* rx_buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,int,int ,int ) ;
 struct hip04_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, struct device *VAR_3)
{
 struct hip04_priv *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_4->rx_buf[VAR_5])
   FUNC_3(VAR_4->rx_buf[VAR_5]);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_4->tx_skb[VAR_5])
   FUNC_0(VAR_4->tx_skb[VAR_5]);

 FUNC_1(VAR_3, VAR_1 * sizeof(struct tx_desc),
     VAR_4->tx_desc, VAR_4->tx_desc_dma);
}
