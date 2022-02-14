
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int cr_a_lock; int cr_active_list; } ;
struct iscsi_conn_recovery {int cr_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(
 struct iscsi_session *VAR_0,
 struct iscsi_conn_recovery *VAR_1)
{
 FUNC_1(&VAR_0->cr_a_lock);
 FUNC_0(&VAR_1->cr_list, &VAR_0->cr_active_list);
 FUNC_2(&VAR_0->cr_a_lock);

 return 0;
}
