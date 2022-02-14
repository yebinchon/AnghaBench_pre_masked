
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
typedef int u16 ;
struct iscsi_task {int itt; scalar_t__ hdr; } ;
struct iscsi_login_req {int exp_statsn; int cmdsn; int cid; int tsih; scalar_t__ isid; int dlength; int min_version; int max_version; int flags; int opcode; } ;
struct bnx2i_login_request {int itt; int num_bds; scalar_t__ cq_index; void* bd_list_addr_hi; void* bd_list_addr_lo; void* resp_buffer; void* resp_bd_list_addr_hi; void* resp_bd_list_addr_lo; int flags; void* exp_stat_sn; void* cmd_sn; int cid; int tsih; int isid_hi; void* isid_lo; int data_length; int version_min; int version_max; int op_attr; int op_code; } ;
struct TYPE_6__ {int resp_buf_size; scalar_t__ req_bd_dma; scalar_t__ resp_bd_dma; } ;
struct bnx2i_conn {TYPE_3__ gen_pdu; TYPE_2__* ep; } ;
struct TYPE_4__ {scalar_t__ sq_prod_qe; } ;
struct TYPE_5__ {TYPE_1__ qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct bnx2i_conn*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct bnx2i_conn *VAR_5,
      struct iscsi_task *VAR_6)
{
 struct bnx2i_login_request *VAR_7;
 struct iscsi_login_req *VAR_8;
 u32 VAR_9;

 VAR_8 = (struct iscsi_login_req *)VAR_6->hdr;
 VAR_7 = (struct bnx2i_login_request *)
      VAR_5->ep->qp.sq_prod_qe;

 VAR_7->op_code = VAR_8->opcode;
 VAR_7->op_attr = VAR_8->flags;
 VAR_7->version_max = VAR_8->max_version;
 VAR_7->version_min = VAR_8->min_version;
 VAR_7->data_length = FUNC_2(VAR_8->dlength);
 VAR_7->isid_lo = *((u32 *) VAR_8->isid);
 VAR_7->isid_hi = *((u16 *) VAR_8->isid + 2);
 VAR_7->tsih = VAR_8->tsih;
 VAR_7->itt = VAR_6->itt |
  (VAR_4 << VAR_2);
 VAR_7->cid = VAR_8->cid;

 VAR_7->cmd_sn = FUNC_0(VAR_8->cmdsn);
 VAR_7->exp_stat_sn = FUNC_0(VAR_8->exp_statsn);
 VAR_7->flags = VAR_3;

 VAR_7->resp_bd_list_addr_lo = (u32) VAR_5->gen_pdu.resp_bd_dma;
 VAR_7->resp_bd_list_addr_hi =
  (u32) ((u64) VAR_5->gen_pdu.resp_bd_dma >> 32);

 VAR_9 = ((1 << VAR_0) |
   (VAR_5->gen_pdu.resp_buf_size <<
    VAR_1));
 VAR_7->resp_buffer = VAR_9;
 VAR_7->bd_list_addr_lo = (u32) VAR_5->gen_pdu.req_bd_dma;
 VAR_7->bd_list_addr_hi =
  (u32) ((u64) VAR_5->gen_pdu.req_bd_dma >> 32);
 VAR_7->num_bds = 1;
 VAR_7->cq_index = 0;

 FUNC_1(VAR_5, 1);
 return 0;
}
