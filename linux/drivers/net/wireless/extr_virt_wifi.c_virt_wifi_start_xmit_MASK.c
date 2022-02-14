
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_wifi_netdev_priv {int lowerdev; int tx_failed; int is_connected; int tx_packets; } ;
struct sk_buff {int dev; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct virt_wifi_netdev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_2(struct sk_buff *VAR_1,
     struct net_device *VAR_2)
{
 struct virt_wifi_netdev_priv *VAR_3 = FUNC_1(VAR_2);

 VAR_3->tx_packets++;
 if (!VAR_3->is_connected) {
  VAR_3->tx_failed++;
  return VAR_0;
 }

 VAR_1->dev = VAR_3->lowerdev;
 return FUNC_0(VAR_1);
}
