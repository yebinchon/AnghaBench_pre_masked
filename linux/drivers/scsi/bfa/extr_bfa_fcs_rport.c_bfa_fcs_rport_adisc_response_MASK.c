
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fchs_s {int dummy; } ;
struct TYPE_4__ {int els_code; } ;
struct fc_ls_rjt_s {int reason_code_expl; int reason_code; TYPE_2__ els_cmd; } ;
struct fc_adisc_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_3__ {int adisc_rejects; int adisc_accs; int adisc_failed; } ;
struct bfa_fcs_rport_s {int fcs; TYPE_1__ stats; int nwwn; int pwwn; } ;
typedef int bfa_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct bfa_fcxp_s*) ;
 int FUNC_1 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct fc_adisc_s*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4, struct bfa_fcxp_s *VAR_5, void *VAR_6,
    bfa_status_t VAR_7, u32 VAR_8,
    u32 VAR_9, struct fchs_s *VAR_10)
{
 struct bfa_fcs_rport_s *VAR_11 = (struct bfa_fcs_rport_s *) VAR_6;
 void *VAR_12 = FUNC_0(VAR_5);
 struct fc_ls_rjt_s *VAR_13;

 if (VAR_7 != VAR_0) {
  FUNC_2(VAR_11->fcs, VAR_7);
  VAR_11->stats.adisc_failed++;
  FUNC_1(VAR_11, VAR_3);
  return;
 }

 if (FUNC_3((struct fc_adisc_s *)VAR_12, VAR_8, VAR_11->pwwn,
    VAR_11->nwwn) == VAR_1) {
  VAR_11->stats.adisc_accs++;
  FUNC_1(VAR_11, VAR_2);
  return;
 }

 VAR_11->stats.adisc_rejects++;
 VAR_13 = VAR_12;
 FUNC_2(VAR_11->fcs, VAR_13->els_cmd.els_code);
 FUNC_2(VAR_11->fcs, VAR_13->reason_code);
 FUNC_2(VAR_11->fcs, VAR_13->reason_code_expl);
 FUNC_1(VAR_11, VAR_3);
}
