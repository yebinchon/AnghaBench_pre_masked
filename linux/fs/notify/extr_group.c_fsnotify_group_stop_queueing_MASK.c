
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_group {int shutdown; int notification_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct fsnotify_group *VAR_0)
{
 FUNC_0(&VAR_0->notification_lock);
 VAR_0->shutdown = 1;
 FUNC_1(&VAR_0->notification_lock);
}
