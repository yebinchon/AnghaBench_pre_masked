
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct can_rx_offload_cb {int timestamp; } ;
struct TYPE_3__ {int lock; } ;
struct can_rx_offload {scalar_t__ skb_queue_len_max; TYPE_1__ skb_queue; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct sk_buff*,int ) ;
 int VAR_1 ;
 struct can_rx_offload_cb* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct can_rx_offload*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct can_rx_offload *VAR_2,
    struct sk_buff *VAR_3, u32 VAR_4)
{
 struct can_rx_offload_cb *VAR_5;
 unsigned long VAR_6;

 if (FUNC_4(&VAR_2->skb_queue) >
     VAR_2->skb_queue_len_max) {
  FUNC_3(VAR_3);
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_3);
 VAR_5->timestamp = VAR_4;

 FUNC_5(&VAR_2->skb_queue.lock, VAR_6);
 FUNC_0(&VAR_2->skb_queue, VAR_3, VAR_1);
 FUNC_6(&VAR_2->skb_queue.lock, VAR_6);

 FUNC_2(VAR_2);

 return 0;
}
