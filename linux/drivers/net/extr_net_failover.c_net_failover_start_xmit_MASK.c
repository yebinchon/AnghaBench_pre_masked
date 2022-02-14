
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int queue_mapping; struct net_device* dev; } ;
struct net_failover_info {int standby_dev; int primary_dev; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int slave_dev_queue_mapping; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct net_failover_info* FUNC_3 (struct net_device*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 struct net_device* FUNC_5 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_0,
        struct net_device *VAR_1)
{
 struct net_failover_info *VAR_2 = FUNC_3(VAR_1);
 struct net_device *VAR_3;


 VAR_3 = FUNC_5(VAR_2->primary_dev);
 if (!VAR_3 || !FUNC_2(VAR_3)) {
  VAR_3 = FUNC_5(VAR_2->standby_dev);
  if (!VAR_3 || !FUNC_2(VAR_3))
   return FUNC_1(VAR_0, VAR_1);
 }

 VAR_0->dev = VAR_3;
 VAR_0->queue_mapping = FUNC_4(VAR_0)->slave_dev_queue_mapping;

 return FUNC_0(VAR_0);
}
