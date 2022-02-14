
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {int tg_pt_gp_lock; int tg_pt_gp_members; } ;
struct se_lun {int * lun_tg_pt_gp; int lun_tg_pt_gp_link; int lun_tg_pt_gp_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct se_lun *VAR_0,
  struct t10_alua_tg_pt_gp *VAR_1)
{
 FUNC_0(&VAR_0->lun_tg_pt_gp_lock);

 FUNC_2(&VAR_1->tg_pt_gp_lock);
 FUNC_1(&VAR_0->lun_tg_pt_gp_link);
 VAR_1->tg_pt_gp_members--;
 FUNC_3(&VAR_1->tg_pt_gp_lock);

 VAR_0->lun_tg_pt_gp = ((void*)0);
}
