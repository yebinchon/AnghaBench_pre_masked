
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qedi_endpoint {int handle; } ;
struct qedi_ctx {int dbg_ctx; int cdev; } ;
struct qedi_conn {struct qedi_endpoint* ep; struct iscsi_cls_conn* cls_conn; } ;
struct qed_iscsi_params_update {int exp_stat_sn; int first_seq_length; int max_send_pdu_length; int max_recv_pdu_length; int max_seq_size; scalar_t__ update_flag; } ;
struct iscsi_conn {int exp_statsn; TYPE_1__* session; int max_xmit_dlength; int max_recv_dlength; scalar_t__ datadgst_en; scalar_t__ hdrdgst_en; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct TYPE_4__ {int (* update_conn ) (int ,int ,struct qed_iscsi_params_update*) ;} ;
struct TYPE_3__ {int first_burst; int max_burst; scalar_t__ imm_data_en; scalar_t__ initial_r2t_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct qed_iscsi_params_update*) ;
 struct qed_iscsi_params_update* FUNC_3 (int,int ) ;
 TYPE_2__* VAR_7 ;
 int FUNC_4 (int ,int ,struct qed_iscsi_params_update*) ;

__attribute__((used)) static int FUNC_5(struct qedi_ctx *VAR_8,
      struct qedi_conn *VAR_9)
{
 struct qed_iscsi_params_update *VAR_10;
 struct iscsi_cls_conn *VAR_11 = VAR_9->cls_conn;
 struct iscsi_conn *VAR_12 = VAR_11->dd_data;
 struct qedi_endpoint *VAR_13;
 int VAR_14;

 VAR_13 = VAR_9->ep;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  FUNC_0(&VAR_8->dbg_ctx, "memory alloc failed\n");
  return -VAR_0;
 }

 VAR_10->update_flag = 0;

 if (VAR_12->hdrdgst_en)
  FUNC_1(VAR_10->update_flag,
     VAR_4, 1);
 if (VAR_12->datadgst_en)
  FUNC_1(VAR_10->update_flag,
     VAR_3, 1);
 if (VAR_12->session->initial_r2t_en)
  FUNC_1(VAR_10->update_flag,
     VAR_6,
     1);
 if (VAR_12->session->imm_data_en)
  FUNC_1(VAR_10->update_flag,
     VAR_5,
     1);

 VAR_10->max_seq_size = VAR_12->session->max_burst;
 VAR_10->max_recv_pdu_length = VAR_12->max_recv_dlength;
 VAR_10->max_send_pdu_length = VAR_12->max_xmit_dlength;
 VAR_10->first_seq_length = VAR_12->session->first_burst;
 VAR_10->exp_stat_sn = VAR_12->exp_statsn;

 VAR_14 = VAR_7->update_conn(VAR_8->cdev, VAR_13->handle,
         VAR_10);
 if (VAR_14) {
  VAR_14 = -VAR_1;
  FUNC_0(&VAR_8->dbg_ctx, "Could not update connection\n");
 }

 FUNC_2(VAR_10);
 return VAR_14;
}
