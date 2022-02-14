
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_id; } ;
struct bfi_mbmsg_s {TYPE_1__ mh; } ;
struct bfi_diag_ledtest_rsp_s {int dummy; } ;
struct bfi_diag_fwping_rsp_s {int dummy; } ;
struct bfa_diag_s {int dummy; } ;
typedef int bfi_diag_ts_rsp_t ;






 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_diag_s*,int) ;
 int FUNC_2 (struct bfa_diag_s*,struct bfi_diag_fwping_rsp_s*) ;
 int FUNC_3 (struct bfa_diag_s*,struct bfi_diag_ledtest_rsp_s*) ;
 int FUNC_4 (struct bfa_diag_s*) ;
 int FUNC_5 (struct bfa_diag_s*,int *) ;

void
FUNC_6(void *VAR_0, struct bfi_mbmsg_s *VAR_1)
{
 struct bfa_diag_s *VAR_2 = VAR_0;

 switch (VAR_1->mh.msg_id) {
 case 129:
  FUNC_4(VAR_2);
  break;
 case 131:
  FUNC_2(VAR_2, (struct bfi_diag_fwping_rsp_s *) VAR_1);
  break;
 case 128:
  FUNC_5(VAR_2, (bfi_diag_ts_rsp_t *) VAR_1);
  break;
 case 130:
  FUNC_3(VAR_2, (struct bfi_diag_ledtest_rsp_s *) VAR_1);
  break;
 default:
  FUNC_1(VAR_2, VAR_1->mh.msg_id);
  FUNC_0(1);
 }
}
