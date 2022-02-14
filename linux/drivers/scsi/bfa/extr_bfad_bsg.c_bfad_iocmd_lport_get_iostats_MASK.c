
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; int bfa_fcs; } ;
struct bfa_fcs_lport_s {int lp_tag; } ;
struct bfa_bsg_lport_iostats_s {int status; int iostats; int pwwn; int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 struct bfa_fcs_lport_s* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct bfad_s *VAR_2, void *VAR_3)
{
 struct bfa_fcs_lport_s *VAR_4;
 struct bfa_bsg_lport_iostats_s *VAR_5 =
   (struct bfa_bsg_lport_iostats_s *)VAR_3;
 unsigned long VAR_6;

 FUNC_2(&VAR_2->bfad_lock, VAR_6);
 VAR_4 = FUNC_1(&VAR_2->bfa_fcs,
    VAR_5->vf_id, VAR_5->pwwn);
 if (VAR_4 == ((void*)0)) {
  FUNC_3(&VAR_2->bfad_lock, VAR_6);
  VAR_5->status = VAR_1;
  goto out;
 }

 FUNC_0(&VAR_2->bfa, &VAR_5->iostats,
   VAR_4->lp_tag);
 FUNC_3(&VAR_2->bfad_lock, VAR_6);
 VAR_5->status = VAR_0;
out:
 return 0;
}
