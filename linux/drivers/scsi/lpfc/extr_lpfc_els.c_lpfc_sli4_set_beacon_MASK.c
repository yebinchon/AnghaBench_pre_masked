
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_20__ {int word9; } ;
union lpfc_sli4_cfg_shdr {TYPE_5__ request; } ;
typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_sli4_cfg_mhdr {int dummy; } ;
struct lpfc_mbx_set_beacon_config {int dummy; } ;
struct lpfc_lcb_context {int duration; int capability; } ;
struct TYPE_18__ {scalar_t__ bv1s; } ;
struct TYPE_19__ {int physical_port; TYPE_3__ pc_sli4_params; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_4__ sli4_hba; int pport; } ;
struct TYPE_15__ {scalar_t__ word5; } ;
struct TYPE_16__ {union lpfc_sli4_cfg_shdr cfg_shdr; } ;
struct TYPE_17__ {TYPE_1__ header; } ;
struct TYPE_21__ {TYPE_14__ beacon_config; TYPE_2__ sli4_config; } ;
struct TYPE_22__ {TYPE_6__ un; } ;
struct TYPE_23__ {TYPE_7__ mqe; } ;
struct TYPE_24__ {TYPE_8__ u; int mbox_cmpl; int vport; void* ctx_ndlp; } ;
typedef TYPE_9__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_14__*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct lpfc_hba*,TYPE_9__*,int ,int ,int,int ) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_9__*,int ) ;
 TYPE_9__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_9__*,int ) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_vport *VAR_15,
       struct lpfc_lcb_context *VAR_16,
       uint32_t VAR_17)
{
 struct lpfc_hba *VAR_18 = VAR_15->phba;
 union lpfc_sli4_cfg_shdr *VAR_19;
 LPFC_MBOXQ_t *VAR_20 = ((void*)0);
 uint32_t VAR_21;
 int VAR_22;

 VAR_20 = FUNC_4(VAR_18->mbox_mem_pool, VAR_2);
 if (!VAR_20)
  return 1;

 VAR_19 = &VAR_20->u.mqe.un.sli4_config.header.cfg_shdr;
 VAR_21 = sizeof(struct lpfc_mbx_set_beacon_config) -
  sizeof(struct lpfc_sli4_cfg_mhdr);
 FUNC_2(VAR_18, VAR_20, VAR_5,
    VAR_4, VAR_21,
    VAR_6);
 VAR_20->ctx_ndlp = (void *)VAR_16;
 VAR_20->vport = VAR_18->pport;
 VAR_20->mbox_cmpl = VAR_9;
 FUNC_1(VAR_12, &VAR_20->u.mqe.un.beacon_config,
        VAR_18->sli4_hba.physical_port);
 FUNC_1(VAR_14, &VAR_20->u.mqe.un.beacon_config,
        VAR_17);
 VAR_20->u.mqe.un.beacon_config.word5 = 0;







 if (VAR_18->sli4_hba.pc_sli4_params.bv1s) {

  VAR_19->request.word9 = VAR_1;
  VAR_16->capability |= VAR_3;
  FUNC_1(VAR_13,
         &VAR_20->u.mqe.un.beacon_config, 0);
  FUNC_1(VAR_11,
         &VAR_20->u.mqe.un.beacon_config,
         FUNC_0(VAR_16->duration));
 } else {

  if (FUNC_0(VAR_16->duration) != 0) {
   FUNC_5(VAR_20, VAR_18->mbox_mem_pool);
   return 1;
  }
  VAR_19->request.word9 = VAR_0;
  VAR_16->capability &= ~(VAR_3);
  FUNC_1(VAR_14,
         &VAR_20->u.mqe.un.beacon_config, VAR_17);
  FUNC_1(VAR_13,
         &VAR_20->u.mqe.un.beacon_config, 1);
  FUNC_1(VAR_10,
         &VAR_20->u.mqe.un.beacon_config,
         FUNC_0(VAR_16->duration));
 }

 VAR_22 = FUNC_3(VAR_18, VAR_20, VAR_8);
 if (VAR_22 == VAR_7) {
  FUNC_5(VAR_20, VAR_18->mbox_mem_pool);
  return 1;
 }

 return 0;
}
