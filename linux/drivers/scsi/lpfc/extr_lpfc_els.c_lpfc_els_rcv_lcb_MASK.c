
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int lsRjtRsnCode; } ;
struct TYPE_12__ {int lsRjtError; TYPE_5__ b; } ;
struct ls_rjt {TYPE_6__ un; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int vport; } ;
struct lpfc_lcb_context {scalar_t__ sub_command; int ndlp; int rx_id; int ox_id; int duration; int frequency; int type; scalar_t__ capability; } ;
struct TYPE_8__ {int ox_id; } ;
struct TYPE_9__ {TYPE_2__ rcvsli3; } ;
struct TYPE_10__ {int ulpContext; TYPE_3__ unsli3; } ;
struct lpfc_iocbq {TYPE_4__ iocb; scalar_t__ context2; } ;
struct TYPE_7__ {int sli_intf; } ;
struct lpfc_hba {scalar_t__ sli_rev; int hba_flag; TYPE_1__ sli4_hba; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct fc_lcb_request_frame {scalar_t__ lcb_sub_command; int lcb_duration; int lcb_frequency; int lcb_type; int lcb_command; } ;
typedef int stat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct lpfc_lcb_context*) ;
 struct lpfc_lcb_context* FUNC_3 (int,int ) ;
 int FUNC_4 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_nodelist*) ;
 int FUNC_7 (struct lpfc_vport*,int ,int ,char*,...) ;
 scalar_t__ FUNC_8 (struct lpfc_vport*,struct lpfc_lcb_context*,int) ;
 int VAR_11 ;
 int FUNC_9 (struct ls_rjt*,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct lpfc_vport *VAR_12, struct lpfc_iocbq *VAR_13,
   struct lpfc_nodelist *VAR_14)
{
 struct lpfc_hba *VAR_15 = VAR_12->phba;
 struct lpfc_dmabuf *VAR_16;
 uint8_t *VAR_17;
 struct fc_lcb_request_frame *VAR_18;
 struct lpfc_lcb_context *VAR_19;
 uint8_t VAR_20, VAR_21;
 struct ls_rjt VAR_22;

 VAR_16 = (struct lpfc_dmabuf *)VAR_13->context2;
 VAR_17 = (uint8_t *)VAR_16->virt;
 VAR_18 = (struct fc_lcb_request_frame *)VAR_16->virt;

 FUNC_7(VAR_12, VAR_3, VAR_4,
   "0192 ELS LCB Data x%x x%x x%x x%x sub x%x "
   "type x%x frequency %x duration x%x\n",
   VAR_17[0], VAR_17[1], VAR_17[2],
   VAR_18->lcb_command,
   VAR_18->lcb_sub_command,
   VAR_18->lcb_type,
   VAR_18->lcb_frequency,
   FUNC_0(VAR_18->lcb_duration));

 if (VAR_18->lcb_sub_command != VAR_6 &&
     VAR_18->lcb_sub_command != VAR_5) {
  VAR_21 = VAR_9;
  goto rjt;
 }

 if (VAR_15->sli_rev < VAR_8 ||
     VAR_15->hba_flag & VAR_1 ||
     (FUNC_1(VAR_11, &VAR_15->sli4_hba.sli_intf) <
     VAR_7)) {
  VAR_21 = VAR_9;
  goto rjt;
 }

 VAR_19 = FUNC_3(sizeof(*VAR_19), VAR_0);
 if (!VAR_19) {
  VAR_21 = VAR_10;
  goto rjt;
 }

 VAR_20 = (VAR_18->lcb_sub_command == VAR_6) ? 1 : 0;
 VAR_19->sub_command = VAR_18->lcb_sub_command;
 VAR_19->capability = 0;
 VAR_19->type = VAR_18->lcb_type;
 VAR_19->frequency = VAR_18->lcb_frequency;
 VAR_19->duration = VAR_18->lcb_duration;
 VAR_19->ox_id = VAR_13->iocb.unsli3.rcvsli3.ox_id;
 VAR_19->rx_id = VAR_13->iocb.ulpContext;
 VAR_19->ndlp = FUNC_5(VAR_14);
 if (FUNC_8(VAR_12, VAR_19, VAR_20)) {
  FUNC_7(VAR_14->vport, VAR_2,
     VAR_4, "0193 failed to send mail box");
  FUNC_2(VAR_19);
  FUNC_6(VAR_14);
  VAR_21 = VAR_10;
  goto rjt;
 }
 return 0;
rjt:
 FUNC_9(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.un.b.lsRjtRsnCode = VAR_21;
 FUNC_4(VAR_12, VAR_22.un.lsRjtError, VAR_13, VAR_14, ((void*)0));
 return 1;
}
