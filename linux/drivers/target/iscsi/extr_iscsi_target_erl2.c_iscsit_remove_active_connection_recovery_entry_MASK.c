
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int cr_a_lock; int sid; int conn_recovery_count; } ;
struct iscsi_conn_recovery {int cr_list; } ;


 int FUNC_0 (struct iscsi_conn_recovery*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(
 struct iscsi_conn_recovery *VAR_0,
 struct iscsi_session *VAR_1)
{
 FUNC_3(&VAR_1->cr_a_lock);
 FUNC_1(&VAR_0->cr_list);

 VAR_1->conn_recovery_count--;
 FUNC_2("Decremented connection recovery count to %u for"
  " SID: %u\n", VAR_1->conn_recovery_count, VAR_1->sid);
 FUNC_4(&VAR_1->cr_a_lock);

 FUNC_0(VAR_0);

 return 0;
}
