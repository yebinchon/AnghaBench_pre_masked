
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fchs_s {int dummy; } ;
struct ct_hdr_s {scalar_t__ cmd_rsp_code; int exp_code; int reason_code; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_4__ {int ns_rnnid_rejects; int ns_rnnid_accepts; int ns_rnnid_rsp_err; } ;
struct TYPE_3__ {int pwwn; } ;
struct bfa_fcs_lport_s {int fcs; TYPE_2__ stats; TYPE_1__ port_cfg; } ;
struct bfa_fcs_lport_ns_s {struct bfa_fcs_lport_s* port; } ;
typedef int bfa_status_t ;


 scalar_t__ FUNC_0 (struct bfa_fcxp_s*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4, struct bfa_fcxp_s *VAR_5,
    void *VAR_6, bfa_status_t VAR_7,
    u32 VAR_8, u32 VAR_9,
    struct fchs_s *VAR_10)

{
 struct bfa_fcs_lport_ns_s *VAR_11 = (struct bfa_fcs_lport_ns_s *) VAR_6;
 struct bfa_fcs_lport_s *VAR_12 = VAR_11->port;
 struct ct_hdr_s *VAR_13 = ((void*)0);

 FUNC_3(VAR_12->fcs, VAR_12->port_cfg.pwwn);




 if (VAR_7 != VAR_0) {
  FUNC_3(VAR_12->fcs, VAR_7);
  VAR_12->stats.ns_rnnid_rsp_err++;
  FUNC_2(VAR_11, VAR_2);
  return;
 }

 VAR_13 = (struct ct_hdr_s *) FUNC_0(VAR_5);
 VAR_13->cmd_rsp_code = FUNC_1(VAR_13->cmd_rsp_code);

 if (VAR_13->cmd_rsp_code == VAR_1) {
  VAR_12->stats.ns_rnnid_accepts++;
  FUNC_2(VAR_11, VAR_3);
  return;
 }

 VAR_12->stats.ns_rnnid_rejects++;
 FUNC_3(VAR_12->fcs, VAR_13->reason_code);
 FUNC_3(VAR_12->fcs, VAR_13->exp_code);
 FUNC_2(VAR_11, VAR_2);
}
