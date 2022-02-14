
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_12__ {void* lsRjtRsnCodeExp; void* lsRjtRsnCode; } ;
struct TYPE_13__ {int lsRjtError; TYPE_5__ b; } ;
struct ls_rjt {TYPE_6__ un; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_rdp_context {int cmpl; int rx_id; int ox_id; int ndlp; } ;
struct lpfc_nodelist {int vport; } ;
struct TYPE_10__ {int ox_id; } ;
struct TYPE_11__ {TYPE_3__ rcvsli3; } ;
struct TYPE_14__ {int ulpContext; TYPE_4__ unsli3; } ;
struct lpfc_iocbq {TYPE_7__ iocb; scalar_t__ context2; } ;
struct TYPE_8__ {int sli_intf; } ;
struct lpfc_hba {scalar_t__ sli_rev; int hba_flag; TYPE_1__ sli4_hba; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_9__ {int length; int tag; int nport_id; } ;
struct fc_rdp_req_frame {TYPE_2__ nport_id_desc; int rdp_des_length; } ;
struct fc_rdp_nport_desc {int dummy; } ;
typedef int stat ;
typedef TYPE_7__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct lpfc_rdp_context*) ;
 struct lpfc_rdp_context* FUNC_3 (int,int ) ;
 int VAR_13 ;
 int FUNC_4 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 scalar_t__ FUNC_5 (struct lpfc_hba*,struct lpfc_rdp_context*) ;
 int FUNC_6 (struct lpfc_nodelist*) ;
 int FUNC_7 (struct lpfc_nodelist*) ;
 int FUNC_8 (struct lpfc_vport*,int ,int ,char*,...) ;
 int VAR_14 ;
 int FUNC_9 (struct ls_rjt*,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct lpfc_vport *VAR_15, struct lpfc_iocbq *VAR_16,
  struct lpfc_nodelist *VAR_17)
{
 struct lpfc_hba *VAR_18 = VAR_15->phba;
 struct lpfc_dmabuf *VAR_19;
 uint8_t VAR_20, VAR_21 = VAR_7;
 struct fc_rdp_req_frame *VAR_22;
 struct lpfc_rdp_context *VAR_23;
 IOCB_t *VAR_24 = ((void*)0);
 struct ls_rjt VAR_25;

 if (VAR_18->sli_rev < VAR_6 ||
     FUNC_1(VAR_14, &VAR_18->sli4_hba.sli_intf) <
      VAR_5) {
  VAR_20 = VAR_10;
  VAR_21 = VAR_8;
  goto error;
 }

 if (VAR_18->sli_rev < VAR_6 || (VAR_18->hba_flag & VAR_1)) {
  VAR_20 = VAR_10;
  VAR_21 = VAR_8;
  goto error;
 }

 VAR_19 = (struct lpfc_dmabuf *) VAR_16->context2;
 VAR_22 = (struct fc_rdp_req_frame *) VAR_19->virt;

 FUNC_8(VAR_15, VAR_2, VAR_4,
    "2422 ELS RDP Request "
    "dec len %d tag x%x port_id %d len %d\n",
    FUNC_0(VAR_22->rdp_des_length),
    FUNC_0(VAR_22->nport_id_desc.tag),
    FUNC_0(VAR_22->nport_id_desc.nport_id),
    FUNC_0(VAR_22->nport_id_desc.length));

 if (sizeof(struct fc_rdp_nport_desc) !=
   FUNC_0(VAR_22->rdp_des_length))
  goto rjt_logerr;
 if (VAR_12 != FUNC_0(VAR_22->nport_id_desc.tag))
  goto rjt_logerr;
 if (VAR_11 !=
   FUNC_0(VAR_22->nport_id_desc.length))
  goto rjt_logerr;
 VAR_23 = FUNC_3(sizeof(struct lpfc_rdp_context), VAR_0);
 if (!VAR_23) {
  VAR_20 = VAR_10;
  goto error;
 }

 VAR_24 = &VAR_16->iocb;
 VAR_23->ndlp = FUNC_6(VAR_17);
 VAR_23->ox_id = VAR_24->unsli3.rcvsli3.ox_id;
 VAR_23->rx_id = VAR_24->ulpContext;
 VAR_23->cmpl = VAR_13;
 if (FUNC_5(VAR_18, VAR_23)) {
  FUNC_8(VAR_17->vport, VAR_3, VAR_4,
     "2423 Unable to send mailbox");
  FUNC_2(VAR_23);
  VAR_20 = VAR_10;
  FUNC_7(VAR_17);
  goto error;
 }

 return 0;

rjt_logerr:
 VAR_20 = VAR_9;

error:
 FUNC_9(&VAR_25, 0, sizeof(VAR_25));
 VAR_25.un.b.lsRjtRsnCode = VAR_20;
 VAR_25.un.b.lsRjtRsnCodeExp = VAR_21;
 FUNC_4(VAR_15, VAR_25.un.lsRjtError, VAR_16, VAR_17, ((void*)0));
 return 1;
}
