
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tmr_req {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {int i_state; struct iscsi_conn* conn; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;

__attribute__((used)) static int FUNC_1(
 struct iscsi_cmd *VAR_1,
 struct iscsi_tmr_req *VAR_2)
{
 struct iscsi_conn *VAR_3 = VAR_1->conn;

 VAR_1->i_state = VAR_0;
 FUNC_0(VAR_1, VAR_3, VAR_1->i_state);
 return 0;
}
