
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct fchs_s {scalar_t__ s_id; scalar_t__ type; scalar_t__ routing; scalar_t__ cat_info; scalar_t__ d_id; } ;
struct fc_rnid_cmd_s {int dummy; } ;
struct fc_logi_s {int dummy; } ;
struct fc_els_cmd_s {scalar_t__ els_code; } ;
struct fc_echo_s {int dummy; } ;
struct bfa_fcs_rport_s {int fcs; } ;
struct bfa_fcs_lport_s {int fcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct bfa_fcs_lport_s*,struct fchs_s*) ;
 int FUNC_1 (struct bfa_fcs_lport_s*,struct fchs_s*,struct fc_echo_s*,int ) ;
 struct bfa_fcs_rport_s* FUNC_2 (struct bfa_fcs_lport_s*,scalar_t__) ;
 int FUNC_3 (struct bfa_fcs_lport_s*) ;
 int FUNC_4 (struct bfa_fcs_lport_s*,struct fchs_s*,struct fc_logi_s*) ;
 int FUNC_5 (struct bfa_fcs_lport_s*,struct fchs_s*,struct fc_rnid_cmd_s*,int ) ;
 int FUNC_6 (struct bfa_fcs_lport_s*,struct fchs_s*,int ) ;
 int FUNC_7 (struct bfa_fcs_lport_s*,struct fchs_s*,int ,int ) ;
 int FUNC_8 (struct bfa_fcs_lport_s*,struct fchs_s*,int ,int ) ;
 int FUNC_9 (struct bfa_fcs_rport_s*,struct fchs_s*,int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_12 (int ,scalar_t__) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

void
FUNC_13(struct bfa_fcs_lport_s *VAR_20,
   struct fchs_s *VAR_21, u16 VAR_22)
{
 u32 VAR_23 = VAR_21->s_id;
 struct bfa_fcs_rport_s *VAR_24 = ((void*)0);
 struct fc_els_cmd_s *VAR_25 = (struct fc_els_cmd_s *) (VAR_21 + 1);

 FUNC_11(VAR_20, VAR_19);
 FUNC_12(VAR_20->fcs, VAR_21->type);

 if (!FUNC_3(VAR_20)) {





  if ((VAR_21->type == VAR_14) &&
   (VAR_25->els_code == VAR_5)) {
   FUNC_8(VAR_20, VAR_21,
    VAR_11,
    VAR_9);
   FUNC_11(VAR_20, VAR_17);
  } else
   FUNC_11(VAR_20, VAR_18);

  return;
 }







 if ((VAR_21->type == VAR_14) &&
  (VAR_25->els_code == VAR_5)) {
  FUNC_4(VAR_20, VAR_21, (struct fc_logi_s *) VAR_25);
  return;
 }




 if ((VAR_21->type == VAR_14) && (VAR_25->els_code == VAR_3)) {
  FUNC_1(VAR_20, VAR_21,
    (struct fc_echo_s *)VAR_25, VAR_22);
  return;
 }




 if ((VAR_21->type == VAR_14) && (VAR_25->els_code == VAR_7)) {
  FUNC_5(VAR_20, VAR_21,
   (struct fc_rnid_cmd_s *) VAR_25, VAR_22);
  return;
 }

 if (VAR_21->type == VAR_13) {
  if ((VAR_21->routing == VAR_12) &&
    (VAR_21->cat_info == VAR_2))
   FUNC_0(VAR_20, VAR_21);
  return;
 }

 if (VAR_21->type == VAR_16) {



  FUNC_7(VAR_20, VAR_21, VAR_1,
    VAR_0);
  return;
 }




 VAR_24 = FUNC_2(VAR_20, VAR_23);
 if (VAR_24) {
  FUNC_12(VAR_24->fcs, VAR_21->s_id);
  FUNC_12(VAR_24->fcs, VAR_21->d_id);
  FUNC_12(VAR_24->fcs, VAR_21->type);

  FUNC_9(VAR_24, VAR_21, VAR_22);
  return;
 }




 if (VAR_21->type != VAR_14) {
  FUNC_12(VAR_20->fcs, VAR_21->s_id);
  FUNC_12(VAR_20->fcs, VAR_21->d_id);

  if (VAR_21->type != VAR_15)
   FUNC_10(VAR_20->fcs, VAR_21->type);
  return;
 }

 FUNC_12(VAR_20->fcs, VAR_25->els_code);
 if (VAR_25->els_code == VAR_8) {
  FUNC_6(VAR_20, VAR_21, VAR_22);
  return;
 }

 if (VAR_25->els_code == VAR_4) {



  return;
 }

 if (VAR_25->els_code == VAR_6) {



  return;
 }




 FUNC_8(VAR_20, VAR_21, VAR_10,
     VAR_9);

}
