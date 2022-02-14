
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {int bdeSize; scalar_t__ bdeFlags; } ;
struct TYPE_9__ {int w; TYPE_7__ f; } ;
struct ulp_bde64 {TYPE_1__ tus; } ;
struct TYPE_10__ {int lsRjtRsnCode; } ;
struct TYPE_11__ {TYPE_2__ b; } ;
struct ls_rjt {TYPE_3__ un; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_rdp_context {int ox_id; int rx_id; int page_a0; scalar_t__ page_a2; int link_stat; struct lpfc_nodelist* ndlp; } ;
struct lpfc_nodelist {int nlp_DID; int nlp_rpi; int nlp_state; int nlp_flag; struct lpfc_vport* vport; } ;
struct TYPE_13__ {int ox_id; } ;
struct TYPE_14__ {TYPE_5__ rcvsli3; } ;
struct TYPE_16__ {TYPE_6__ unsli3; int ulpContext; } ;
struct lpfc_iocbq {void* iocb_cmpl; scalar_t__ context2; TYPE_8__ iocb; scalar_t__ context3; int iotag; } ;
struct TYPE_12__ {int elsXmitLSRJT; int elsXmitACC; } ;
struct lpfc_hba {TYPE_4__ fc_stat; int sfp_warning; int sfp_alarm; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct fc_rdp_sfp_desc {int dummy; } ;
struct fc_rdp_res_frame {int length; } ;
struct fc_rdp_port_speed_desc {int dummy; } ;
struct fc_rdp_port_name_desc {int dummy; } ;
struct fc_rdp_opd_sfp_desc {int dummy; } ;
struct fc_rdp_oed_sfp_desc {int dummy; } ;
struct fc_rdp_link_service_desc {int dummy; } ;
struct fc_rdp_link_error_status_desc {int dummy; } ;
struct fc_rdp_bbc_desc {int dummy; } ;
struct fc_fec_rdp_desc {int dummy; } ;
typedef TYPE_8__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lpfc_rdp_context*) ;
 int FUNC_2 (int ) ;
 void* VAR_11 ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int VAR_12 ;
 int FUNC_4 (struct lpfc_nodelist*) ;
 struct lpfc_iocbq* FUNC_5 (struct lpfc_vport*,int ,int,int ,struct lpfc_nodelist*,int ,int) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct fc_rdp_port_name_desc*,struct lpfc_vport*,struct lpfc_nodelist*) ;
 scalar_t__ FUNC_8 (struct fc_rdp_bbc_desc*,int *,struct lpfc_vport*) ;
 scalar_t__ FUNC_9 (struct fc_rdp_port_name_desc*,struct lpfc_vport*) ;
 scalar_t__ FUNC_10 (struct fc_fec_rdp_desc*,int *) ;
 scalar_t__ FUNC_11 (struct fc_rdp_link_error_status_desc*,int *) ;
 scalar_t__ FUNC_12 (struct fc_rdp_link_service_desc*,int ) ;
 scalar_t__ FUNC_13 (struct lpfc_hba*,struct fc_rdp_oed_sfp_desc*,scalar_t__) ;
 scalar_t__ FUNC_14 (struct lpfc_hba*,struct fc_rdp_oed_sfp_desc*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct lpfc_hba*,struct fc_rdp_oed_sfp_desc*,scalar_t__) ;
 scalar_t__ FUNC_16 (struct lpfc_hba*,struct fc_rdp_oed_sfp_desc*,scalar_t__) ;
 scalar_t__ FUNC_17 (struct lpfc_hba*,struct fc_rdp_oed_sfp_desc*,scalar_t__) ;
 scalar_t__ FUNC_18 (struct fc_rdp_opd_sfp_desc*,int ,struct lpfc_vport*) ;
 scalar_t__ FUNC_19 (struct fc_rdp_sfp_desc*,int ,scalar_t__) ;
 scalar_t__ FUNC_20 (struct fc_rdp_port_speed_desc*,struct lpfc_hba*) ;
 int FUNC_21 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_22 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_23(struct lpfc_hba *VAR_13, struct lpfc_rdp_context *VAR_14,
  int VAR_15)
{
 struct lpfc_nodelist *VAR_16 = VAR_14->ndlp;
 struct lpfc_vport *VAR_17 = VAR_16->vport;
 struct lpfc_iocbq *VAR_18;
 struct ulp_bde64 *VAR_19;
 IOCB_t *VAR_20;
 uint8_t *VAR_21;
 struct ls_rjt *VAR_22;
 struct fc_rdp_res_frame *VAR_23;
 uint32_t VAR_24, VAR_25;
 uint16_t *VAR_26;
 int VAR_27;

 if (VAR_15 != VAR_10)
  goto error;


 VAR_24 = sizeof(struct fc_rdp_res_frame);

 VAR_18 = FUNC_5(VAR_17, 0, VAR_24,
   VAR_12, VAR_14->ndlp,
   VAR_14->ndlp->nlp_DID, VAR_0);
 FUNC_4(VAR_16);
 if (!VAR_18)
  goto free_rdp_context;

 VAR_20 = &VAR_18->iocb;
 VAR_20->ulpContext = VAR_14->rx_id;
 VAR_20->unsli3.rcvsli3.ox_id = VAR_14->ox_id;

 FUNC_6(VAR_17, VAR_4, VAR_5,
   "2171 Xmit RDP response tag x%x xri x%x, "
   "did x%x, nlp_flag x%x, nlp_state x%x, rpi x%x",
   VAR_18->iotag, VAR_18->iocb.ulpContext,
   VAR_16->nlp_DID, VAR_16->nlp_flag, VAR_16->nlp_state,
   VAR_16->nlp_rpi);
 VAR_23 = (struct fc_rdp_res_frame *)
  (((struct lpfc_dmabuf *) VAR_18->context2)->virt);
 VAR_21 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_18->context2)->virt);
 FUNC_22(VAR_21, 0, sizeof(struct fc_rdp_res_frame));
 *((uint32_t *) (VAR_21)) = VAR_0;


 VAR_26 = (uint16_t *)(VAR_14->page_a2 + VAR_8);
 VAR_13->sfp_alarm |= *VAR_26;
 VAR_26 = (uint16_t *)(VAR_14->page_a2 + VAR_9);
 VAR_13->sfp_warning |= *VAR_26;


 VAR_25 = 8;
 VAR_25 += FUNC_12((struct fc_rdp_link_service_desc *)
      (VAR_25 + VAR_21), VAR_2);

 VAR_25 += FUNC_19((struct fc_rdp_sfp_desc *)(VAR_25 + VAR_21),
   VAR_14->page_a0, VAR_14->page_a2);
 VAR_25 += FUNC_20((struct fc_rdp_port_speed_desc *)(VAR_25 + VAR_21),
      VAR_13);
 VAR_25 += FUNC_11((struct fc_rdp_link_error_status_desc *)
           (VAR_25 + VAR_21), &VAR_14->link_stat);
 VAR_25 += FUNC_9((struct fc_rdp_port_name_desc *)
          (VAR_25 + VAR_21), VAR_17);
 VAR_25 += FUNC_7((struct fc_rdp_port_name_desc *)
     (VAR_25 + VAR_21), VAR_17, VAR_16);
 VAR_25 += FUNC_10((struct fc_fec_rdp_desc *)(VAR_25 + VAR_21),
   &VAR_14->link_stat);
 VAR_25 += FUNC_8((struct fc_rdp_bbc_desc *)(VAR_25 + VAR_21),
         &VAR_14->link_stat, VAR_17);
 VAR_25 += FUNC_14(VAR_13,
    (struct fc_rdp_oed_sfp_desc *)(VAR_25 + VAR_21),
    VAR_14->page_a2);
 VAR_25 += FUNC_17(VAR_13,
    (struct fc_rdp_oed_sfp_desc *)(VAR_25 + VAR_21),
    VAR_14->page_a2);
 VAR_25 += FUNC_15(VAR_13,
    (struct fc_rdp_oed_sfp_desc *)(VAR_25 + VAR_21),
    VAR_14->page_a2);
 VAR_25 += FUNC_16(VAR_13,
    (struct fc_rdp_oed_sfp_desc *)(VAR_25 + VAR_21),
    VAR_14->page_a2);
 VAR_25 += FUNC_13(VAR_13,
    (struct fc_rdp_oed_sfp_desc *)(VAR_25 + VAR_21),
    VAR_14->page_a2);
 VAR_25 += FUNC_18((struct fc_rdp_opd_sfp_desc *)(VAR_25 + VAR_21),
         VAR_14->page_a0, VAR_17);

 VAR_23->length = FUNC_0(VAR_25 - 8);
 VAR_18->iocb_cmpl = VAR_11;


 VAR_19 = (struct ulp_bde64 *)
  (((struct lpfc_dmabuf *)(VAR_18->context3))->virt);
 VAR_19->tus.f.bdeSize = VAR_25;
 VAR_19->tus.f.bdeFlags = 0;
 VAR_19->tus.w = FUNC_2(VAR_19->tus.w);

 VAR_13->fc_stat.elsXmitACC++;
 VAR_27 = FUNC_21(VAR_13, VAR_6, VAR_18, 0);
 if (VAR_27 == VAR_3)
  FUNC_3(VAR_13, VAR_18);

 FUNC_1(VAR_14);

 return;
error:
 VAR_24 = 2 * sizeof(uint32_t);
 VAR_18 = FUNC_5(VAR_17, 0, VAR_24, VAR_12,
   VAR_16, VAR_16->nlp_DID, VAR_1);
 FUNC_4(VAR_16);
 if (!VAR_18)
  goto free_rdp_context;

 VAR_20 = &VAR_18->iocb;
 VAR_20->ulpContext = VAR_14->rx_id;
 VAR_20->unsli3.rcvsli3.ox_id = VAR_14->ox_id;
 VAR_21 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_18->context2)->virt);

 *((uint32_t *) (VAR_21)) = VAR_1;
 VAR_22 = (struct ls_rjt *)(VAR_21 + sizeof(uint32_t));
 VAR_22->un.b.lsRjtRsnCode = VAR_7;

 VAR_13->fc_stat.elsXmitLSRJT++;
 VAR_18->iocb_cmpl = VAR_11;
 VAR_27 = FUNC_21(VAR_13, VAR_6, VAR_18, 0);

 if (VAR_27 == VAR_3)
  FUNC_3(VAR_13, VAR_18);
free_rdp_context:
 FUNC_1(VAR_14);
}
