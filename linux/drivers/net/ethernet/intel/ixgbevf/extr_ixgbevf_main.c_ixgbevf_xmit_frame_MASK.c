
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; size_t queue_mapping; } ;
struct net_device {int dummy; } ;
struct ixgbevf_ring {int dummy; } ;
struct ixgbevf_adapter {struct ixgbevf_ring** tx_ring; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct ixgbevf_ring*) ;
 struct ixgbevf_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static netdev_tx_t FUNC_4(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct ixgbevf_adapter *VAR_3 = FUNC_2(VAR_2);
 struct ixgbevf_ring *VAR_4;

 if (VAR_1->len <= 0) {
  FUNC_0(VAR_1);
  return VAR_0;
 }




 if (VAR_1->len < 17) {
  if (FUNC_3(VAR_1, 17))
   return VAR_0;
  VAR_1->len = 17;
 }

 VAR_4 = VAR_3->tx_ring[VAR_1->queue_mapping];
 return FUNC_1(VAR_1, VAR_4);
}
