
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iscsi_task {int itt; struct iscsi_conn* conn; } ;
struct iscsi_conn {int session; int last_recv; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct iscsi_task*,int ) ;
 int VAR_1 ;

void FUNC_3(struct iscsi_task *VAR_2,
         uint32_t VAR_3, uint32_t VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_2->conn;

 FUNC_0(VAR_5->session, "[itt 0x%x]\n", VAR_2->itt);

 VAR_5->last_recv = VAR_1;
 FUNC_1(VAR_5->session, VAR_3, VAR_4);
 FUNC_2(VAR_2, VAR_0);
}
