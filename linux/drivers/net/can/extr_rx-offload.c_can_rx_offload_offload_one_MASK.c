
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct can_rx_offload_cb {int timestamp; } ;
struct can_rx_offload {scalar_t__ skb_queue_len_max; int (* mailbox_read ) (struct can_rx_offload*,struct can_frame*,int *,unsigned int) ;TYPE_2__* dev; int skb_queue; } ;
struct can_frame {int dummy; } ;
struct TYPE_3__ {int rx_fifo_errors; int rx_dropped; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (TYPE_2__*,struct can_frame**) ;
 struct can_rx_offload_cb* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct can_rx_offload*,struct can_frame*,int *,unsigned int) ;
 int FUNC_7 (struct can_rx_offload*,struct can_frame*,int *,unsigned int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct sk_buff *
FUNC_9(struct can_rx_offload *VAR_2, unsigned int VAR_3)
{
 struct sk_buff *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 struct can_rx_offload_cb *VAR_6;
 struct can_frame *VAR_7;
 int VAR_8;

 if (FUNC_4(FUNC_5(&VAR_2->skb_queue) <
     VAR_2->skb_queue_len_max)) {
  VAR_4 = FUNC_1(VAR_2->dev, &VAR_7);
  if (FUNC_8(!VAR_4))
   VAR_5 = FUNC_0(-VAR_1);
 } else {
  VAR_5 = FUNC_0(-VAR_0);
 }




 if (FUNC_8(VAR_5)) {
  struct can_frame VAR_9;
  u32 VAR_10;

  VAR_8 = VAR_2->mailbox_read(VAR_2, &VAR_9,
         &VAR_10, VAR_3);


  if (FUNC_8(!VAR_8))
   return ((void*)0);






  VAR_2->dev->stats.rx_dropped++;
  VAR_2->dev->stats.rx_fifo_errors++;




  if (FUNC_8(VAR_8 < 0))
   return FUNC_0(VAR_8);

  return VAR_5;
 }

 VAR_6 = FUNC_2(VAR_4);
 VAR_8 = VAR_2->mailbox_read(VAR_2, VAR_7, &VAR_6->timestamp, VAR_3);


 if (FUNC_8(!VAR_8)) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }


 if (FUNC_8(VAR_8 < 0)) {
  FUNC_3(VAR_4);

  VAR_2->dev->stats.rx_dropped++;
  VAR_2->dev->stats.rx_fifo_errors++;

  return FUNC_0(VAR_8);
 }


 return VAR_4;
}
