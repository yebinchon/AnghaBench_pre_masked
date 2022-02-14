
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_queue_stats {size_t map_capacity; int link_map_cache; int wait_link_id_empty; int lock; struct cw1200_common* priv; int skb_dtor; } ;
struct cw1200_common {int dummy; } ;
typedef int cw1200_queue_skb_dtor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (size_t,int,int ) ;
 int FUNC_2 (struct cw1200_queue_stats*,int ,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct cw1200_queue_stats *VAR_2,
       size_t VAR_3,
       cw1200_queue_skb_dtor_t VAR_4,
       struct cw1200_common *VAR_5)
{
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->map_capacity = VAR_3;
 VAR_2->skb_dtor = VAR_4;
 VAR_2->priv = VAR_5;
 FUNC_3(&VAR_2->lock);
 FUNC_0(&VAR_2->wait_link_id_empty);

 VAR_2->link_map_cache = FUNC_1(VAR_3, sizeof(int),
     VAR_1);
 if (!VAR_2->link_map_cache)
  return -VAR_0;

 return 0;
}
