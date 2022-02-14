
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_id; } ;
struct bfi_msg_s {TYPE_1__ mhdr; } ;
struct bfi_diag_lb_rsp_s {int dummy; } ;
struct bfi_diag_dport_scn_s {int dummy; } ;
struct bfi_diag_dport_rsp_s {int dummy; } ;
struct bfa_s {int dummy; } ;
struct bfa_fcdiag_s {int dport; } ;
typedef int bfi_diag_qtest_rsp_t ;


 struct bfa_fcdiag_s* FUNC_0 (struct bfa_s*) ;




 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct bfi_diag_dport_rsp_s*) ;
 int FUNC_3 (int *,struct bfi_diag_dport_scn_s*) ;
 int FUNC_4 (struct bfa_fcdiag_s*,struct bfi_diag_lb_rsp_s*) ;
 int FUNC_5 (struct bfa_fcdiag_s*,int *) ;
 int FUNC_6 (struct bfa_fcdiag_s*,int) ;

void
FUNC_7(struct bfa_s *VAR_0, struct bfi_msg_s *VAR_1)
{
 struct bfa_fcdiag_s *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1->mhdr.msg_id) {
 case 129:
  FUNC_4(VAR_2,
    (struct bfi_diag_lb_rsp_s *) VAR_1);
  break;
 case 128:
  FUNC_5(VAR_2, (bfi_diag_qtest_rsp_t *)VAR_1);
  break;
 case 131:
  FUNC_2(&VAR_2->dport,
    (struct bfi_diag_dport_rsp_s *)VAR_1);
  break;
 case 130:
  FUNC_3(&VAR_2->dport,
    (struct bfi_diag_dport_scn_s *)VAR_1);
  break;
 default:
  FUNC_6(VAR_2, VAR_1->mhdr.msg_id);
  FUNC_1(1);
 }
}
