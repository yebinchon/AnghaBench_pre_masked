
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cw1200_queue_stats {scalar_t__ num_queued; int map_capacity; int lock; scalar_t__* link_map_cache; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct cw1200_queue_stats *VAR_0,
     u32 VAR_1)
{
 bool VAR_2 = 1;

 FUNC_1(&VAR_0->lock);
 if (VAR_1 == (u32)-1) {
  VAR_2 = VAR_0->num_queued == 0;
 } else {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0->map_capacity; ++VAR_3) {
   if (VAR_1 & FUNC_0(VAR_3)) {
    if (VAR_0->link_map_cache[VAR_3]) {
     VAR_2 = 0;
     break;
    }
   }
  }
 }
 FUNC_2(&VAR_0->lock);

 return VAR_2;
}
