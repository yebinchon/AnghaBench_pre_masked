
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark {int connector; struct fsnotify_group* group; int refcnt; int lock; } ;
struct fsnotify_group {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct fsnotify_group*) ;
 int FUNC_2 (struct fsnotify_mark*,int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct fsnotify_mark *VAR_0,
   struct fsnotify_group *VAR_1)
{
 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
 FUNC_4(&VAR_0->lock);
 FUNC_3(&VAR_0->refcnt, 1);
 FUNC_1(VAR_1);
 VAR_0->group = VAR_1;
 FUNC_0(VAR_0->connector, ((void*)0));
}
