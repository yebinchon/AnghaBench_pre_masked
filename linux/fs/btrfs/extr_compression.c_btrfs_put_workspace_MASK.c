
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct list_head {int dummy; } ;
struct workspace_manager {int free_ws; TYPE_1__* ops; int ws_wait; int total_ws; int ws_lock; struct list_head idle_ws; } ;
typedef int spinlock_t ;
typedef int atomic_t ;
struct TYPE_2__ {int (* free_workspace ) (struct list_head*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct list_head*,struct list_head*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct list_head*) ;

void FUNC_7(struct workspace_manager *VAR_0, struct list_head *VAR_1)
{
 struct list_head *VAR_2;
 spinlock_t *VAR_3;
 atomic_t *VAR_4;
 wait_queue_head_t *VAR_5;
 int *VAR_6;

 VAR_2 = &VAR_0->idle_ws;
 VAR_3 = &VAR_0->ws_lock;
 VAR_4 = &VAR_0->total_ws;
 VAR_5 = &VAR_0->ws_wait;
 VAR_6 = &VAR_0->free_ws;

 FUNC_4(VAR_3);
 if (*VAR_6 <= FUNC_3()) {
  FUNC_2(VAR_1, VAR_2);
  (*VAR_6)++;
  FUNC_5(VAR_3);
  goto wake;
 }
 FUNC_5(VAR_3);

 VAR_0->ops->free_workspace(VAR_1);
 FUNC_0(VAR_4);
wake:
 FUNC_1(VAR_5);
}
