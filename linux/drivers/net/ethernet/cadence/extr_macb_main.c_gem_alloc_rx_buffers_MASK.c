
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct macb_queue {int rx_skbuff; } ;
struct macb {unsigned int num_queues; int rx_ring_size; int dev; struct macb_queue* queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct macb *VAR_2)
{
 struct macb_queue *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 for (VAR_4 = 0, VAR_3 = VAR_2->queues; VAR_4 < VAR_2->num_queues; ++VAR_4, ++VAR_3) {
  VAR_5 = VAR_2->rx_ring_size * sizeof(struct sk_buff *);
  VAR_3->rx_skbuff = FUNC_0(VAR_5, VAR_1);
  if (!VAR_3->rx_skbuff)
   return -VAR_0;
  else
   FUNC_1(VAR_2->dev,
       "Allocated %d RX struct sk_buff entries at %p\n",
       VAR_2->rx_ring_size, VAR_3->rx_skbuff);
 }
 return 0;
}
