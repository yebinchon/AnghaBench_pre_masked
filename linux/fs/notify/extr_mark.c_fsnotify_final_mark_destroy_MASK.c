
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_mark {struct fsnotify_group* group; } ;
struct fsnotify_group {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* free_mark ) (struct fsnotify_mark*) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct fsnotify_group*) ;
 int FUNC_2 (struct fsnotify_mark*) ;

__attribute__((used)) static void FUNC_3(struct fsnotify_mark *VAR_0)
{
 struct fsnotify_group *VAR_1 = VAR_0->group;

 if (FUNC_0(!VAR_1))
  return;
 VAR_1->ops->free_mark(VAR_0);
 FUNC_1(VAR_1);
}
