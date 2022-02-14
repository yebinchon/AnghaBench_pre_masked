
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ ip_summed; struct sk_buff* next; } ;
struct r8152 {TYPE_1__* netdev; } ;
struct net_device_stats {int tx_dropped; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {scalar_t__ gso_size; } ;
struct TYPE_3__ {int features; struct net_device_stats stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff_head*,struct sk_buff_head*) ;
 TYPE_2__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct r8152 *VAR_4, struct sk_buff *VAR_5,
      struct sk_buff_head *VAR_6)
{
 if (FUNC_8(VAR_5)->gso_size) {
  netdev_features_t VAR_7 = VAR_4->netdev->features;
  struct sk_buff_head VAR_8;
  struct sk_buff *VAR_9, *VAR_10;

  VAR_7 &= ~(VAR_2 | VAR_1 | VAR_3);
  VAR_9 = FUNC_6(VAR_5, VAR_7);
  if (FUNC_0(VAR_9) || !VAR_9)
   goto drop;

  FUNC_2(&VAR_8);

  do {
   VAR_10 = VAR_9;
   VAR_9 = VAR_9->next;
   VAR_10->next = ((void*)0);
   FUNC_3(&VAR_8, VAR_10);
  } while (VAR_9);

  FUNC_7(&VAR_8, VAR_6);
  FUNC_4(VAR_5);
 } else if (VAR_5->ip_summed == VAR_0) {
  if (FUNC_5(VAR_5) < 0)
   goto drop;

  FUNC_1(VAR_6, VAR_5);
 } else {
  struct net_device_stats *VAR_11;

drop:
  VAR_11 = &VAR_4->netdev->stats;
  VAR_11->tx_dropped++;
  FUNC_4(VAR_5);
 }
}
