
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct workspace {int req_level; int level; int list; int lru_list; scalar_t__ last_used; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int wait; int lock; int * idle_ws; int active_map; int timer; int lru_list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct workspace* FUNC_4 (struct list_head*) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_10(struct list_head *VAR_4)
{
 struct workspace *VAR_5 = FUNC_4(VAR_4);

 FUNC_7(&VAR_3.lock);


 if (VAR_5->req_level == VAR_5->level) {

  if (FUNC_3(&VAR_3.idle_ws[VAR_0 - 1])) {
   FUNC_0(&VAR_5->lru_list);
  } else {
   VAR_5->last_used = VAR_2;
   FUNC_2(&VAR_5->lru_list, &VAR_3.lru_list);
   if (!FUNC_9(&VAR_3.timer))
    FUNC_5(&VAR_3.timer,
       VAR_2 + VAR_1);
  }
 }

 FUNC_6(VAR_5->level - 1, &VAR_3.active_map);
 FUNC_2(&VAR_5->list, &VAR_3.idle_ws[VAR_5->level - 1]);
 VAR_5->req_level = 0;

 FUNC_8(&VAR_3.lock);

 if (VAR_5->level == VAR_0)
  FUNC_1(&VAR_3.wait);
}
