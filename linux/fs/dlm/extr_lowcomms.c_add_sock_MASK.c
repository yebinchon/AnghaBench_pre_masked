
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_callback_lock; int sk_error_report; int sk_allocation; int sk_state_change; int sk_write_space; int sk_data_ready; struct connection* sk_user_data; } ;
struct connection {struct socket* sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct socket *VAR_5, struct connection *VAR_6)
{
 struct sock *VAR_7 = VAR_5->sk;

 FUNC_0(&VAR_7->sk_callback_lock);
 VAR_6->sock = VAR_5;

 VAR_7->sk_user_data = VAR_6;

 VAR_7->sk_data_ready = VAR_1;
 VAR_7->sk_write_space = VAR_4;
 VAR_7->sk_state_change = VAR_3;
 VAR_7->sk_allocation = VAR_0;
 VAR_7->sk_error_report = VAR_2;
 FUNC_1(&VAR_7->sk_callback_lock);
}
