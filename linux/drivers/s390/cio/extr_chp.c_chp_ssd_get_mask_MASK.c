
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chsc_ssd_info {int path_mask; int fla_valid_mask; int* fla; int * chpid; } ;
struct chp_link {int fla_mask; int fla; int chpid; } ;


 int FUNC_0 (int *,int *) ;

int FUNC_1(struct chsc_ssd_info *VAR_0, struct chp_link *VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_3 = 0x80 >> VAR_2;
  if (!(VAR_0->path_mask & VAR_3))
   continue;
  if (!FUNC_0(&VAR_0->chpid[VAR_2], &VAR_1->chpid))
   continue;
  if ((VAR_0->fla_valid_mask & VAR_3) &&
      ((VAR_0->fla[VAR_2] & VAR_1->fla_mask) != VAR_1->fla))
   continue;
  return VAR_3;
 }
 return 0;
}
