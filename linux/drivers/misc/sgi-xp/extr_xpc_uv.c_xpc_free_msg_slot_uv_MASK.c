
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xpc_send_msg_slot_uv {int next; } ;
struct TYPE_3__ {int msg_slot_free_list; } ;
struct TYPE_4__ {TYPE_1__ uv; } ;
struct xpc_channel {int msg_allocate_wq; int n_on_msg_allocate_wq; TYPE_2__ sn; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct xpc_channel *VAR_0,
       struct xpc_send_msg_slot_uv *VAR_1)
{
 FUNC_2(&VAR_0->sn.uv.msg_slot_free_list, &VAR_1->next);


 if (FUNC_0(&VAR_0->n_on_msg_allocate_wq) > 0)
  FUNC_1(&VAR_0->msg_allocate_wq);
}
