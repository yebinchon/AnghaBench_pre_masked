
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qedi_endpoint {scalar_t__ state; int fw_cid; int iscsi_cid; struct qedi_conn* conn; } ;
struct qedi_ctx {int dummy; } ;
struct qedi_conn {int wait_queue; int tmf_work_list; int tmf_work_lock; scalar_t__ cmd_cleanup_cmpl; scalar_t__ cmd_cleanup_req; int fw_cid; int iscsi_conn_id; struct qedi_endpoint* ep; } ;
struct iscsi_endpoint {struct qedi_endpoint* dd_data; } ;
struct iscsi_conn {struct qedi_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct iscsi_cls_session*,struct iscsi_cls_conn*,int) ;
 struct qedi_ctx* FUNC_3 (struct Scsi_Host*) ;
 struct iscsi_endpoint* FUNC_4 (int ) ;
 struct Scsi_Host* FUNC_5 (struct iscsi_cls_session*) ;
 scalar_t__ FUNC_6 (struct qedi_ctx*,struct qedi_conn*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct iscsi_cls_session *VAR_3,
     struct iscsi_cls_conn *VAR_4,
     u64 VAR_5, int VAR_6)
{
 struct iscsi_conn *VAR_7 = VAR_4->dd_data;
 struct qedi_conn *VAR_8 = VAR_7->dd_data;
 struct Scsi_Host *VAR_9 = FUNC_5(VAR_3);
 struct qedi_ctx *VAR_10 = FUNC_3(VAR_9);
 struct qedi_endpoint *VAR_11;
 struct iscsi_endpoint *VAR_12;

 VAR_12 = FUNC_4(VAR_5);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = VAR_12->dd_data;
 if ((VAR_11->state == VAR_1) ||
     (VAR_11->state == VAR_2))
  return -VAR_0;

 if (FUNC_2(VAR_3, VAR_4, VAR_6))
  return -VAR_0;

 VAR_11->conn = VAR_8;
 VAR_8->ep = VAR_11;
 VAR_8->iscsi_conn_id = VAR_11->iscsi_cid;
 VAR_8->fw_cid = VAR_11->fw_cid;
 VAR_8->cmd_cleanup_req = 0;
 VAR_8->cmd_cleanup_cmpl = 0;

 if (FUNC_6(VAR_10, VAR_8))
  return -VAR_0;

 FUNC_7(&VAR_8->tmf_work_lock);
 FUNC_0(&VAR_8->tmf_work_list);
 FUNC_1(&VAR_8->wait_queue);
 return 0;
}
