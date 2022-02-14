
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {int i_state; int conn; } ;


 int FUNC_0 (struct iscsi_cmd*,int ,int ) ;

int FUNC_1(struct iscsi_conn *VAR_0, struct iscsi_cmd *VAR_1)
{
 return FUNC_0(VAR_1, VAR_1->conn, VAR_1->i_state);
}
