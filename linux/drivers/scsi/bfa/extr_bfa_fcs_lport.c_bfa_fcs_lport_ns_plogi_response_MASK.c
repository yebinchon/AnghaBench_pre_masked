
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fchs_s {int dummy; } ;
struct fc_ls_rjt_s {int reason_code; int reason_code_expl; } ;
struct fc_logi_s {int dummy; } ;
struct fc_els_cmd_s {int els_code; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_4__ {int ns_plogi_unknown_rsp; int ns_rejects; int ns_plogi_accepts; int ns_plogi_acc_err; int ns_plogi_rsp_err; } ;
struct TYPE_3__ {int pwwn; } ;
struct bfa_fcs_lport_s {int fcs; TYPE_2__ stats; TYPE_1__ port_cfg; } ;
struct bfa_fcs_lport_ns_s {struct bfa_fcs_lport_s* port; } ;
typedef int bfa_status_t ;


 scalar_t__ FUNC_0 (struct bfa_fcxp_s*) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3, struct bfa_fcxp_s *VAR_4,
   void *VAR_5, bfa_status_t VAR_6, u32 VAR_7,
         u32 VAR_8, struct fchs_s *VAR_9)
{
 struct bfa_fcs_lport_ns_s *VAR_10 = (struct bfa_fcs_lport_ns_s *) VAR_5;
 struct bfa_fcs_lport_s *VAR_11 = VAR_10->port;

 struct fc_els_cmd_s *VAR_12;
 struct fc_ls_rjt_s *VAR_13;

 FUNC_2(VAR_11->fcs, VAR_6);
 FUNC_2(VAR_11->fcs, VAR_11->port_cfg.pwwn);




 if (VAR_6 != VAR_0) {
  FUNC_2(VAR_11->fcs, VAR_6);
  VAR_11->stats.ns_plogi_rsp_err++;
  FUNC_1(VAR_10, VAR_1);
  return;
 }

 VAR_12 = (struct fc_els_cmd_s *) FUNC_0(VAR_4);

 switch (VAR_12->els_code) {

 case 129:
  if (VAR_7 < sizeof(struct fc_logi_s)) {
   FUNC_2(VAR_11->fcs, VAR_7);
   VAR_11->stats.ns_plogi_acc_err++;
   FUNC_1(VAR_10, VAR_1);
   break;
  }
  VAR_11->stats.ns_plogi_accepts++;
  FUNC_1(VAR_10, VAR_2);
  break;

 case 128:
  VAR_13 = (struct fc_ls_rjt_s *) FUNC_0(VAR_4);

  FUNC_2(VAR_11->fcs, VAR_13->reason_code);
  FUNC_2(VAR_11->fcs, VAR_13->reason_code_expl);

  VAR_11->stats.ns_rejects++;

  FUNC_1(VAR_10, VAR_1);
  break;

 default:
  VAR_11->stats.ns_plogi_unknown_rsp++;
  FUNC_2(VAR_11->fcs, VAR_12->els_code);
  FUNC_1(VAR_10, VAR_1);
 }
}
