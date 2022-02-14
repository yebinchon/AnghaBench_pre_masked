
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cw1200_txpriv {int dummy; } ;
struct cw1200_queue_stats {int priv; int (* skb_dtor ) (int ,struct sk_buff*,struct cw1200_txpriv*) ;} ;
struct cw1200_queue_item {size_t generation; int head; struct sk_buff* skb; struct cw1200_txpriv txpriv; } ;
struct cw1200_queue {size_t queue_id; size_t generation; int capacity; int num_queued; int overfull; int lock; int free_pool; int num_sent; int num_pending; struct cw1200_queue_item* pool; struct cw1200_queue_stats* stats; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cw1200_queue*) ;
 int FUNC_3 (int ,size_t*,size_t*,size_t*,size_t*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct sk_buff*,struct cw1200_txpriv*) ;

int FUNC_8(struct cw1200_queue *VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;
 u8 VAR_5, VAR_6, VAR_7, VAR_8;
 struct cw1200_queue_item *VAR_9;
 struct cw1200_queue_stats *VAR_10 = VAR_2->stats;
 struct sk_buff *VAR_11 = ((void*)0);
 struct cw1200_txpriv VAR_12;

 FUNC_3(VAR_3, &VAR_5, &VAR_6,
         &VAR_7, &VAR_8);

 VAR_9 = &VAR_2->pool[VAR_8];

 FUNC_5(&VAR_2->lock);
 FUNC_0(VAR_6 != VAR_2->queue_id);
 if (VAR_5 != VAR_2->generation) {
  VAR_4 = -VAR_1;
 } else if (VAR_8 >= (unsigned) VAR_2->capacity) {
  FUNC_1(1);
  VAR_4 = -VAR_0;
 } else if (VAR_9->generation != VAR_7) {
  FUNC_1(1);
  VAR_4 = -VAR_1;
 } else {
  VAR_12 = VAR_9->txpriv;
  VAR_11 = VAR_9->skb;
  VAR_9->skb = ((void*)0);
  --VAR_2->num_pending;
  --VAR_2->num_queued;
  ++VAR_2->num_sent;
  ++VAR_9->generation;



  FUNC_4(&VAR_9->head, &VAR_2->free_pool);

  if (VAR_2->overfull &&
      (VAR_2->num_queued <= (VAR_2->capacity >> 1))) {
   VAR_2->overfull = 0;
   FUNC_2(VAR_2);
  }
 }
 FUNC_6(&VAR_2->lock);

 if (VAR_11)
  VAR_10->skb_dtor(VAR_10->priv, VAR_11, &VAR_12);

 return VAR_4;
}
