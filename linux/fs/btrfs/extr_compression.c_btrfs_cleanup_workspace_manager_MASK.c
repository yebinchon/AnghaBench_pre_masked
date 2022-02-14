
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct list_head* next; } ;
struct workspace_manager {int total_ws; TYPE_1__* ops; TYPE_2__ idle_ws; } ;
struct list_head {int dummy; } ;
struct TYPE_3__ {int (* free_workspace ) (struct list_head*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct list_head*) ;

void FUNC_4(struct workspace_manager *VAR_0)
{
 struct list_head *VAR_1;

 while (!FUNC_2(&VAR_0->idle_ws)) {
  VAR_1 = VAR_0->idle_ws.next;
  FUNC_1(VAR_1);
  VAR_0->ops->free_workspace(VAR_1);
  FUNC_0(&VAR_0->total_ws);
 }
}
