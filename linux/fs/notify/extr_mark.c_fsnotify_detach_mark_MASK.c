
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark {int flags; int lock; int g_list; int refcnt; struct fsnotify_group* group; } ;
struct fsnotify_group {int num_marks; int mark_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct fsnotify_mark*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct fsnotify_mark *VAR_2)
{
 struct fsnotify_group *VAR_3 = VAR_2->group;

 FUNC_0(!FUNC_4(&VAR_3->mark_mutex));
 FUNC_0(!FUNC_8(&VAR_1) &&
       FUNC_5(&VAR_2->refcnt) < 1 +
   !!(VAR_2->flags & VAR_0));

 FUNC_6(&VAR_2->lock);

 if (!(VAR_2->flags & VAR_0)) {
  FUNC_7(&VAR_2->lock);
  return;
 }
 VAR_2->flags &= ~VAR_0;
 FUNC_3(&VAR_2->g_list);
 FUNC_7(&VAR_2->lock);

 FUNC_1(&VAR_3->num_marks);


 FUNC_2(VAR_2);
}
