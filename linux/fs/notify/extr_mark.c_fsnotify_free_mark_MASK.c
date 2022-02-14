
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_mark {int flags; int lock; struct fsnotify_group* group; } ;
struct fsnotify_group {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* freeing_mark ) (struct fsnotify_mark*,struct fsnotify_group*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fsnotify_mark*,struct fsnotify_group*) ;

void FUNC_3(struct fsnotify_mark *VAR_1)
{
 struct fsnotify_group *VAR_2 = VAR_1->group;

 FUNC_0(&VAR_1->lock);

 if (!(VAR_1->flags & VAR_0)) {
  FUNC_1(&VAR_1->lock);
  return;
 }
 VAR_1->flags &= ~VAR_0;
 FUNC_1(&VAR_1->lock);






 if (VAR_2->ops->freeing_mark)
  VAR_2->ops->freeing_mark(VAR_1, VAR_2);
}
