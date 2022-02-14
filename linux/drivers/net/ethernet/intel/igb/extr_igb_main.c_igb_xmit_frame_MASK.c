
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct igb_adapter {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct igb_adapter*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 struct igb_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static netdev_tx_t FUNC_4(struct sk_buff *VAR_1,
      struct net_device *VAR_2)
{
 struct igb_adapter *VAR_3 = FUNC_2(VAR_2);




 if (FUNC_3(VAR_1, 17))
  return VAR_0;

 return FUNC_1(VAR_1, FUNC_0(VAR_3, VAR_1));
}
