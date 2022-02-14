
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; scalar_t__ port_type; scalar_t__ vpi; } ;
struct TYPE_3__ {int vpi_used; } ;
struct TYPE_4__ {TYPE_1__ max_cfg_param; } ;
struct lpfc_hba {scalar_t__ sli_rev; int cfg_enable_fc4_type; int max_vports; int sli3_options; scalar_t__ cfg_xri_rebalancing; struct lpfc_vport* pport; int nvmet_support; int hbalock; TYPE_2__ sli4_hba; } ;
struct Scsi_Host {int * host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct lpfc_hba*,int ) ;
 int FUNC_1 (struct lpfc_hba*) ;
 struct lpfc_vport** FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ,char*,...) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 scalar_t__ FUNC_7 (struct lpfc_hba*) ;
 scalar_t__ FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (struct lpfc_hba*) ;
 int FUNC_10 (struct lpfc_hba*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int
FUNC_13(struct lpfc_hba *VAR_11)
{
 struct lpfc_vport *VAR_12;
 struct lpfc_vport **VAR_13;
 int VAR_14, VAR_15 = 0;
 bool VAR_16 = 0;

 if (!VAR_11)
  return 0;
 VAR_12 = VAR_11->pport;

 if (!(VAR_12->fc_flag & VAR_0))
  return 0;

 FUNC_5(VAR_11, VAR_4, VAR_5,
   "0458 Bring Adapter online\n");

 FUNC_0(VAR_11, VAR_7);

 if (VAR_11->sli_rev == VAR_10) {
  if (FUNC_7(VAR_11)) {
   FUNC_10(VAR_11);
   return 1;
  }
  FUNC_11(&VAR_11->hbalock);
  if (!VAR_11->sli4_hba.max_cfg_param.vpi_used)
   VAR_16 = 1;
  FUNC_12(&VAR_11->hbalock);




  if (VAR_11->cfg_enable_fc4_type & VAR_6 &&
    !VAR_11->nvmet_support) {
   VAR_15 = FUNC_4(VAR_11->pport);
   if (VAR_15)
    FUNC_5(VAR_11, VAR_3, VAR_5,
     "6132 NVME restore reg failed "
     "on nvmei error x%x\n", VAR_15);
  }
 } else {
  FUNC_9(VAR_11);
  if (FUNC_8(VAR_11)) {
   FUNC_10(VAR_11);
   return 1;
  }
 }

 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13 != ((void*)0)) {
  for (VAR_14 = 0; VAR_14 <= VAR_11->max_vports && VAR_13[VAR_14] != ((void*)0); VAR_14++) {
   struct Scsi_Host *VAR_17;
   VAR_17 = FUNC_6(VAR_13[VAR_14]);
   FUNC_11(VAR_17->host_lock);
   VAR_13[VAR_14]->fc_flag &= ~VAR_0;
   if (VAR_11->sli3_options & VAR_9)
    VAR_13[VAR_14]->fc_flag |= VAR_2;
   if (VAR_11->sli_rev == VAR_10) {
    VAR_13[VAR_14]->fc_flag |= VAR_1;
    if ((VAR_16) &&
        (VAR_13[VAR_14]->port_type !=
     VAR_8))
     VAR_13[VAR_14]->vpi = 0;
   }
   FUNC_12(VAR_17->host_lock);
  }
 }
 FUNC_3(VAR_11, VAR_13);

 if (VAR_11->cfg_xri_rebalancing)
  FUNC_1(VAR_11);

 FUNC_10(VAR_11);
 return 0;
}
