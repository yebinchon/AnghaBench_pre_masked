
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qedi_ctx {int dbg_ctx; } ;
struct qedi_conn {int list_lock; int active_cmd_list; scalar_t__ active_cmd_count; int * ep; struct qedi_ctx* qedi; struct iscsi_cls_conn* cls_conn; } ;
struct iscsi_conn {struct qedi_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int ,struct iscsi_cls_session*) ;
 int FUNC_2 (int ,struct iscsi_conn*,char*,int ,struct iscsi_cls_session*) ;
 struct iscsi_cls_conn* FUNC_3 (struct iscsi_cls_session*,int,int ) ;
 int FUNC_4 (struct iscsi_cls_conn*) ;
 struct qedi_ctx* FUNC_5 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_6 (struct iscsi_cls_session*) ;
 scalar_t__ FUNC_7 (struct qedi_ctx*,struct qedi_conn*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct iscsi_cls_conn *
FUNC_9(struct iscsi_cls_session *VAR_1, uint32_t VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_6(VAR_1);
 struct qedi_ctx *VAR_4 = FUNC_5(VAR_3);
 struct iscsi_cls_conn *VAR_5;
 struct qedi_conn *VAR_6;
 struct iscsi_conn *VAR_7;

 VAR_5 = FUNC_3(VAR_1, sizeof(*VAR_6),
        VAR_2);
 if (!VAR_5) {
  FUNC_1(&VAR_4->dbg_ctx,
    "conn_new: iscsi conn setup failed, cid=0x%x, cls_sess=%p!\n",
    VAR_2, VAR_1);
  return ((void*)0);
 }

 VAR_7 = VAR_5->dd_data;
 VAR_6 = VAR_7->dd_data;
 VAR_6->cls_conn = VAR_5;
 VAR_6->qedi = VAR_4;
 VAR_6->ep = ((void*)0);
 VAR_6->active_cmd_count = 0;
 FUNC_0(&VAR_6->active_cmd_list);
 FUNC_8(&VAR_6->list_lock);

 if (FUNC_7(VAR_4, VAR_6)) {
  FUNC_2(VAR_0, VAR_7,
      "conn_new: login resc alloc failed, cid=0x%x, cls_sess=%p!!\n",
       VAR_2, VAR_1);
  goto free_conn;
 }

 return VAR_5;

free_conn:
 FUNC_4(VAR_5);
 return ((void*)0);
}
