
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark {int dummy; } ;
struct fsnotify_group {int mark_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsnotify_mark*) ;
 int FUNC_1 (struct fsnotify_mark*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fsnotify_mark *VAR_1,
      struct fsnotify_group *VAR_2)
{
 FUNC_2(&VAR_2->mark_mutex, VAR_0);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_2->mark_mutex);
 FUNC_1(VAR_1);
}
