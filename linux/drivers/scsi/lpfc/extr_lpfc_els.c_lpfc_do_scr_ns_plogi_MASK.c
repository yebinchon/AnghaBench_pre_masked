
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_flag; int load_flag; int delayed_disc_tmo; } ;
struct lpfc_nodelist {int nlp_DID; int nlp_type; } ;
struct lpfc_hba {int fc_ratov; scalar_t__ fc_topology; scalar_t__ cfg_fdmi_on; scalar_t__ cfg_enable_SmartSAN; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 scalar_t__ FUNC_4 (struct lpfc_vport*,int ,int ) ;
 struct lpfc_nodelist* FUNC_5 (struct lpfc_vport*,int ) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_7 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_8 (struct lpfc_vport*,int ,int ,char*) ;
 struct Scsi_Host* FUNC_9 (struct lpfc_vport*) ;
 int FUNC_10 (struct lpfc_vport*) ;
 int FUNC_11 (struct lpfc_vport*,int ) ;
 int FUNC_12 (int *,scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

void
FUNC_16(struct lpfc_hba *VAR_13, struct lpfc_vport *VAR_14)
{
 struct lpfc_nodelist *VAR_15;
 struct Scsi_Host *VAR_16 = FUNC_9(VAR_14);






 FUNC_14(VAR_16->host_lock);
 if (VAR_14->fc_flag & VAR_1) {
  FUNC_15(VAR_16->host_lock);
  FUNC_7(VAR_13, VAR_3, VAR_4,
    "3334 Delay fc port discovery for %d seconds\n",
    VAR_13->fc_ratov);
  FUNC_12(&VAR_14->delayed_disc_tmo,
   VAR_12 + FUNC_13(1000 * VAR_13->fc_ratov));
  return;
 }
 FUNC_15(VAR_16->host_lock);

 VAR_15 = FUNC_3(VAR_14, VAR_11);
 if (!VAR_15) {
  VAR_15 = FUNC_5(VAR_14, VAR_11);
  if (!VAR_15) {
   if (VAR_13->fc_topology == VAR_7) {
    FUNC_1(VAR_14);
    return;
   }
   FUNC_11(VAR_14, VAR_2);
   FUNC_8(VAR_14, VAR_3, VAR_5,
      "0251 NameServer login: no memory\n");
   return;
  }
 } else if (!FUNC_0(VAR_15)) {
  VAR_15 = FUNC_2(VAR_14, VAR_15, VAR_10);
  if (!VAR_15) {
   if (VAR_13->fc_topology == VAR_7) {
    FUNC_1(VAR_14);
    return;
   }
   FUNC_11(VAR_14, VAR_2);
   FUNC_8(VAR_14, VAR_3, VAR_5,
     "0348 NameServer login: node freed\n");
   return;
  }
 }
 VAR_15->nlp_type |= VAR_8;

 FUNC_6(VAR_14, VAR_15, VAR_9);

 if (FUNC_4(VAR_14, VAR_15->nlp_DID, 0)) {
  FUNC_11(VAR_14, VAR_2);
  FUNC_8(VAR_14, VAR_3, VAR_5,
     "0252 Cannot issue NameServer login\n");
  return;
 }

 if ((VAR_13->cfg_enable_SmartSAN ||
      (VAR_13->cfg_fdmi_on == VAR_6)) &&
      (VAR_14->load_flag & VAR_0))
  FUNC_10(VAR_14);
}
