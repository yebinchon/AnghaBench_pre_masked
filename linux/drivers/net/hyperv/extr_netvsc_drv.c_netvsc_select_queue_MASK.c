
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct net_device_ops {scalar_t__ (* ndo_select_queue ) (struct net_device*,struct sk_buff*,struct net_device*) ;} ;
struct net_device_context {int vf_netdev; } ;
struct net_device {scalar_t__ real_num_tx_queues; struct net_device_ops* netdev_ops; } ;
struct TYPE_2__ {scalar_t__ slave_dev_queue_mapping; } ;


 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*,int *) ;
 struct net_device_context* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*,struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 struct net_device* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct net_device*,struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static u16 FUNC_9(struct net_device *VAR_0, struct sk_buff *VAR_1,
          struct net_device *VAR_2)
{
 struct net_device_context *VAR_3 = FUNC_1(VAR_0);
 struct net_device *VAR_4;
 u16 VAR_5;

 FUNC_5();
 VAR_4 = FUNC_4(VAR_3->vf_netdev);
 if (VAR_4) {
  const struct net_device_ops *VAR_6 = VAR_4->netdev_ops;

  if (VAR_6->ndo_select_queue)
   VAR_5 = VAR_6->ndo_select_queue(VAR_4, VAR_1, VAR_2);
  else
   VAR_5 = FUNC_0(VAR_4, VAR_1, ((void*)0));





  FUNC_3(VAR_1)->slave_dev_queue_mapping = VAR_5;
 } else {
  VAR_5 = FUNC_2(VAR_0, VAR_1);
 }
 FUNC_6();

 while (FUNC_8(VAR_5 >= VAR_0->real_num_tx_queues))
  VAR_5 -= VAR_0->real_num_tx_queues;

 return VAR_5;
}
