
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fscache_transition {int events; } ;
struct fscache_object {int flags; int oob_event_mask; int event_mask; TYPE_1__* state; struct fscache_transition* oob_table; int objlist_link; int * parent; struct fscache_cookie* cookie; struct fscache_cache* cache; scalar_t__ store_limit_l; scalar_t__ store_limit; scalar_t__ events; scalar_t__ n_exclusive; scalar_t__ n_in_progress; scalar_t__ n_ops; scalar_t__ n_children; int pending_ops; int dep_link; int dependents; int work; int cookie_link; int cache_link; int lock; } ;
struct fscache_cookie {int dummy; } ;
struct fscache_cache {int object_count; } ;
struct TYPE_2__ {struct fscache_transition* transitions; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct fscache_cookie*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct fscache_transition* VAR_4 ;
 int FUNC_7 (int *) ;

void FUNC_8(struct fscache_object *VAR_5,
    struct fscache_cookie *VAR_6,
    struct fscache_cache *VAR_7)
{
 const struct fscache_transition *VAR_8;

 FUNC_5(&VAR_7->object_count);

 VAR_5->state = FUNC_4(VAR_1);
 VAR_5->oob_table = VAR_4;
 VAR_5->flags = 1 << VAR_0;
 FUNC_7(&VAR_5->lock);
 FUNC_1(&VAR_5->cache_link);
 FUNC_0(&VAR_5->cookie_link);
 FUNC_2(&VAR_5->work, VAR_3);
 FUNC_1(&VAR_5->dependents);
 FUNC_1(&VAR_5->dep_link);
 FUNC_1(&VAR_5->pending_ops);
 VAR_5->n_children = 0;
 VAR_5->n_ops = VAR_5->n_in_progress = VAR_5->n_exclusive = 0;
 VAR_5->events = 0;
 VAR_5->store_limit = 0;
 VAR_5->store_limit_l = 0;
 VAR_5->cache = VAR_7;
 VAR_5->cookie = VAR_6;
 FUNC_6(VAR_6, VAR_2);
 VAR_5->parent = ((void*)0);




 VAR_5->oob_event_mask = 0;
 for (VAR_8 = VAR_5->oob_table; VAR_8->events; VAR_8++)
  VAR_5->oob_event_mask |= VAR_8->events;
 VAR_5->event_mask = VAR_5->oob_event_mask;
 for (VAR_8 = VAR_5->state->transitions; VAR_8->events; VAR_8++)
  VAR_5->event_mask |= VAR_8->events;
}
