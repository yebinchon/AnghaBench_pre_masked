
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {void* sk_rcvtimeo; void* sk_sndtimeo; int sk_callback_lock; int sk_state_change; int sk_data_ready; int * sk_user_data; } ;
struct iscsi_conn {int orig_state_change; int orig_data_ready; TYPE_1__* sock; } ;
struct TYPE_2__ {struct sock* sk; } ;


 void* VAR_0 ;
 int FUNC_0 (char*,struct iscsi_conn*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iscsi_conn *VAR_1)
{
 struct sock *VAR_2;

 if (!VAR_1->sock)
  return;

 VAR_2 = VAR_1->sock->sk;
 FUNC_0("Entering iscsi_target_restore_sock_callbacks: conn: %p\n", VAR_1);

 FUNC_1(&VAR_2->sk_callback_lock);
 if (!VAR_2->sk_user_data) {
  FUNC_2(&VAR_2->sk_callback_lock);
  return;
 }
 VAR_2->sk_user_data = ((void*)0);
 VAR_2->sk_data_ready = VAR_1->orig_data_ready;
 VAR_2->sk_state_change = VAR_1->orig_state_change;
 FUNC_2(&VAR_2->sk_callback_lock);

 VAR_2->sk_sndtimeo = VAR_0;
 VAR_2->sk_rcvtimeo = VAR_0;
}
