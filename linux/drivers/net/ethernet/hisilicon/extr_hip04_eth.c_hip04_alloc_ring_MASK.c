
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_desc {int dummy; } ;
struct skb_shared_info {int dummy; } ;
struct net_device {int dummy; } ;
struct hip04_priv {int * rx_buf; scalar_t__ rx_buf_size; int tx_desc; int tx_desc_dma; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct device*,int,int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 struct hip04_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5, struct device *VAR_6)
{
 struct hip04_priv *VAR_7 = FUNC_3(VAR_5);
 int VAR_8;

 VAR_7->tx_desc = FUNC_1(VAR_6,
        VAR_4 * sizeof(struct tx_desc),
        &VAR_7->tx_desc_dma, VAR_1);
 if (!VAR_7->tx_desc)
  return -VAR_0;

 VAR_7->rx_buf_size = VAR_2 +
       FUNC_0(sizeof(struct skb_shared_info));
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7->rx_buf[VAR_8] = FUNC_2(VAR_7->rx_buf_size);
  if (!VAR_7->rx_buf[VAR_8])
   return -VAR_0;
 }

 return 0;
}
