
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_flag; int load_flag; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; } ;
struct lpfc_hba {scalar_t__ link_state; scalar_t__ fc_topology; int link_flag; int pport; } ;
struct fc_vport {scalar_t__ dd_data; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 struct lpfc_nodelist* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*) ;
 int FUNC_5 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_vport*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct fc_vport *VAR_15)
{
 struct lpfc_vport *VAR_16 = *(struct lpfc_vport **)VAR_15->dd_data;
 struct lpfc_hba *VAR_17 = VAR_16->phba;
 struct lpfc_nodelist *VAR_18 = ((void*)0);
 struct Scsi_Host *VAR_19 = FUNC_6(VAR_16);

 if ((VAR_17->link_state < VAR_10) ||
     (VAR_17->fc_topology == VAR_11)) {
  FUNC_7(VAR_16, VAR_2);
  return VAR_14;
 }

 FUNC_8(VAR_19->host_lock);
 VAR_16->load_flag |= VAR_0;
 if (VAR_16->fc_flag & VAR_3) {
  FUNC_9(VAR_19->host_lock);
  FUNC_3(VAR_16);
  goto out;
 }

 VAR_16->fc_flag |= VAR_4;
 FUNC_9(VAR_19->host_lock);




 VAR_18 = FUNC_1(VAR_17->pport, VAR_6);
 if (VAR_18 && FUNC_0(VAR_18)
     && VAR_18->nlp_state == VAR_13) {
  if (VAR_17->link_flag & VAR_12) {
   FUNC_5(VAR_16);
   FUNC_2(VAR_16);
  } else {
   FUNC_7(VAR_16, VAR_5);
   FUNC_4(VAR_16, VAR_7, VAR_8,
      "0264 No NPIV Fabric support\n");
  }
 } else {
  FUNC_7(VAR_16, VAR_1);
 }

out:
 FUNC_4(VAR_16, VAR_7, VAR_9,
    "1827 Vport Enabled.\n");
 return VAR_14;
}
