
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int dummy; } ;
struct bfa_s {int fcs; } ;
struct bfa_fcs_fabric_s {struct bfa_fcs_s* fcs; int bport; int wc; int lps; int vf_q; int vport_q; } ;
struct bfa_fcs_s {struct bfa_s* bfa; scalar_t__ num_rport_logins; int min_cfg; struct bfad_s* bfad; struct bfa_fcs_fabric_s fabric; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bfa_s*,int ,struct bfa_fcs_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,struct bfa_fcs_s*,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct bfa_s*) ;
 int FUNC_5 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_6 (struct bfa_s*,int ,struct bfa_fcs_s*) ;
 int FUNC_7 (int *,int ,struct bfa_fcs_fabric_s*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (struct bfa_fcs_fabric_s*,int ,int) ;

void
FUNC_11(struct bfa_fcs_s *VAR_6, struct bfa_s *VAR_7, struct bfad_s *VAR_8,
        bfa_boolean_t VAR_9)
{
 struct bfa_fcs_fabric_s *VAR_10 = &VAR_6->fabric;

 VAR_6->bfa = VAR_7;
 VAR_6->bfad = VAR_8;
 VAR_6->min_cfg = VAR_9;
 VAR_6->num_rport_logins = 0;

 VAR_7->fcs = VAR_0;
 FUNC_9();

 FUNC_2(VAR_6->bfa, VAR_4, VAR_6);
 FUNC_6(VAR_6->bfa, VAR_5, VAR_6);

 FUNC_10(VAR_10, 0, sizeof(struct bfa_fcs_fabric_s));




 VAR_10->fcs = VAR_6;
 FUNC_0(&VAR_10->vport_q);
 FUNC_0(&VAR_10->vf_q);
 VAR_10->lps = FUNC_4(VAR_6->bfa);
 FUNC_1(!VAR_10->lps);





 FUNC_7(&VAR_10->wc, VAR_2, VAR_10);
 FUNC_8(&VAR_10->wc);

 FUNC_5(VAR_10, VAR_3);
 FUNC_3(&VAR_10->bport, VAR_10->fcs, VAR_1, ((void*)0));
}
