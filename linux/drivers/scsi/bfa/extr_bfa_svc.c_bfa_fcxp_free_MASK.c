
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcxp_s {int fcxp_tag; struct bfa_fcxp_mod_s* fcxp_mod; } ;
struct bfa_fcxp_mod_s {int bfa; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bfa_fcxp_s*) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct bfa_fcxp_s *VAR_0)
{
 struct bfa_fcxp_mod_s *VAR_1 = VAR_0->fcxp_mod;

 FUNC_0(VAR_0 == ((void*)0));
 FUNC_2(VAR_1->bfa, VAR_0->fcxp_tag);
 FUNC_1(VAR_0);
}
