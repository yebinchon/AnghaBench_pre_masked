
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int cr_i_lock; int sid; int conn_recovery_count; int cr_inactive_list; } ;
struct iscsi_conn_recovery {int cr_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(
 struct iscsi_session *VAR_0,
 struct iscsi_conn_recovery *VAR_1)
{
 FUNC_2(&VAR_0->cr_i_lock);
 FUNC_0(&VAR_1->cr_list, &VAR_0->cr_inactive_list);

 VAR_0->conn_recovery_count++;
 FUNC_1("Incremented connection recovery count to %u for"
  " SID: %u\n", VAR_0->conn_recovery_count, VAR_0->sid);
 FUNC_3(&VAR_0->cr_i_lock);

 return 0;
}
