
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; int sk_state_change; int sk_data_ready; struct o2net_sock_container* sk_user_data; } ;
struct o2net_sock_container {int sc_state_change; int sc_data_ready; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0,
              struct o2net_sock_container *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_0->sk_callback_lock);
 if (VAR_0->sk_user_data == VAR_1) {
  VAR_2 = 1;
  VAR_0->sk_user_data = ((void*)0);
  VAR_0->sk_data_ready = VAR_1->sc_data_ready;
  VAR_0->sk_state_change = VAR_1->sc_state_change;
 }
 FUNC_1(&VAR_0->sk_callback_lock);

 return VAR_2;
}
