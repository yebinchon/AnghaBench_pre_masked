
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct igbvf_ring {int dummy; } ;
struct igbvf_adapter {struct igbvf_ring* tx_ring; int state; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,struct igbvf_ring*) ;
 struct igbvf_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static netdev_tx_t FUNC_4(struct sk_buff *VAR_2,
        struct net_device *VAR_3)
{
 struct igbvf_adapter *VAR_4 = FUNC_2(VAR_3);
 struct igbvf_ring *VAR_5;

 if (FUNC_3(VAR_1, &VAR_4->state)) {
  FUNC_0(VAR_2);
  return VAR_0;
 }

 VAR_5 = &VAR_4->tx_ring[0];

 return FUNC_1(VAR_2, VAR_3, VAR_5);
}
