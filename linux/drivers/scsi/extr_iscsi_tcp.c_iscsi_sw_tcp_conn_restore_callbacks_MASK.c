
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; scalar_t__ sk_no_check_tx; int sk_write_space; int sk_state_change; int sk_data_ready; int * sk_user_data; } ;
struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {int old_write_space; int old_state_change; int old_data_ready; TYPE_1__* sock; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct iscsi_conn *VAR_0)
{
 struct iscsi_tcp_conn *VAR_1 = VAR_0->dd_data;
 struct iscsi_sw_tcp_conn *VAR_2 = VAR_1->dd_data;
 struct sock *VAR_3 = VAR_2->sock->sk;


 FUNC_0(&VAR_3->sk_callback_lock);
 VAR_3->sk_user_data = ((void*)0);
 VAR_3->sk_data_ready = VAR_2->old_data_ready;
 VAR_3->sk_state_change = VAR_2->old_state_change;
 VAR_3->sk_write_space = VAR_2->old_write_space;
 VAR_3->sk_no_check_tx = 0;
 FUNC_1(&VAR_3->sk_callback_lock);
}
