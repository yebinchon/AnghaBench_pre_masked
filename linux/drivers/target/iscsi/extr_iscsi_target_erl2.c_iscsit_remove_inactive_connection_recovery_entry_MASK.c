
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int cr_i_lock; } ;
struct iscsi_conn_recovery {int cr_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
 struct iscsi_conn_recovery *VAR_0,
 struct iscsi_session *VAR_1)
{
 FUNC_1(&VAR_1->cr_i_lock);
 FUNC_0(&VAR_0->cr_list);
 FUNC_2(&VAR_1->cr_i_lock);
}
