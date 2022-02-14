
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fchs_s {int dummy; } ;
struct bfad_fcxp {int comp; int * bfa_fcxp; int rsp_len; int req_status; } ;
struct bfa_fcxp_s {int dummy; } ;
typedef int bfa_status_t ;


 int FUNC_0 (int *) ;

void
FUNC_1(void *VAR_0, struct bfa_fcxp_s *VAR_1, void *VAR_2,
  bfa_status_t VAR_3, u32 VAR_4, u32 VAR_5,
  struct fchs_s *VAR_6)
{
 struct bfad_fcxp *VAR_7 = VAR_0;

 VAR_7->req_status = VAR_3;
 VAR_7->rsp_len = VAR_4;


 VAR_7->bfa_fcxp = ((void*)0);
 FUNC_0(&VAR_7->comp);
}
