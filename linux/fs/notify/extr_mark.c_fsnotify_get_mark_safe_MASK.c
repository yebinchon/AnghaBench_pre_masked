
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_mark {int flags; int lock; TYPE_1__* group; int refcnt; } ;
struct TYPE_2__ {int user_waits; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fsnotify_mark*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct fsnotify_mark *VAR_1)
{
 if (!VAR_1)
  return 1;

 if (FUNC_2(&VAR_1->refcnt)) {
  FUNC_3(&VAR_1->lock);
  if (VAR_1->flags & VAR_0) {

   FUNC_0(&VAR_1->group->user_waits);
   FUNC_4(&VAR_1->lock);
   return 1;
  }
  FUNC_4(&VAR_1->lock);
  FUNC_1(VAR_1);
 }
 return 0;
}
