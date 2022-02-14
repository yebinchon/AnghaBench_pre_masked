
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_ops {int dummy; } ;
struct fsnotify_group {struct fsnotify_ops const* ops; int marks_list; int mark_mutex; int max_events; int notification_waitq; int notification_list; int notification_lock; int user_waits; int num_marks; int refcnt; } ;


 int VAR_0 ;
 struct fsnotify_group* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct fsnotify_group* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

struct fsnotify_group *FUNC_8(const struct fsnotify_ops *VAR_3)
{
 struct fsnotify_group *VAR_4;

 VAR_4 = FUNC_4(sizeof(struct fsnotify_group), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);


 FUNC_6(&VAR_4->refcnt, 1);
 FUNC_2(&VAR_4->num_marks, 0);
 FUNC_2(&VAR_4->user_waits, 0);

 FUNC_7(&VAR_4->notification_lock);
 FUNC_1(&VAR_4->notification_list);
 FUNC_3(&VAR_4->notification_waitq);
 VAR_4->max_events = VAR_2;

 FUNC_5(&VAR_4->mark_mutex);
 FUNC_1(&VAR_4->marks_list);

 VAR_4->ops = VAR_3;

 return VAR_4;
}
