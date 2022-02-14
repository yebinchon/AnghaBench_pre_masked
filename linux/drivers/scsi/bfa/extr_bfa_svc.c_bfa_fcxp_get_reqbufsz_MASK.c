
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bfa_fcxp_s {struct bfa_fcxp_mod_s* fcxp_mod; } ;
struct bfa_fcxp_mod_s {int req_pld_sz; } ;



u32
FUNC_0(struct bfa_fcxp_s *VAR_0)
{
 struct bfa_fcxp_mod_s *VAR_1 = VAR_0->fcxp_mod;

 return VAR_1->req_pld_sz;
}
