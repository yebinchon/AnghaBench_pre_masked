
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int lock; } ;
struct sk_buff {int dummy; } ;
struct r8152 {struct sk_buff_head tx_queue; TYPE_1__* netdev; } ;
struct net_device_stats {int tx_dropped; } ;
struct TYPE_2__ {struct net_device_stats stats; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct r8152 *VAR_0)
{
 struct net_device_stats *VAR_1 = &VAR_0->netdev->stats;
 struct sk_buff_head VAR_2, *VAR_3 = &VAR_0->tx_queue;
 struct sk_buff *VAR_4;

 if (FUNC_3(VAR_3))
  return;

 FUNC_1(&VAR_2);
 FUNC_5(&VAR_3->lock);
 FUNC_4(VAR_3, &VAR_2);
 FUNC_6(&VAR_3->lock);

 while ((VAR_4 = FUNC_0(&VAR_2))) {
  FUNC_2(VAR_4);
  VAR_1->tx_dropped++;
 }
}
