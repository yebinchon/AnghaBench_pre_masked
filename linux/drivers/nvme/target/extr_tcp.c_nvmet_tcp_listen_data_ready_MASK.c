
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_callback_lock; struct nvmet_tcp_port* sk_user_data; } ;
struct nvmet_tcp_port {int accept_work; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1)
{
 struct nvmet_tcp_port *VAR_2;

 FUNC_0(&VAR_1->sk_callback_lock);
 VAR_2 = VAR_1->sk_user_data;
 if (!VAR_2)
  goto out;

 if (VAR_1->sk_state == VAR_0)
  FUNC_2(&VAR_2->accept_work);
out:
 FUNC_1(&VAR_1->sk_callback_lock);
}
