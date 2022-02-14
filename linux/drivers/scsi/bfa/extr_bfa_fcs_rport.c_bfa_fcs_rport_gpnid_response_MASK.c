
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fchs_s {int dummy; } ;
struct ct_hdr_s {scalar_t__ cmd_rsp_code; int reason_code; } ;
struct bfa_fcxp_s {int dummy; } ;
struct bfa_fcs_rport_s {int pwwn; int fcs; } ;
typedef int bfa_status_t ;


 scalar_t__ FUNC_0 (struct bfa_fcxp_s*) ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4, struct bfa_fcxp_s *VAR_5, void *VAR_6,
    bfa_status_t VAR_7, u32 VAR_8,
    u32 VAR_9, struct fchs_s *VAR_10)
{
 struct bfa_fcs_rport_s *VAR_11 = (struct bfa_fcs_rport_s *) VAR_6;
 struct ct_hdr_s *VAR_12;

 FUNC_3(VAR_11->fcs, VAR_11->pwwn);

 VAR_12 = (struct ct_hdr_s *) FUNC_0(VAR_5);
 VAR_12->cmd_rsp_code = FUNC_1(VAR_12->cmd_rsp_code);

 if (VAR_12->cmd_rsp_code == VAR_0) {
  FUNC_2(VAR_11, VAR_1);
  return;
 }




 switch (VAR_12->reason_code) {
 case 129:



  FUNC_2(VAR_11, VAR_3);
  break;

 case 128:



  FUNC_2(VAR_11, VAR_2);
  break;

 default:
  FUNC_2(VAR_11, VAR_2);
  break;
 }
}
