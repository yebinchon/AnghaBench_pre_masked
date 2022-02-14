
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct bfa_fcxp_s {int use_irspbuf; int fcxp_tag; struct bfa_fcxp_mod_s* fcxp_mod; } ;
struct bfa_fcxp_mod_s {int req_pld_sz; int rsp_pld_sz; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct bfa_fcxp_mod_s*,int ,int) ;

void *
FUNC_2(struct bfa_fcxp_s *VAR_0)
{
 struct bfa_fcxp_mod_s *VAR_1 = VAR_0->fcxp_mod;
 void *VAR_2;

 FUNC_0(VAR_0->use_irspbuf != 1);

 VAR_2 = FUNC_1(VAR_1, VAR_0->fcxp_tag,
    VAR_1->req_pld_sz + VAR_1->rsp_pld_sz);


 return ((u8 *) VAR_2) + VAR_1->req_pld_sz;
}
