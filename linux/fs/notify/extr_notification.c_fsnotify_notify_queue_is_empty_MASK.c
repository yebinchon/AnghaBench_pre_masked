
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_group {int notification_list; int notification_lock; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

bool FUNC_2(struct fsnotify_group *VAR_0)
{
 FUNC_0(&VAR_0->notification_lock);
 return FUNC_1(&VAR_0->notification_list) ? 1 : 0;
}
