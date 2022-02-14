
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int queue; } ;
struct recv_priv {int free_recv_buf_queue_cnt; int free_recv_skb_queue; int rx_skb_queue; int recv_tasklet; TYPE_1__ free_recv_buf_queue; scalar_t__ precv_buf; scalar_t__ pallocated_recv_buf; } ;
struct recv_buf {int list; struct _adapter* adapter; scalar_t__ ref_cnt; int recvbuf_lock; } ;
struct _adapter {int pnetdev; } ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct sk_buff* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct _adapter*,struct recv_buf*) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,void (*) (unsigned long),unsigned long) ;

void FUNC_11(struct recv_priv *VAR_6,
     struct _adapter *VAR_7)
{
 int VAR_8;
 struct recv_buf *VAR_9;
 addr_t VAR_10 = 0;
 int VAR_11 = 0;
 struct sk_buff *VAR_12 = ((void*)0);


 FUNC_1(&VAR_6->free_recv_buf_queue);
 VAR_6->pallocated_recv_buf =
  FUNC_2(VAR_3 * sizeof(struct recv_buf) + 4, VAR_0);
 if (!VAR_6->pallocated_recv_buf)
  return;
 VAR_6->precv_buf = VAR_6->pallocated_recv_buf + 4 -
         ((addr_t)(VAR_6->pallocated_recv_buf) & 3);
 VAR_9 = (struct recv_buf *)VAR_6->precv_buf;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  FUNC_0(&VAR_9->list);
  FUNC_9(&VAR_9->recvbuf_lock);
  if (FUNC_5(VAR_7, VAR_9))
   break;
  VAR_9->ref_cnt = 0;
  VAR_9->adapter = VAR_7;
  FUNC_3(&VAR_9->list,
     &(VAR_6->free_recv_buf_queue.queue));
  VAR_9++;
 }
 VAR_6->free_recv_buf_queue_cnt = VAR_3;
 FUNC_10(&VAR_6->recv_tasklet,
      (void(*)(unsigned long))VAR_5,
      (unsigned long)VAR_7);
 FUNC_6(&VAR_6->rx_skb_queue);

 FUNC_6(&VAR_6->free_recv_skb_queue);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_12 = FUNC_4(VAR_7->pnetdev, VAR_1 +
         VAR_4);
  if (VAR_12) {
   VAR_10 = (addr_t)VAR_12->data;
   VAR_11 = VAR_10 & (VAR_4 - 1);
   FUNC_8(VAR_12, (VAR_4 - VAR_11));
   FUNC_7(&VAR_6->free_recv_skb_queue, VAR_12);
  }
  VAR_12 = ((void*)0);
 }
}
