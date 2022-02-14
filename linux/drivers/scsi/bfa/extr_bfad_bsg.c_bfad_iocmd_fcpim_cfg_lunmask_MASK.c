
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfa_bsg_fcpim_lunmask_s {int lun; int rpwwn; int pwwn; int vf_id; int status; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ,int ) ;
 int FUNC_1 (int *,int ,int *,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct bfad_s *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct bfa_bsg_fcpim_lunmask_s *VAR_5 =
    (struct bfa_bsg_fcpim_lunmask_s *)VAR_3;
 unsigned long VAR_6;

 FUNC_2(&VAR_2->bfad_lock, VAR_6);
 if (VAR_4 == VAR_0)
  VAR_5->status = FUNC_0(&VAR_2->bfa, VAR_5->vf_id,
     &VAR_5->pwwn, VAR_5->rpwwn, VAR_5->lun);
 else if (VAR_4 == VAR_1)
  VAR_5->status = FUNC_1(&VAR_2->bfa,
     VAR_5->vf_id, &VAR_5->pwwn,
     VAR_5->rpwwn, VAR_5->lun);
 FUNC_3(&VAR_2->bfad_lock, VAR_6);
 return 0;
}
