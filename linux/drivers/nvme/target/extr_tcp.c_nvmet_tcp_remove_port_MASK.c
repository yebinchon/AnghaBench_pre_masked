
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvmet_tcp_port {TYPE_2__* sock; int accept_work; int data_ready; } ;
struct nvmet_port {struct nvmet_tcp_port* priv; } ;
struct TYPE_4__ {TYPE_1__* sk; } ;
struct TYPE_3__ {int sk_callback_lock; int * sk_user_data; int sk_data_ready; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvmet_tcp_port*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct nvmet_port *VAR_0)
{
 struct nvmet_tcp_port *VAR_1 = VAR_0->priv;

 FUNC_3(&VAR_1->sock->sk->sk_callback_lock);
 VAR_1->sock->sk->sk_data_ready = VAR_1->data_ready;
 VAR_1->sock->sk->sk_user_data = ((void*)0);
 FUNC_4(&VAR_1->sock->sk->sk_callback_lock);
 FUNC_0(&VAR_1->accept_work);

 FUNC_2(VAR_1->sock);
 FUNC_1(VAR_1);
}
