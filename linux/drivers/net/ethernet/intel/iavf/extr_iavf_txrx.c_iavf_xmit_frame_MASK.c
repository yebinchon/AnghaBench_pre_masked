
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {size_t queue_mapping; scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct iavf_ring {int dummy; } ;
struct iavf_adapter {struct iavf_ring* tx_rings; } ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct iavf_ring*) ;
 struct iavf_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

netdev_tx_t FUNC_5(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct iavf_adapter *VAR_4 = FUNC_1(VAR_3);
 struct iavf_ring *VAR_5 = &VAR_4->tx_rings[VAR_2->queue_mapping];




 if (FUNC_4(VAR_2->len < VAR_0)) {
  if (FUNC_2(VAR_2, VAR_0 - VAR_2->len))
   return VAR_1;
  VAR_2->len = VAR_0;
  FUNC_3(VAR_2, VAR_0);
 }

 return FUNC_0(VAR_2, VAR_5);
}
