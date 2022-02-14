
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_queue_state_params {unsigned long ramrod_flags; struct bnx2x_queue_sp_obj* q_obj; } ;
struct bnx2x_queue_sp_obj {unsigned long pending; int (* check_transition ) (struct bnx2x*,struct bnx2x_queue_sp_obj*,struct bnx2x_queue_state_params*) ;int (* set_pending ) (struct bnx2x_queue_sp_obj*,struct bnx2x_queue_state_params*) ;int (* send_cmd ) (struct bnx2x*,struct bnx2x_queue_state_params*) ;int (* wait_comp ) (struct bnx2x*,struct bnx2x_queue_sp_obj*,int) ;int next_state; int (* complete_cmd ) (struct bnx2x*,struct bnx2x_queue_sp_obj*,int) ;} ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,unsigned long*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_queue_sp_obj*,struct bnx2x_queue_state_params*) ;
 int FUNC_5 (struct bnx2x_queue_sp_obj*,struct bnx2x_queue_state_params*) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_queue_sp_obj*,int) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_8 (struct bnx2x*,struct bnx2x_queue_sp_obj*,int) ;
 scalar_t__ FUNC_9 (int,unsigned long*) ;

int FUNC_10(struct bnx2x *VAR_5,
        struct bnx2x_queue_state_params *VAR_6)
{
 struct bnx2x_queue_sp_obj *VAR_7 = VAR_6->q_obj;
 int VAR_8, VAR_9;
 unsigned long *VAR_10 = &VAR_7->pending;


 VAR_8 = VAR_7->check_transition(VAR_5, VAR_7, VAR_6);
 if (VAR_8) {
  FUNC_0("check transition returned an error. rc %d\n", VAR_8);
  return -VAR_2;
 }


 FUNC_1(VAR_0, "pending bit was=%lx\n", VAR_7->pending);
 VAR_9 = VAR_7->set_pending(VAR_7, VAR_6);
 FUNC_1(VAR_0, "pending bit now=%lx\n", VAR_7->pending);


 if (FUNC_9(VAR_4, &VAR_6->ramrod_flags))
  VAR_7->complete_cmd(VAR_5, VAR_7, VAR_9);
 else {

  VAR_8 = VAR_7->send_cmd(VAR_5, VAR_6);
  if (VAR_8) {
   VAR_7->next_state = VAR_1;
   FUNC_2(VAR_9, VAR_10);
   FUNC_3();
   return VAR_8;
  }

  if (FUNC_9(VAR_3, &VAR_6->ramrod_flags)) {
   VAR_8 = VAR_7->wait_comp(VAR_5, VAR_7, VAR_9);
   if (VAR_8)
    return VAR_8;

   return 0;
  }
 }

 return !!FUNC_9(VAR_9, VAR_10);
}
