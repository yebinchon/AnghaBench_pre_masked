
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bfi_fcxp_send_rsp_s {scalar_t__ req_status; int fchs; void* residue_len; void* rsp_len; int fcxp_tag; } ;
struct bfa_s {int dummy; } ;
struct bfa_fcxp_s {scalar_t__ rsp_status; int (* send_cbfn ) (int *,struct bfa_fcxp_s*,int ,scalar_t__,void*,void*,int *) ;int hcb_qe; int rsp_fchs; void* residue_len; void* rsp_len; int send_cbarg; int * caller; } ;
struct bfa_fcxp_mod_s {struct bfa_s* bfa; } ;


 struct bfa_fcxp_s* FUNC_0 (struct bfa_fcxp_mod_s*,int) ;
 struct bfa_fcxp_mod_s* FUNC_1 (struct bfa_s*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (struct bfa_s*,int *,int ,struct bfa_fcxp_s*) ;
 int FUNC_6 (struct bfa_fcxp_s*) ;
 int FUNC_7 (struct bfa_s*,int) ;
 int FUNC_8 (struct bfa_s*,struct bfa_fcxp_s*,struct bfi_fcxp_send_rsp_s*) ;
 int FUNC_9 (int *,struct bfa_fcxp_s*,int ,scalar_t__,void*,void*,int *) ;

__attribute__((used)) static void
FUNC_10(struct bfa_s *VAR_2, struct bfi_fcxp_send_rsp_s *VAR_3)
{
 struct bfa_fcxp_mod_s *VAR_4 = FUNC_1(VAR_2);
 struct bfa_fcxp_s *VAR_5;
 u16 VAR_6 = FUNC_3(VAR_3->fcxp_tag);

 FUNC_7(VAR_2, VAR_6);

 VAR_3->rsp_len = FUNC_4(VAR_3->rsp_len);





 if (VAR_3->req_status == VAR_0)
  VAR_3->residue_len = 0;
 else
  VAR_3->residue_len = FUNC_4(VAR_3->residue_len);

 VAR_5 = FUNC_0(VAR_4, VAR_6);

 FUNC_2(VAR_5->send_cbfn == ((void*)0));

 FUNC_8(VAR_4->bfa, VAR_5, VAR_3);

 if (VAR_5->send_cbfn != ((void*)0)) {
  FUNC_7(VAR_4->bfa, (((void*)0) == VAR_5->caller));
  if (VAR_5->caller == ((void*)0)) {
   VAR_5->send_cbfn(VAR_5->caller, VAR_5, VAR_5->send_cbarg,
     VAR_3->req_status, VAR_3->rsp_len,
     VAR_3->residue_len, &VAR_3->fchs);



   FUNC_6(VAR_5);
  } else {
   VAR_5->rsp_status = VAR_3->req_status;
   VAR_5->rsp_len = VAR_3->rsp_len;
   VAR_5->residue_len = VAR_3->residue_len;
   VAR_5->rsp_fchs = VAR_3->fchs;

   FUNC_5(VAR_2, &VAR_5->hcb_qe,
     VAR_1, VAR_5);
  }
 } else {
  FUNC_7(VAR_2, (((void*)0) == VAR_5->send_cbfn));
 }
}
