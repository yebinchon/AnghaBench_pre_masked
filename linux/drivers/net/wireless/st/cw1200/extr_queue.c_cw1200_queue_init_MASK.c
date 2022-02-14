
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cw1200_queue_stats {size_t map_capacity; } ;
struct cw1200_queue_item {int dummy; } ;
struct cw1200_queue {size_t capacity; unsigned long ttl; int free_pool; TYPE_1__* pool; void* link_map_cache; int gc; int lock; int pending; int queue; int queue_id; struct cw1200_queue_stats* stats; } ;
struct TYPE_2__ {int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 void* FUNC_1 (size_t,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct cw1200_queue*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

int FUNC_7(struct cw1200_queue *VAR_3,
        struct cw1200_queue_stats *VAR_4,
        u8 VAR_5,
        size_t VAR_6,
        unsigned long VAR_7)
{
 size_t VAR_8;

 FUNC_4(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->stats = VAR_4;
 VAR_3->capacity = VAR_6;
 VAR_3->queue_id = VAR_5;
 VAR_3->ttl = VAR_7;
 FUNC_0(&VAR_3->queue);
 FUNC_0(&VAR_3->pending);
 FUNC_0(&VAR_3->free_pool);
 FUNC_5(&VAR_3->lock);
 FUNC_6(&VAR_3->gc, VAR_2, 0);

 VAR_3->pool = FUNC_1(VAR_6, sizeof(struct cw1200_queue_item),
         VAR_1);
 if (!VAR_3->pool)
  return -VAR_0;

 VAR_3->link_map_cache = FUNC_1(VAR_4->map_capacity, sizeof(int),
     VAR_1);
 if (!VAR_3->link_map_cache) {
  FUNC_2(VAR_3->pool);
  VAR_3->pool = ((void*)0);
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8)
  FUNC_3(&VAR_3->pool[VAR_8].head, &VAR_3->free_pool);

 return 0;
}
