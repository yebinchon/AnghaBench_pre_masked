
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct nvmet_tcp_queue {int write_space; int state_change; int data_ready; struct socket* sock; } ;
struct TYPE_2__ {int sk_callback_lock; int * sk_user_data; int sk_write_space; int sk_state_change; int sk_data_ready; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nvmet_tcp_queue *VAR_0)
{
 struct socket *VAR_1 = VAR_0->sock;

 FUNC_0(&VAR_1->sk->sk_callback_lock);
 VAR_1->sk->sk_data_ready = VAR_0->data_ready;
 VAR_1->sk->sk_state_change = VAR_0->state_change;
 VAR_1->sk->sk_write_space = VAR_0->write_space;
 VAR_1->sk->sk_user_data = ((void*)0);
 FUNC_1(&VAR_1->sk->sk_callback_lock);
}
