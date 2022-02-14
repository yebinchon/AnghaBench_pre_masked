
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfa_fcpim_s {int del_itn_stats; } ;
struct bfa_fcpim_del_itn_stats_s {int dummy; } ;
struct bfa_bsg_fcpim_del_itn_stats_s {int status; int modstats; } ;


 struct bfa_fcpim_s* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct bfad_s *VAR_1, void *VAR_2)
{
 struct bfa_bsg_fcpim_del_itn_stats_s *VAR_3 =
   (struct bfa_bsg_fcpim_del_itn_stats_s *)VAR_2;
 struct bfa_fcpim_s *VAR_4 = FUNC_0(&VAR_1->bfa);
 unsigned long VAR_5;

 FUNC_2(&VAR_1->bfad_lock, VAR_5);
 FUNC_1((void *)&VAR_3->modstats, (void *)&VAR_4->del_itn_stats,
  sizeof(struct bfa_fcpim_del_itn_stats_s));
 FUNC_3(&VAR_1->bfad_lock, VAR_5);

 VAR_3->status = VAR_0;
 return 0;
}
