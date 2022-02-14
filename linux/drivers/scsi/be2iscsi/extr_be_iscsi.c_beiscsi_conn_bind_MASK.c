
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
typedef int u64 ;
struct iscsi_endpoint {struct beiscsi_endpoint* dd_data; } ;
struct iscsi_conn {struct beiscsi_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct hwi_wrb_context {int doorbell_offset; } ;
struct hwi_controller {struct hwi_wrb_context* wrb_context; } ;
struct beiscsi_hba {struct beiscsi_conn** conn_table; struct hwi_controller* phwi_ctrlr; } ;
struct beiscsi_endpoint {int ep_cid; struct beiscsi_conn* conn; struct beiscsi_hba* phba; } ;
struct beiscsi_conn {int doorbell_offset; struct beiscsi_endpoint* ep; int beiscsi_conn_cid; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct beiscsi_hba*,int ,char*,size_t,int ,struct beiscsi_conn*,struct beiscsi_conn*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int ,char*,struct beiscsi_hba*,...) ;
 scalar_t__ FUNC_3 (struct iscsi_cls_session*,struct iscsi_cls_conn*,int) ;
 struct beiscsi_hba* FUNC_4 (struct Scsi_Host*) ;
 struct iscsi_endpoint* FUNC_5 (int ) ;
 struct Scsi_Host* FUNC_6 (struct iscsi_cls_session*) ;

int FUNC_7(struct iscsi_cls_session *VAR_5,
        struct iscsi_cls_conn *VAR_6,
        u64 VAR_7, int VAR_8)
{
 struct iscsi_conn *VAR_9 = VAR_6->dd_data;
 struct beiscsi_conn *VAR_10 = VAR_9->dd_data;
 struct Scsi_Host *VAR_11 = FUNC_6(VAR_5);
 struct beiscsi_hba *VAR_12 = FUNC_4(VAR_11);
 struct hwi_controller *VAR_13 = VAR_12->phwi_ctrlr;
 struct hwi_wrb_context *VAR_14;
 struct beiscsi_endpoint *VAR_15;
 struct iscsi_endpoint *VAR_16;
 uint16_t VAR_17;

 VAR_16 = FUNC_5(VAR_7);
 if (!VAR_16)
  return -VAR_2;

 VAR_15 = VAR_16->dd_data;

 if (FUNC_3(VAR_5, VAR_6, VAR_8))
  return -VAR_2;

 if (VAR_15->phba != VAR_12) {
  FUNC_2(VAR_12, VAR_3, VAR_0,
       "BS_%d : beiscsi_ep->hba=%p not equal to phba=%p\n",
       VAR_15->phba, VAR_12);

  return -VAR_1;
 }
 VAR_17 = FUNC_0(VAR_15->ep_cid);
 if (VAR_12->conn_table[VAR_17]) {
  if (VAR_10 != VAR_12->conn_table[VAR_17] ||
      VAR_15 != VAR_12->conn_table[VAR_17]->ep) {
   FUNC_1(VAR_12, VAR_3,
          "BS_%d : conn_table not empty at %u: cid %u conn %p:%p\n",
          VAR_17,
          VAR_15->ep_cid,
          VAR_10,
          VAR_12->conn_table[VAR_17]);
   return -VAR_2;
  }
 }

 VAR_10->beiscsi_conn_cid = VAR_15->ep_cid;
 VAR_10->ep = VAR_15;
 VAR_15->conn = VAR_10;




 VAR_14 = &VAR_13->wrb_context[VAR_17];
 VAR_10->doorbell_offset = VAR_14->doorbell_offset;
 FUNC_2(VAR_12, VAR_4, VAR_0,
      "BS_%d : cid %d phba->conn_table[%u]=%p\n",
      VAR_15->ep_cid, VAR_17, VAR_10);
 VAR_12->conn_table[VAR_17] = VAR_10;
 return 0;
}
