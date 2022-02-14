
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ port_type; int vport_flag; int load_flag; scalar_t__ port_state; int vpi_state; int unreg_vpi_cmpl; int listentry; scalar_t__ work_port_events; int vpi; struct lpfc_hba* phba; scalar_t__ ct_flags; scalar_t__ cfg_enable_da_id; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; } ;
struct lpfc_hba {int fc_ratov; scalar_t__ link_state; scalar_t__ fc_topology; int port_list_lock; struct lpfc_vport* pport; int ndlp_lock; int hbalock; } ;
struct fc_vport {scalar_t__ dd_data; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ FUNC_1 (struct lpfc_nodelist*) ;
 int FUNC_2 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_8 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_9 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_10 (struct lpfc_vport*,int ) ;
 int FUNC_11 (struct lpfc_vport*) ;
 int FUNC_12 (struct lpfc_hba*,int ) ;
 int FUNC_13 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 scalar_t__ FUNC_14 (struct lpfc_vport*) ;
 int FUNC_15 (struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_16 (struct lpfc_vport*,int ) ;
 int FUNC_17 (struct lpfc_nodelist*) ;
 int FUNC_18 (struct lpfc_vport*,int ,int ,int ) ;
 int FUNC_19 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_20 (struct lpfc_vport*,int ,int ,char*) ;
 struct Scsi_Host* FUNC_21 (struct lpfc_vport*) ;
 int FUNC_22 (struct lpfc_vport*) ;
 int FUNC_23 (struct lpfc_vport*) ;
 int FUNC_24 (struct lpfc_vport*) ;
 int FUNC_25 (struct lpfc_vport*) ;
 long FUNC_26 (int) ;
 int FUNC_27 (int) ;
 long FUNC_28 (long) ;
 int FUNC_29 (struct Scsi_Host*) ;
 int FUNC_30 (struct Scsi_Host*) ;
 int FUNC_31 (struct Scsi_Host*) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;

int
FUNC_34(struct fc_vport *VAR_20)
{
 struct lpfc_nodelist *VAR_21 = ((void*)0);
 struct lpfc_vport *VAR_22 = *(struct lpfc_vport **)VAR_20->dd_data;
 struct Scsi_Host *VAR_23 = FUNC_21(VAR_22);
 struct lpfc_hba *VAR_24 = VAR_22->phba;
 long VAR_25;
 bool VAR_26 = 0;

 if (VAR_22->port_type == VAR_7) {
  FUNC_20(VAR_22, VAR_3, VAR_5,
     "1812 vport_delete failed: Cannot delete "
     "physical host\n");
  return VAR_17;
 }


 if ((VAR_22->vport_flag & VAR_16) &&
  !(VAR_24->pport->load_flag & VAR_1)) {
  FUNC_20(VAR_22, VAR_3, VAR_5,
     "1837 vport_delete failed: Cannot delete "
     "static vport.\n");
  return VAR_17;
 }
 FUNC_32(&VAR_24->hbalock);
 VAR_22->load_flag |= VAR_1;
 FUNC_33(&VAR_24->hbalock);




 if (!(VAR_24->pport->load_flag & VAR_1)) {
  int VAR_27 = 0;
  while (VAR_27 < ((VAR_24->fc_ratov * 3) + 3) &&
         VAR_22->port_state > VAR_10 &&
         VAR_22->port_state < VAR_11) {
   VAR_27++;
   FUNC_27(1000);
  }
  if (VAR_22->port_state > VAR_10 &&
      VAR_22->port_state < VAR_11)
   return -VAR_0;
 }
 if (!FUNC_29(VAR_23))
  return VAR_18;
 if (!FUNC_29(VAR_23)) {
  FUNC_30(VAR_23);
  return VAR_18;
 }
 FUNC_11(VAR_22);

 FUNC_6(VAR_22);







 VAR_21 = FUNC_10(VAR_22, VAR_14);
 if (VAR_21 && FUNC_1(VAR_21)) {
  FUNC_15(VAR_21);
  VAR_26 = 1;
 }


 FUNC_3(VAR_23);
 FUNC_31(VAR_23);

 VAR_21 = FUNC_10(VAR_24->pport, VAR_2);





 if (VAR_24->pport->load_flag & VAR_1) {
  if (VAR_21 && FUNC_1(VAR_21) &&
      VAR_21->nlp_state == VAR_12 &&
      VAR_24->link_state >= VAR_6) {

   VAR_21 = FUNC_10(VAR_22, VAR_2);
   if (!VAR_21)
    goto skip_logo;
   else if (!FUNC_1(VAR_21)) {
    VAR_21 = FUNC_9(VAR_22, VAR_21,
       VAR_13);
    if (!VAR_21)
     goto skip_logo;
   }

   FUNC_7(VAR_22, VAR_21);


   FUNC_32(&VAR_24->ndlp_lock);
   FUNC_2(VAR_21);
   FUNC_33(&VAR_24->ndlp_lock);

   FUNC_17(VAR_21);
  }
  goto skip_logo;
 }


 if (VAR_21 && FUNC_1(VAR_21) &&
     VAR_21->nlp_state == VAR_12 &&
     VAR_24->link_state >= VAR_6 &&
     VAR_24->fc_topology != VAR_8) {
  if (VAR_22->cfg_enable_da_id) {
   VAR_25 = FUNC_26(VAR_24->fc_ratov * 2000);
   if (!FUNC_18(VAR_22, VAR_15, 0, 0))
    while (VAR_22->ct_flags && VAR_25)
     VAR_25 = FUNC_28(VAR_25);
   else
    FUNC_19(VAR_22->phba, VAR_4,
      VAR_5,
      "1829 CT command failed to "
      "delete objects on fabric\n");
  }

  VAR_21 = FUNC_10(VAR_22, VAR_2);
  if (!VAR_21) {

   VAR_21 = FUNC_16(VAR_22, VAR_2);
   if (!VAR_21)
    goto skip_logo;

   FUNC_2(VAR_21);
  } else {
   if (!FUNC_1(VAR_21)) {
    VAR_21 = FUNC_9(VAR_22, VAR_21,
      VAR_13);
    if (!VAR_21)
     goto skip_logo;
   }


   FUNC_7(VAR_22, VAR_21);
   FUNC_32(&VAR_24->ndlp_lock);
   if (!FUNC_0(VAR_21))

    FUNC_2(VAR_21);
   else {

    FUNC_33(&VAR_24->ndlp_lock);
    goto skip_logo;
   }
   FUNC_33(&VAR_24->ndlp_lock);
  }






  if (!(VAR_22->vpi_state & VAR_9)) {
   FUNC_17(VAR_21);
   goto skip_logo;
  }

  VAR_22->unreg_vpi_cmpl = VAR_18;
  VAR_25 = FUNC_26(VAR_24->fc_ratov * 2000);
  if (!FUNC_13(VAR_22, VAR_21))
   while (VAR_22->unreg_vpi_cmpl == VAR_18 && VAR_25)
    VAR_25 = FUNC_28(VAR_25);
 }

 if (!(VAR_24->pport->load_flag & VAR_1))
  FUNC_8(VAR_22);

skip_logo:





 if (VAR_26) {
  VAR_21 = FUNC_10(VAR_22, VAR_14);
  FUNC_17(VAR_21);
 }

 FUNC_5(VAR_22);
 FUNC_22(VAR_22);

 FUNC_23(VAR_22);

 if (!(VAR_24->pport->load_flag & VAR_1)) {
  FUNC_24(VAR_22);
  FUNC_25(VAR_22);




  if (!(VAR_22->vpi_state & VAR_9) ||
    FUNC_14(VAR_22))
   FUNC_30(VAR_23);
 } else
  FUNC_30(VAR_23);

 FUNC_12(VAR_24, VAR_22->vpi);
 VAR_22->work_port_events = 0;
 FUNC_32(&VAR_24->port_list_lock);
 FUNC_4(&VAR_22->listentry);
 FUNC_33(&VAR_24->port_list_lock);
 FUNC_20(VAR_22, VAR_3, VAR_5,
    "1828 Vport Deleted.\n");
 FUNC_30(VAR_23);
 return VAR_19;
}
