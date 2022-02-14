
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfa_lunmask_cfg_s {int dummy; } ;
struct bfa_bsg_fcpim_lunmask_query_s {int status; struct bfa_lunmask_cfg_s lun_mask; } ;


 int FUNC_0 (int *,struct bfa_lunmask_cfg_s*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct bfad_s *VAR_0, void *VAR_1)
{
 struct bfa_bsg_fcpim_lunmask_query_s *VAR_2 =
   (struct bfa_bsg_fcpim_lunmask_query_s *)VAR_1;
 struct bfa_lunmask_cfg_s *VAR_3 = &VAR_2->lun_mask;
 unsigned long VAR_4;

 FUNC_1(&VAR_0->bfad_lock, VAR_4);
 VAR_2->status = FUNC_0(&VAR_0->bfa, VAR_3);
 FUNC_2(&VAR_0->bfad_lock, VAR_4);
 return 0;
}
