
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct cw1200_queue_stats {int lock; int * link_map_cache; int num_queued; } ;
struct TYPE_2__ {size_t link_id; } ;
struct cw1200_queue_item {size_t generation; int head; int packet_id; TYPE_1__ txpriv; } ;
struct cw1200_queue {size_t queue_id; size_t generation; int lock; int queue; int * link_map_cache; int num_pending; scalar_t__ capacity; struct cw1200_queue_item* pool; struct cw1200_queue_stats* stats; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (size_t,size_t,size_t,size_t) ;
 int FUNC_3 (int ,size_t*,size_t*,size_t*,size_t*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct cw1200_queue *VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;
 u8 VAR_5, VAR_6, VAR_7, VAR_8;
 struct cw1200_queue_item *VAR_9;
 struct cw1200_queue_stats *VAR_10 = VAR_2->stats;

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
  --VAR_2->num_pending;
  ++VAR_2->link_map_cache[VAR_9->txpriv.link_id];

  FUNC_5(&VAR_10->lock);
  ++VAR_10->num_queued;
  ++VAR_10->link_map_cache[VAR_9->txpriv.link_id];
  FUNC_6(&VAR_10->lock);

  VAR_9->generation = ++VAR_7;
  VAR_9->packet_id = FUNC_2(VAR_5,
           VAR_6,
           VAR_7,
           VAR_8);
  FUNC_4(&VAR_9->head, &VAR_2->queue);
 }
 FUNC_6(&VAR_2->lock);
 return VAR_4;
}
