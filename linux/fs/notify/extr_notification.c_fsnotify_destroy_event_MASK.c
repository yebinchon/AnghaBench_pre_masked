
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_group {TYPE_1__* ops; int notification_lock; struct fsnotify_event* overflow_event; } ;
struct fsnotify_event {int list; } ;
struct TYPE_2__ {int (* free_event ) (struct fsnotify_event*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fsnotify_event*) ;

void FUNC_5(struct fsnotify_group *VAR_0,
       struct fsnotify_event *VAR_1)
{

 if (!VAR_1 || VAR_1 == VAR_0->overflow_event)
  return;






 if (!FUNC_1(&VAR_1->list)) {
  FUNC_2(&VAR_0->notification_lock);
  FUNC_0(!FUNC_1(&VAR_1->list));
  FUNC_3(&VAR_0->notification_lock);
 }
 VAR_0->ops->free_event(VAR_1);
}
