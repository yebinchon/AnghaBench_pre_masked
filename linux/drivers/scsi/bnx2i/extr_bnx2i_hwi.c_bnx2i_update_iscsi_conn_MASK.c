
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kwqe {int dummy; } ;
struct TYPE_6__ {int flags; int op_code; } ;
struct iscsi_kwqe_conn_update {int context_id; int max_send_pdu_length; int max_recv_pdu_length; int first_burst_length; int max_burst_length; int session_error_recovery_level; int max_outstanding_r2ts; int exp_stat_sn; int conn_flags; TYPE_1__ hdr; } ;
struct iscsi_conn {TYPE_4__* session; int exp_statsn; int max_recv_dlength; int max_xmit_dlength; scalar_t__ datadgst_en; scalar_t__ hdrdgst_en; struct bnx2i_conn* dd_data; } ;
struct bnx2i_hba {TYPE_5__* cnic; } ;
struct bnx2i_conn {TYPE_3__* ep; struct bnx2i_hba* hba; } ;
struct TYPE_10__ {int (* submit_kwqes ) (TYPE_5__*,struct kwqe**,int) ;} ;
struct TYPE_9__ {int erl; int max_r2t; int max_burst; int first_burst; scalar_t__ imm_data_en; scalar_t__ initial_r2t_en; } ;
struct TYPE_8__ {int ep_cid; TYPE_2__* hba; } ;
struct TYPE_7__ {int cnic_dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct iscsi_conn*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_5__*,struct kwqe**,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct iscsi_conn *VAR_9)
{
 struct bnx2i_conn *VAR_10 = VAR_9->dd_data;
 struct bnx2i_hba *VAR_11 = VAR_10->hba;
 struct kwqe *VAR_12[2];
 struct iscsi_kwqe_conn_update *VAR_13;
 struct iscsi_kwqe_conn_update VAR_14;

 VAR_13 = &VAR_14;

 VAR_13->hdr.op_code = VAR_7;
 VAR_13->hdr.flags =
  (VAR_6 << VAR_5);


 if (FUNC_2(VAR_0, &VAR_10->ep->hba->cnic_dev_type))
  VAR_13->context_id = VAR_10->ep->ep_cid;
 else
  VAR_13->context_id = (VAR_10->ep->ep_cid >> 7);
 VAR_13->conn_flags = 0;
 if (VAR_9->hdrdgst_en)
  VAR_13->conn_flags |= VAR_2;
 if (VAR_9->datadgst_en)
  VAR_13->conn_flags |= VAR_1;
 if (VAR_9->session->initial_r2t_en)
  VAR_13->conn_flags |= VAR_4;
 if (VAR_9->session->imm_data_en)
  VAR_13->conn_flags |= VAR_3;

 VAR_13->max_send_pdu_length = VAR_9->max_xmit_dlength;
 VAR_13->max_recv_pdu_length = VAR_9->max_recv_dlength;
 VAR_13->first_burst_length = VAR_9->session->first_burst;
 VAR_13->max_burst_length = VAR_9->session->max_burst;
 VAR_13->exp_stat_sn = VAR_9->exp_statsn;
 VAR_13->max_outstanding_r2ts = VAR_9->session->max_r2t;
 VAR_13->session_error_recovery_level = VAR_9->session->erl;
 FUNC_0(VAR_8, VAR_9,
     "bnx2i: conn update - MBL 0x%x FBL 0x%x"
     "MRDSL_I 0x%x MRDSL_T 0x%x \n",
     VAR_13->max_burst_length,
     VAR_13->first_burst_length,
     VAR_13->max_recv_pdu_length,
     VAR_13->max_send_pdu_length);

 VAR_12[0] = (struct kwqe *) VAR_13;
 if (VAR_11->cnic && VAR_11->cnic->submit_kwqes)
  VAR_11->cnic->submit_kwqes(VAR_11->cnic, VAR_12, 1);
}
