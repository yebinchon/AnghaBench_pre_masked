
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cw1200_queue {size_t num_queued; size_t num_pending; int lock; scalar_t__* link_map_cache; TYPE_1__* stats; } ;
struct TYPE_2__ {size_t map_capacity; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

size_t FUNC_2(struct cw1200_queue *VAR_0,
       u32 VAR_1)
{
 size_t VAR_2;
 int VAR_3, VAR_4;
 size_t VAR_5 = VAR_0->stats->map_capacity;

 if (!VAR_1)
  return 0;

 FUNC_0(&VAR_0->lock);
 if (VAR_1 == (u32)-1) {
  VAR_2 = VAR_0->num_queued - VAR_0->num_pending;
 } else {
  VAR_2 = 0;
  for (VAR_3 = 0, VAR_4 = 1; VAR_3 < VAR_5; ++VAR_3, VAR_4 <<= 1) {
   if (VAR_1 & VAR_4)
    VAR_2 += VAR_0->link_map_cache[VAR_3];
  }
 }
 FUNC_1(&VAR_0->lock);
 return VAR_2;
}
