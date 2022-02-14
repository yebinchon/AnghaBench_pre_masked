
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fchs_s {int dummy; } ;
struct fc_ls_rjt_s {int reason_code_expl; int reason_code; } ;
struct fc_els_cmd_s {int els_code; } ;
struct bfa_fcxp_s {int dummy; } ;
struct bfa_fcs_lport_scn_s {struct bfa_fcs_lport_s* port; } ;
struct TYPE_2__ {int pwwn; } ;
struct bfa_fcs_lport_s {int fcs; TYPE_1__ port_cfg; } ;
typedef int bfa_status_t ;


 scalar_t__ FUNC_0 (struct bfa_fcxp_s*) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bfa_fcs_lport_scn_s*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3, struct bfa_fcxp_s *VAR_4,
   void *VAR_5, bfa_status_t VAR_6, u32 VAR_7,
         u32 VAR_8, struct fchs_s *VAR_9)
{
 struct bfa_fcs_lport_scn_s *VAR_10 = (struct bfa_fcs_lport_scn_s *) VAR_5;
 struct bfa_fcs_lport_s *VAR_11 = VAR_10->port;
 struct fc_els_cmd_s *VAR_12;
 struct fc_ls_rjt_s *VAR_13;

 FUNC_2(VAR_11->fcs, VAR_11->port_cfg.pwwn);




 if (VAR_6 != VAR_0) {
  FUNC_2(VAR_11->fcs, VAR_6);
  FUNC_1(VAR_10, VAR_1);
  return;
 }

 VAR_12 = (struct fc_els_cmd_s *) FUNC_0(VAR_4);

 switch (VAR_12->els_code) {

 case 129:
  FUNC_1(VAR_10, VAR_2);
  break;

 case 128:

  VAR_13 = (struct fc_ls_rjt_s *) FUNC_0(VAR_4);

  FUNC_2(VAR_11->fcs, VAR_13->reason_code);
  FUNC_2(VAR_11->fcs, VAR_13->reason_code_expl);

  FUNC_1(VAR_10, VAR_1);
  break;

 default:
  FUNC_1(VAR_10, VAR_1);
 }
}
