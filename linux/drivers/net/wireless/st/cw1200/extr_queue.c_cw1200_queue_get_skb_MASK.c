
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cw1200_txpriv {int dummy; } ;
struct cw1200_queue_item {size_t generation; struct cw1200_txpriv txpriv; struct sk_buff* skb; } ;
struct cw1200_queue {size_t queue_id; size_t generation; int lock; scalar_t__ capacity; struct cw1200_queue_item* pool; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,size_t*,size_t*,size_t*,size_t*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct cw1200_queue *VAR_2, u32 VAR_3,
    struct sk_buff **VAR_4,
    const struct cw1200_txpriv **VAR_5)
{
 int VAR_6 = 0;
 u8 VAR_7, VAR_8, VAR_9, VAR_10;
 struct cw1200_queue_item *VAR_11;
 FUNC_2(VAR_3, &VAR_7, &VAR_8,
         &VAR_9, &VAR_10);

 VAR_11 = &VAR_2->pool[VAR_10];

 FUNC_3(&VAR_2->lock);
 FUNC_0(VAR_8 != VAR_2->queue_id);
 if (VAR_7 != VAR_2->generation) {
  VAR_6 = -VAR_1;
 } else if (VAR_10 >= (unsigned) VAR_2->capacity) {
  FUNC_1(1);
  VAR_6 = -VAR_0;
 } else if (VAR_11->generation != VAR_9) {
  FUNC_1(1);
  VAR_6 = -VAR_1;
 } else {
  *VAR_4 = VAR_11->skb;
  *VAR_5 = &VAR_11->txpriv;
 }
 FUNC_4(&VAR_2->lock);
 return VAR_6;
}
