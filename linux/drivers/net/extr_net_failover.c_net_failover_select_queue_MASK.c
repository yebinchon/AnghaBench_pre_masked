
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int queue_mapping; } ;
struct net_failover_info {int primary_dev; } ;
struct net_device_ops {int (* ndo_select_queue ) (struct net_device*,struct sk_buff*,struct net_device*) ;} ;
struct net_device {int real_num_tx_queues; struct net_device_ops* netdev_ops; } ;
struct TYPE_2__ {int slave_dev_queue_mapping; } ;


 int FUNC_0 (struct net_device*,struct sk_buff*,int *) ;
 struct net_failover_info* FUNC_1 (struct net_device*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 struct net_device* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct net_device*,struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static u16 FUNC_8(struct net_device *VAR_0,
         struct sk_buff *VAR_1,
         struct net_device *VAR_2)
{
 struct net_failover_info *VAR_3 = FUNC_1(VAR_0);
 struct net_device *VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_3(VAR_3->primary_dev);
 if (VAR_4) {
  const struct net_device_ops *VAR_6 = VAR_4->netdev_ops;

  if (VAR_6->ndo_select_queue)
   VAR_5 = VAR_6->ndo_select_queue(VAR_4, VAR_1, VAR_2);
  else
   VAR_5 = FUNC_0(VAR_4, VAR_1, ((void*)0));

  FUNC_2(VAR_1)->slave_dev_queue_mapping = VAR_1->queue_mapping;

  return VAR_5;
 }

 VAR_5 = FUNC_5(VAR_1) ? FUNC_4(VAR_1) : 0;


 FUNC_2(VAR_1)->slave_dev_queue_mapping = VAR_1->queue_mapping;

 if (FUNC_7(VAR_5 >= VAR_0->real_num_tx_queues)) {
  do {
   VAR_5 -= VAR_0->real_num_tx_queues;
  } while (VAR_5 >= VAR_0->real_num_tx_queues);
 }

 return VAR_5;
}
