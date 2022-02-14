
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_fcxp_send_req_s {int dummy; } ;
struct bfa_s {int dummy; } ;
struct bfa_fcxp_s {int reqq_waiting; TYPE_1__* fcxp_mod; } ;
struct TYPE_2__ {struct bfa_s* bfa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_fcxp_s*,struct bfi_fcxp_send_req_s*) ;
 struct bfi_fcxp_send_req_s* FUNC_1 (struct bfa_s*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct bfa_fcxp_s *VAR_3 = VAR_2;
 struct bfa_s *VAR_4 = VAR_3->fcxp_mod->bfa;
 struct bfi_fcxp_send_req_s *VAR_5;

 VAR_3->reqq_waiting = VAR_0;
 VAR_5 = FUNC_1(VAR_4, VAR_1);
 FUNC_0(VAR_3, VAR_5);
}
