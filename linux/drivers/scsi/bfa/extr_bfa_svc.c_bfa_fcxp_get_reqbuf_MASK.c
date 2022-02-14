
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcxp_s {int use_ireqbuf; int fcxp_tag; struct bfa_fcxp_mod_s* fcxp_mod; } ;
struct bfa_fcxp_mod_s {scalar_t__ rsp_pld_sz; scalar_t__ req_pld_sz; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct bfa_fcxp_mod_s*,int ,scalar_t__) ;

void *
FUNC_2(struct bfa_fcxp_s *VAR_0)
{
 struct bfa_fcxp_mod_s *VAR_1 = VAR_0->fcxp_mod;
 void *VAR_2;

 FUNC_0(VAR_0->use_ireqbuf != 1);
 VAR_2 = FUNC_1(VAR_1, VAR_0->fcxp_tag,
    VAR_1->req_pld_sz + VAR_1->rsp_pld_sz);
 return VAR_2;
}
