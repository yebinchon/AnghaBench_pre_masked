
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark {struct fsnotify_group* group; } ;
struct fsnotify_group {int notification_waitq; scalar_t__ shutdown; int user_waits; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct fsnotify_mark*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fsnotify_mark *VAR_0)
{
 if (VAR_0) {
  struct fsnotify_group *VAR_1 = VAR_0->group;

  FUNC_1(VAR_0);




  if (FUNC_0(&VAR_1->user_waits) && VAR_1->shutdown)
   FUNC_2(&VAR_1->notification_waitq);
 }
}
