
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_fcs_itnim_s {int dummy; } ;
struct bfa_bsg_itnim_ioprofile_s {int ioprofile; int status; int rpwwn; int lpwwn; int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_fcs_itnim_s*) ;
 struct bfa_fcs_itnim_s* FUNC_1 (struct bfa_fcs_lport_s*,int ) ;
 struct bfa_fcs_lport_s* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct bfad_s *VAR_2, void *VAR_3)
{
 struct bfa_bsg_itnim_ioprofile_s *VAR_4 =
    (struct bfa_bsg_itnim_ioprofile_s *)VAR_3;
 struct bfa_fcs_lport_s *VAR_5;
 struct bfa_fcs_itnim_s *VAR_6;
 unsigned long VAR_7;

 FUNC_4(&VAR_2->bfad_lock, VAR_7);
 VAR_5 = FUNC_2(&VAR_2->bfa_fcs,
    VAR_4->vf_id, VAR_4->lpwwn);
 if (!VAR_5)
  VAR_4->status = VAR_0;
 else {
  VAR_6 = FUNC_1(VAR_5, VAR_4->rpwwn);
  if (VAR_6 == ((void*)0))
   VAR_4->status = VAR_1;
  else
   VAR_4->status = FUNC_3(
      FUNC_0(VAR_6),
      &VAR_4->ioprofile);
 }
 FUNC_5(&VAR_2->bfad_lock, VAR_7);
 return 0;
}
