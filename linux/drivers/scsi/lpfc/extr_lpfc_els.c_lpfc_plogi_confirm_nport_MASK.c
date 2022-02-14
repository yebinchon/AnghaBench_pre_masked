
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u32 ;
struct serv_parm {int portName; } ;
struct lpfc_vport {int fc_flag; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nvme_rport {int dummy; } ;
struct lpfc_nodelist {int nlp_type; int nlp_DID; int nlp_flag; unsigned long* active_rrqs_xri_bitmap; int nlp_fc4_type; struct fc_rport* rport; struct lpfc_nvme_rport* nrport; int nlp_state; int nlp_portname; int nlp_prev_state; struct lpfc_vport* vport; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_hba {scalar_t__ sli_rev; int cfg_rrq_xri_bitmap_sz; int active_rrq_pool; int ndlp_lock; } ;
struct fc_rport {int dev; struct lpfc_rport_data* dd_data; } ;
struct Scsi_Host {int * host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,int *) ;
 struct lpfc_nodelist* FUNC_5 (struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_6 (struct lpfc_vport*,int) ;
 int FUNC_7 (struct lpfc_nodelist*) ;
 int FUNC_8 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_9 (struct lpfc_vport*,int ,int,char*,int,int,...) ;
 struct Scsi_Host* FUNC_10 (struct lpfc_vport*) ;
 int FUNC_11 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 scalar_t__ FUNC_12 (int *,unsigned long*,int) ;
 int FUNC_13 (unsigned long*,unsigned long*,int) ;
 unsigned long* FUNC_14 (int ,int ) ;
 int FUNC_15 (unsigned long*,int ) ;
 int FUNC_16 (unsigned long*,int ,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static struct lpfc_nodelist *
FUNC_20(struct lpfc_hba *VAR_13, uint32_t *VAR_14,
    struct lpfc_nodelist *VAR_15)
{
 struct lpfc_vport *VAR_16 = VAR_15->vport;
 struct Scsi_Host *VAR_17 = FUNC_10(VAR_16);
 struct lpfc_nodelist *VAR_18;
 struct lpfc_rport_data *VAR_19;
 struct fc_rport *VAR_20;
 struct serv_parm *VAR_21;
 uint8_t VAR_22[sizeof(struct lpfc_name)];
 uint32_t VAR_23, VAR_24 = 0, VAR_25 = 0;
 uint32_t VAR_26 = 0;
 uint16_t VAR_27;
 u32 VAR_28 = 0;
 struct lpfc_nvme_rport *VAR_29 = ((void*)0);
 int VAR_30;
 int VAR_31;
 unsigned long *VAR_32 = ((void*)0);




 if (VAR_15->nlp_type & VAR_6)
  return VAR_15;

 VAR_21 = (struct serv_parm *) ((uint8_t *) VAR_14 + sizeof(uint32_t));
 FUNC_16(VAR_22, 0, sizeof(struct lpfc_name));




 VAR_18 = FUNC_4(VAR_16, &VAR_21->portName);


 if (VAR_18 == VAR_15 && FUNC_0(VAR_18))
  return VAR_15;

 if (VAR_13->sli_rev == VAR_5) {
  VAR_32 = FUNC_14(VAR_13->active_rrq_pool,
             VAR_1);
  if (VAR_32)
   FUNC_16(VAR_32, 0,
          VAR_13->cfg_rrq_xri_bitmap_sz);
 }

 FUNC_9(VAR_16, VAR_2, VAR_3 | VAR_4,
    "3178 PLOGI confirm: ndlp x%x x%x x%x: "
    "new_ndlp x%x x%x x%x\n",
    VAR_15->nlp_DID, VAR_15->nlp_flag, VAR_15->nlp_fc4_type,
    (VAR_18 ? VAR_18->nlp_DID : 0),
    (VAR_18 ? VAR_18->nlp_flag : 0),
    (VAR_18 ? VAR_18->nlp_fc4_type : 0));

 if (!VAR_18) {
  VAR_23 = FUNC_12(&VAR_15->nlp_portname, VAR_22,
       sizeof(struct lpfc_name));
  if (!VAR_23) {
   if (VAR_32)
    FUNC_15(VAR_32,
          VAR_13->active_rrq_pool);
   return VAR_15;
  }
  VAR_18 = FUNC_6(VAR_16, VAR_15->nlp_DID);
  if (!VAR_18) {
   if (VAR_32)
    FUNC_15(VAR_32,
          VAR_13->active_rrq_pool);
   return VAR_15;
  }
 } else if (!FUNC_0(VAR_18)) {
  VAR_23 = FUNC_12(&VAR_15->nlp_portname, VAR_22,
       sizeof(struct lpfc_name));
  if (!VAR_23) {
   if (VAR_32)
    FUNC_15(VAR_32,
          VAR_13->active_rrq_pool);
   return VAR_15;
  }
  VAR_18 = FUNC_3(VAR_16, VAR_18,
      VAR_11);
  if (!VAR_18) {
   if (VAR_32)
    FUNC_15(VAR_32,
          VAR_13->active_rrq_pool);
   return VAR_15;
  }
  VAR_24 = VAR_18->nlp_DID;
  if ((VAR_13->sli_rev == VAR_5) && VAR_32)
   FUNC_13(VAR_32,
          VAR_18->active_rrqs_xri_bitmap,
          VAR_13->cfg_rrq_xri_bitmap_sz);
 } else {
  VAR_24 = VAR_18->nlp_DID;
  if (VAR_13->sli_rev == VAR_5 &&
      VAR_32)
   FUNC_13(VAR_32,
          VAR_18->active_rrqs_xri_bitmap,
          VAR_13->cfg_rrq_xri_bitmap_sz);
 }






 if (VAR_16->fc_flag & VAR_0) {
  VAR_28 = VAR_18->nlp_fc4_type;
  VAR_18->nlp_fc4_type = VAR_15->nlp_fc4_type;
 }

 FUNC_11(VAR_16, VAR_18);
 VAR_18->nlp_DID = VAR_15->nlp_DID;
 VAR_18->nlp_prev_state = VAR_15->nlp_prev_state;
 if (VAR_13->sli_rev == VAR_5)
  FUNC_13(VAR_18->active_rrqs_xri_bitmap,
         VAR_15->active_rrqs_xri_bitmap,
         VAR_13->cfg_rrq_xri_bitmap_sz);

 FUNC_18(VAR_17->host_lock);
 VAR_26 = VAR_18->nlp_flag;
 VAR_25 = VAR_15->nlp_flag;
 VAR_18->nlp_flag = VAR_15->nlp_flag;


 if (VAR_26 & VAR_12)
  VAR_18->nlp_flag |= VAR_12;
 else
  VAR_18->nlp_flag &= ~VAR_12;


 if (VAR_26 & VAR_7)
  VAR_18->nlp_flag |= VAR_7;
 else
  VAR_18->nlp_flag &= ~VAR_7;

 VAR_15->nlp_flag = VAR_26;


 if (VAR_25 & VAR_12)
  VAR_15->nlp_flag |= VAR_12;
 else
  VAR_15->nlp_flag &= ~VAR_12;


 if (VAR_25 & VAR_7)
  VAR_15->nlp_flag |= VAR_7;
 else
  VAR_15->nlp_flag &= ~VAR_7;

 FUNC_19(VAR_17->host_lock);


 VAR_27 = VAR_18->nlp_state;
 FUNC_8(VAR_16, VAR_18, VAR_15->nlp_state);


 VAR_29 = VAR_18->nrport;
 VAR_18->nrport = VAR_15->nrport;


 if (FUNC_12(&VAR_15->nlp_portname, VAR_22, sizeof(struct lpfc_name)) == 0) {



  FUNC_9(VAR_16, VAR_2, VAR_3,
    "3179 PLOGI confirm NEW: %x %x\n",
    VAR_18->nlp_DID, VAR_24);


  VAR_20 = VAR_15->rport;
  if (VAR_20) {
   VAR_19 = VAR_20->dd_data;
   if (VAR_19->pnode == VAR_15) {

    VAR_15->rport = ((void*)0);
    FUNC_7(VAR_15);
    VAR_19->pnode = FUNC_5(VAR_18);
    VAR_18->rport = VAR_20;
   }
   VAR_18->nlp_type = VAR_15->nlp_type;
  }


  if (VAR_15->nrport) {
   VAR_15->nrport = ((void*)0);
   FUNC_7(VAR_15);
  }





  if (VAR_15->nlp_DID == 0) {
   FUNC_18(&VAR_13->ndlp_lock);
   FUNC_1(VAR_15);
   FUNC_19(&VAR_13->ndlp_lock);
  }





  VAR_15->nlp_DID = VAR_24;
  FUNC_8(VAR_16, VAR_15, VAR_27);
  if (VAR_13->sli_rev == VAR_5 &&
      VAR_32)
   FUNC_13(VAR_15->active_rrqs_xri_bitmap,
          VAR_32,
          VAR_13->cfg_rrq_xri_bitmap_sz);

  if (!FUNC_0(VAR_15))
   FUNC_2(VAR_16, VAR_15);
 }
 else {
  FUNC_9(VAR_16, VAR_2, VAR_3,
    "3180 PLOGI confirm SWAP: %x %x\n",
    VAR_18->nlp_DID, VAR_24);

  FUNC_11(VAR_16, VAR_15);





  VAR_15->nlp_DID = VAR_24;
  VAR_15->nlp_fc4_type = VAR_28;

  if (VAR_13->sli_rev == VAR_5 &&
      VAR_32)
   FUNC_13(VAR_15->active_rrqs_xri_bitmap,
          VAR_32,
          VAR_13->cfg_rrq_xri_bitmap_sz);




  if ((VAR_15->nlp_state == VAR_10) ||
      (VAR_15->nlp_state == VAR_8))
   VAR_27 = VAR_9;
  FUNC_8(VAR_16, VAR_15, VAR_27);





  if (VAR_15->nrport)
   FUNC_7(VAR_15);
  VAR_15->nrport = VAR_29;


  VAR_20 = VAR_15->rport;
  if (VAR_20) {
   VAR_19 = VAR_20->dd_data;
   VAR_30 = VAR_19->pnode != ((void*)0);
   VAR_31 = VAR_15->rport != ((void*)0);
   VAR_19->pnode = ((void*)0);
   VAR_15->rport = ((void*)0);
   if (VAR_30)
    FUNC_7(VAR_15);
   if (VAR_31)
    FUNC_17(&VAR_20->dev);
  }
 }
 if (VAR_13->sli_rev == VAR_5 &&
     VAR_32)
  FUNC_15(VAR_32,
        VAR_13->active_rrq_pool);

 FUNC_9(VAR_16, VAR_2, VAR_3 | VAR_4,
    "3173 PLOGI confirm exit: new_ndlp x%x x%x x%x\n",
    VAR_18->nlp_DID, VAR_18->nlp_flag,
    VAR_18->nlp_fc4_type);

 return VAR_18;
}
