
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct TYPE_16__ {int * rmp; struct lpfc_nodelist* ndlp; struct lpfc_iocbq* cmdiocbq; } ;
struct TYPE_17__ {TYPE_7__ iocb; } ;
struct lpfc_nodelist {size_t nlp_rpi; TYPE_8__ context_un; struct bsg_job* set_job; int type; int nlp_DID; } ;
struct TYPE_15__ {struct lpfc_nodelist* ndlp; } ;
struct TYPE_14__ {size_t ulpContext; } ;
struct lpfc_iocbq {int iocb_flag; struct lpfc_nodelist* context1; int iocb_cmpl; TYPE_6__ context_un; TYPE_5__ iocb; scalar_t__ context2; } ;
struct TYPE_13__ {size_t* rpi_ids; } ;
struct lpfc_hba {scalar_t__ sli_rev; int cfg_poll; int hbalock; int HCregaddr; TYPE_4__ sli4_hba; } ;
struct lpfc_dmabuf {int virt; } ;
struct TYPE_10__ {int els_code; } ;
struct TYPE_11__ {TYPE_1__ r_els; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; } ;
struct bsg_job_data {size_t nlp_rpi; TYPE_8__ context_un; struct bsg_job* set_job; int type; int nlp_DID; } ;
struct TYPE_12__ {scalar_t__ payload_len; int sg_cnt; int sg_list; } ;
struct bsg_job {struct lpfc_nodelist* dd_data; TYPE_3__ request_payload; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct TYPE_18__ {struct lpfc_rport_data* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 TYPE_9__* FUNC_0 (struct bsg_job*) ;
 int FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_3 (int,int ) ;
 int VAR_19 ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_nodelist*) ;
 struct lpfc_iocbq* FUNC_7 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int) ;
 int FUNC_8 (struct lpfc_hba*,int ,int ,char*) ;
 scalar_t__ FUNC_9 (int ,int*) ;
 int FUNC_10 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ,int) ;
 struct lpfc_vport* FUNC_13 (int ) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int,int ) ;

__attribute__((used)) static int
FUNC_17(struct bsg_job *VAR_20)
{
 struct lpfc_vport *VAR_21 = FUNC_13(FUNC_1(VAR_20));
 struct lpfc_hba *VAR_22 = VAR_21->phba;
 struct lpfc_rport_data *VAR_23 = FUNC_0(VAR_20)->dd_data;
 struct lpfc_nodelist *VAR_24 = VAR_23->pnode;
 struct fc_bsg_request *VAR_25 = VAR_20->request;
 struct fc_bsg_reply *VAR_26 = VAR_20->reply;
 uint32_t VAR_27;
 uint32_t VAR_28;
 struct lpfc_iocbq *VAR_29;
 uint16_t VAR_30 = 0;
 struct bsg_job_data *VAR_31;
 unsigned long VAR_32;
 uint32_t VAR_33;
 int VAR_34 = 0;


 VAR_26->reply_payload_rcv_len = 0;





 if (VAR_20->request_payload.payload_len > VAR_6) {
  VAR_34 = -VAR_2;
  goto no_dd_data;
 }


 VAR_31 = FUNC_3(sizeof(struct bsg_job_data), VAR_7);
 if (!VAR_31) {
  FUNC_8(VAR_22, VAR_11, VAR_12,
    "2735 Failed allocation of dd_data\n");
  VAR_34 = -VAR_5;
  goto no_dd_data;
 }

 VAR_27 = VAR_25->rqst_data.r_els.els_code;
 VAR_28 = VAR_20->request_payload.payload_len;

 if (!FUNC_5(VAR_24)) {
  VAR_34 = -VAR_4;
  goto free_dd_data;
 }







 VAR_29 = FUNC_7(VAR_21, 1, VAR_28, 0, VAR_24,
          VAR_24->nlp_DID, VAR_27);
 if (!VAR_29) {
  VAR_34 = -VAR_3;
  goto release_ndlp;
 }

 VAR_30 = VAR_24->nlp_rpi;



 FUNC_12(VAR_20->request_payload.sg_list,
     VAR_20->request_payload.sg_cnt,
     ((struct lpfc_dmabuf *)VAR_29->context2)->virt,
     VAR_28);

 if (VAR_22->sli_rev == VAR_17)
  VAR_29->iocb.ulpContext = VAR_22->sli4_hba.rpi_ids[VAR_30];
 else
  VAR_29->iocb.ulpContext = VAR_30;
 VAR_29->iocb_flag |= VAR_16;
 VAR_29->context1 = VAR_31;
 VAR_29->context_un.ndlp = VAR_24;
 VAR_29->iocb_cmpl = VAR_19;
 VAR_31->type = VAR_18;
 VAR_31->set_job = VAR_20;
 VAR_31->context_un.iocb.cmdiocbq = VAR_29;
 VAR_31->context_un.iocb.ndlp = VAR_24;
 VAR_31->context_un.iocb.rmp = ((void*)0);
 VAR_20->dd_data = VAR_31;

 if (VAR_22->cfg_poll & VAR_0) {
  if (FUNC_9(VAR_22->HCregaddr, &VAR_33)) {
   VAR_34 = -VAR_3;
   goto linkdown_err;
  }
  VAR_33 |= (VAR_8 << VAR_14);
  FUNC_16(VAR_33, VAR_22->HCregaddr);
  FUNC_11(VAR_22->HCregaddr);
 }

 VAR_34 = FUNC_10(VAR_22, VAR_13, VAR_29, 0);

 if (VAR_34 == VAR_10) {
  FUNC_14(&VAR_22->hbalock, VAR_32);

  if (VAR_29->iocb_flag & VAR_16) {

   VAR_29->iocb_flag |= VAR_15;
  }
  FUNC_15(&VAR_22->hbalock, VAR_32);
  return 0;
 } else if (VAR_34 == VAR_9) {
  VAR_34 = -VAR_1;
 } else {
  VAR_34 = -VAR_3;
 }


 VAR_20->dd_data = ((void*)0);

linkdown_err:
 VAR_29->context1 = VAR_24;
 FUNC_4(VAR_22, VAR_29);

release_ndlp:
 FUNC_6(VAR_24);

free_dd_data:
 FUNC_2(VAR_31);

no_dd_data:

 VAR_26->result = VAR_34;
 VAR_20->dd_data = ((void*)0);
 return VAR_34;
}
