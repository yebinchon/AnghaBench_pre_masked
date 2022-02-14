
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_rport_s {int rport_tag; } ;
struct bfa_itn_s {void (* isr ) (struct bfa_s*,struct bfi_msg_s*) ;} ;
struct bfa_fcp_mod_s {int dummy; } ;


 struct bfa_fcp_mod_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_itn_s* FUNC_1 (struct bfa_fcp_mod_s*,int ) ;

void
FUNC_2(struct bfa_s *VAR_0, struct bfa_rport_s *VAR_1,
  void (*VAR_2)(struct bfa_s *VAR_3, struct bfi_msg_s *VAR_4))
{
 struct bfa_fcp_mod_s *VAR_5 = FUNC_0(VAR_0);
 struct bfa_itn_s *VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_1->rport_tag);
 VAR_6->isr = VAR_2;
}
