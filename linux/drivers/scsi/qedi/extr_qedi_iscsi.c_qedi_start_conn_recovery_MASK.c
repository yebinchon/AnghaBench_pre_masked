
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedi_ctx {int dbg_ctx; } ;
struct qedi_conn {int abrt_conn; struct iscsi_cls_conn* cls_conn; int iscsi_conn_id; } ;
struct iscsi_conn {TYPE_1__* session; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct iscsi_conn*,int ) ;
 struct iscsi_cls_session* FUNC_2 (struct iscsi_cls_conn*) ;
 scalar_t__ FUNC_3 (struct iscsi_cls_session*) ;

void FUNC_4(struct qedi_ctx *VAR_1,
         struct qedi_conn *VAR_2)
{
 struct iscsi_cls_session *VAR_3;
 struct iscsi_cls_conn *VAR_4;
 struct iscsi_conn *VAR_5;

 VAR_4 = VAR_2->cls_conn;
 VAR_5 = VAR_4->dd_data;
 VAR_3 = FUNC_2(VAR_4);

 if (FUNC_3(VAR_3)) {
  VAR_2->abrt_conn = 1;
  FUNC_0(&VAR_1->dbg_ctx,
    "Failing connection, state=0x%x, cid=0x%x\n",
    VAR_5->session->state, VAR_2->iscsi_conn_id);
  FUNC_1(VAR_2->cls_conn->dd_data,
       VAR_0);
 }
}
