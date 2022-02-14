
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_group {int q_len; int notification_lock; } ;
struct fsnotify_event {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct fsnotify_group *VAR_0,
      struct fsnotify_event *VAR_1)
{
 FUNC_0(&VAR_0->notification_lock);




 FUNC_1(&VAR_1->list);
 VAR_0->q_len--;
}
