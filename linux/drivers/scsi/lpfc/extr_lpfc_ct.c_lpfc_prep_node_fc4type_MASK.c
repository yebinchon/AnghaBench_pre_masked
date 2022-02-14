
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct lpfc_vport {scalar_t__ port_type; int ct_flags; int fc_flag; int fc_rscn_id_cnt; int num_disc_nodes; int cfg_restrict_login; } ;
struct lpfc_nodelist {int nlp_flag; scalar_t__ nlp_state; int nlp_type; int nlp_fc4_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int ,int,int) ;
 struct lpfc_nodelist* FUNC_2 (struct lpfc_vport*,int ) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 scalar_t__ FUNC_4 (struct lpfc_vport*,int ,int ,int ) ;
 int FUNC_5 (struct lpfc_vport*,int ,int ,char*,int ,int,int,...) ;
 scalar_t__ FUNC_6 (struct lpfc_vport*,int ) ;
 struct lpfc_nodelist* FUNC_7 (struct lpfc_vport*,int ) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_vport *VAR_16, uint32_t VAR_17, uint8_t VAR_18)
{
 struct lpfc_nodelist *VAR_19;

 if ((VAR_16->port_type != VAR_7) ||
     (VAR_18 == VAR_2) ||
     !(VAR_16->ct_flags & VAR_0) || !VAR_16->cfg_restrict_login) {

  VAR_19 = FUNC_7(VAR_16, VAR_17);

  if (VAR_19 && FUNC_0(VAR_19)) {
   FUNC_1(VAR_16, VAR_6,
    "Parse GID_FTrsp: did:x%x flg:x%x x%x",
    VAR_17, VAR_19->nlp_flag, VAR_16->fc_flag);


   if (VAR_18 == VAR_2)
    VAR_19->nlp_fc4_type |= VAR_8;

   if (VAR_18 == VAR_3)
    VAR_19->nlp_fc4_type |= VAR_9;

   FUNC_5(VAR_16, VAR_4, VAR_5,
      "0238 Process x%06x NameServer Rsp "
      "Data: x%x x%x x%x x%x x%x\n", VAR_17,
      VAR_19->nlp_flag, VAR_19->nlp_fc4_type,
      VAR_19->nlp_state, VAR_16->fc_flag,
      VAR_16->fc_rscn_id_cnt);





   if (VAR_19->nlp_flag & VAR_11 &&
       VAR_19->nlp_state == VAR_14) {
    FUNC_3(VAR_16, VAR_19,
         VAR_13);
   }
  } else {
   FUNC_1(VAR_16, VAR_6,
    "Skip1 GID_FTrsp: did:x%x flg:x%x cnt:%d",
    VAR_17, VAR_16->fc_flag, VAR_16->fc_rscn_id_cnt);

   FUNC_5(VAR_16, VAR_4, VAR_5,
      "0239 Skip x%06x NameServer Rsp "
      "Data: x%x x%x %p\n",
      VAR_17, VAR_16->fc_flag,
      VAR_16->fc_rscn_id_cnt, VAR_19);
  }
 } else {
  if (!(VAR_16->fc_flag & VAR_1) ||
      FUNC_6(VAR_16, VAR_17)) {
   FUNC_1(VAR_16, VAR_6,
    "Query GID_FTrsp: did:x%x flg:x%x cnt:%d",
    VAR_17, VAR_16->fc_flag, VAR_16->fc_rscn_id_cnt);





   VAR_19 = FUNC_2(VAR_16, VAR_17);
   if (VAR_19 && FUNC_0(VAR_19) &&
       (VAR_19->nlp_type &
       (VAR_10 | VAR_12))) {
    if (VAR_18 == VAR_2)
     VAR_19->nlp_fc4_type |= VAR_8;
    if (VAR_18 == VAR_3)
     VAR_19->nlp_fc4_type |= VAR_9;
    FUNC_7(VAR_16, VAR_17);
   } else if (FUNC_4(VAR_16, VAR_15,
       0, VAR_17) == 0)
    VAR_16->num_disc_nodes++;
   else
    FUNC_7(VAR_16, VAR_17);
  } else {
   FUNC_1(VAR_16, VAR_6,
    "Skip2 GID_FTrsp: did:x%x flg:x%x cnt:%d",
    VAR_17, VAR_16->fc_flag, VAR_16->fc_rscn_id_cnt);

   FUNC_5(VAR_16, VAR_4, VAR_5,
      "0245 Skip x%06x NameServer Rsp "
      "Data: x%x x%x\n", VAR_17,
      VAR_16->fc_flag,
      VAR_16->fc_rscn_id_cnt);
  }
 }
}
