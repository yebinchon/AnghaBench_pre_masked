
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; int sk_write_space; int sk_state_change; int sk_data_ready; struct iscsi_conn* sk_user_data; } ;
struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {int old_write_space; int old_state_change; int old_data_ready; TYPE_1__* sock; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iscsi_conn *VAR_3)
{
 struct iscsi_tcp_conn *VAR_4 = VAR_3->dd_data;
 struct iscsi_sw_tcp_conn *VAR_5 = VAR_4->dd_data;
 struct sock *VAR_6 = VAR_5->sock->sk;


 FUNC_0(&VAR_6->sk_callback_lock);
 VAR_6->sk_user_data = VAR_3;
 VAR_5->old_data_ready = VAR_6->sk_data_ready;
 VAR_5->old_state_change = VAR_6->sk_state_change;
 VAR_5->old_write_space = VAR_6->sk_write_space;
 VAR_6->sk_data_ready = VAR_0;
 VAR_6->sk_state_change = VAR_1;
 VAR_6->sk_write_space = VAR_2;
 FUNC_1(&VAR_6->sk_callback_lock);
}
