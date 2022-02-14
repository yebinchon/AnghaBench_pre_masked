
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_callback_lock; int sk_error_report; int sk_write_space; int sk_state_change; int sk_data_ready; int * sk_user_data; } ;
struct TYPE_2__ {int sk_error_report; int sk_write_space; int sk_state_change; int sk_data_ready; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct socket *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;

 FUNC_0(&VAR_2->sk_callback_lock);
 VAR_2->sk_user_data = ((void*)0);
 VAR_2->sk_data_ready = VAR_0.sk_data_ready;
 VAR_2->sk_state_change = VAR_0.sk_state_change;
 VAR_2->sk_write_space = VAR_0.sk_write_space;
 VAR_2->sk_error_report = VAR_0.sk_error_report;
 FUNC_1(&VAR_2->sk_callback_lock);
}
