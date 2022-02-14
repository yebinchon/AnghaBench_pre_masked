
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct serv_parm {int nodeName; int portName; } ;
struct lpfc_vport {int fc_flag; int fc_myDID; int fc_portname; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_nodename; int nlp_portname; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; scalar_t__ fc_topology_changed; int sli3_options; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_6__ {struct lpfc_vport* vport; int mbox_cmpl; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


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
 int VAR_10 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct lpfc_hba*,TYPE_1__*) ;
 int FUNC_2 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,int ) ;
 int VAR_16 ;
 struct lpfc_nodelist* FUNC_5 (struct lpfc_vport*,int ) ;
 int FUNC_6 (struct lpfc_nodelist*) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct Scsi_Host* FUNC_8 (struct lpfc_vport*) ;
 int FUNC_9 (struct lpfc_hba*,TYPE_1__*,int ) ;
 int FUNC_10 (struct lpfc_hba*) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int *,int *,int) ;
 TYPE_1__* FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(struct lpfc_vport *VAR_17, struct lpfc_nodelist *VAR_18,
     struct serv_parm *VAR_19)
{
 struct Scsi_Host *VAR_20 = FUNC_8(VAR_17);
 struct lpfc_hba *VAR_21 = VAR_17->phba;
 LPFC_MBOXQ_t *VAR_22;
 int VAR_23;

 FUNC_15(VAR_20->host_lock);
 VAR_17->fc_flag &= ~(VAR_1 | VAR_4);
 VAR_17->fc_flag |= VAR_2;
 FUNC_16(VAR_20->host_lock);


 VAR_21->sli3_options &= ~VAR_7;


 if ((VAR_21->sli_rev == VAR_8) && VAR_21->fc_topology_changed) {
  FUNC_10(VAR_21);

  FUNC_15(VAR_20->host_lock);
  VAR_17->fc_flag &= ~VAR_5;
  FUNC_16(VAR_20->host_lock);
  VAR_21->fc_topology_changed = 0;
 }

 VAR_23 = FUNC_11(&VAR_17->fc_portname, &VAR_19->portName,
      sizeof(VAR_17->fc_portname));

 if (VAR_23 >= 0) {

  FUNC_15(VAR_20->host_lock);
  VAR_17->fc_flag |= VAR_3;
  FUNC_16(VAR_20->host_lock);







  if (VAR_23)
   VAR_17->fc_myDID = VAR_14;




  FUNC_6(VAR_18);

  VAR_18 = FUNC_4(VAR_17, VAR_15);
  if (!VAR_18) {




   VAR_18 = FUNC_5(VAR_17, VAR_15);
   if (!VAR_18)
    goto fail;
  } else if (!FUNC_0(VAR_18)) {
   VAR_18 = FUNC_3(VAR_17, VAR_18,
      VAR_13);
   if(!VAR_18)
    goto fail;
  }

  FUNC_12(&VAR_18->nlp_portname, &VAR_19->portName,
         sizeof(struct lpfc_name));
  FUNC_12(&VAR_18->nlp_nodename, &VAR_19->nodeName,
         sizeof(struct lpfc_name));

  FUNC_7(VAR_17, VAR_18, VAR_12);
  FUNC_15(VAR_20->host_lock);
  VAR_18->nlp_flag |= VAR_11;
  FUNC_16(VAR_20->host_lock);

  VAR_22 = FUNC_13(VAR_21->mbox_mem_pool, VAR_6);
  if (!VAR_22)
   goto fail;

  FUNC_1(VAR_21, VAR_22);

  VAR_22->mbox_cmpl = VAR_16;
  VAR_22->vport = VAR_17;
  VAR_23 = FUNC_9(VAR_21, VAR_22, VAR_10);
  if (VAR_23 == VAR_9) {
   FUNC_14(VAR_22, VAR_21->mbox_mem_pool);
   goto fail;
  }
 } else {




  FUNC_6(VAR_18);


  FUNC_2(VAR_17);
 }

 return 0;
fail:
 return -VAR_0;
}
