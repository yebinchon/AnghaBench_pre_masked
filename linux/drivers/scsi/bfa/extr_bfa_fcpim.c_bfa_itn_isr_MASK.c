
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union bfi_itn_i2h_msg_u {TYPE_1__* create_rsp; struct bfi_msg_s* msg; } ;
struct bfi_msg_s {int dummy; } ;
struct bfa_s {int dummy; } ;
struct bfa_itn_s {int (* isr ) (struct bfa_s*,struct bfi_msg_s*) ;} ;
struct bfa_fcp_mod_s {int dummy; } ;
struct TYPE_2__ {int bfa_handle; } ;


 struct bfa_fcp_mod_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_itn_s* FUNC_1 (struct bfa_fcp_mod_s*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bfa_s*,struct bfi_msg_s*) ;

void
FUNC_4(struct bfa_s *VAR_0, struct bfi_msg_s *VAR_1)
{
 struct bfa_fcp_mod_s *VAR_2 = FUNC_0(VAR_0);
 union bfi_itn_i2h_msg_u VAR_3;
 struct bfa_itn_s *VAR_4;

 VAR_3.msg = VAR_1;
 VAR_4 = FUNC_1(VAR_2, VAR_3.create_rsp->bfa_handle);

 if (VAR_4->isr)
  VAR_4->isr(VAR_0, VAR_1);
 else
  FUNC_2(1);
}
