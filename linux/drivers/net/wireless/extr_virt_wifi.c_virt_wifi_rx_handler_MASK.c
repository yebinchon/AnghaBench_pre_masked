
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_wifi_netdev_priv {TYPE_1__* upperdev; int is_connected; } ;
struct sk_buff {int pkt_type; TYPE_1__* dev; } ;
typedef int rx_handler_result_t ;
struct TYPE_2__ {int dev; int rx_handler_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct virt_wifi_netdev_priv* FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static rx_handler_result_t FUNC_3(struct sk_buff **VAR_5)
{
 struct sk_buff *VAR_6 = *VAR_5;
 struct virt_wifi_netdev_priv *VAR_7 =
  FUNC_1(VAR_6->dev->rx_handler_data);

 if (!VAR_7->is_connected)
  return VAR_4;


 VAR_6 = FUNC_2(VAR_6, VAR_0);
 if (!VAR_6) {
  FUNC_0(&VAR_7->upperdev->dev, "can't skb_share_check\n");
  return VAR_3;
 }

 *VAR_5 = VAR_6;
 VAR_6->dev = VAR_7->upperdev;
 VAR_6->pkt_type = VAR_1;
 return VAR_2;
}
