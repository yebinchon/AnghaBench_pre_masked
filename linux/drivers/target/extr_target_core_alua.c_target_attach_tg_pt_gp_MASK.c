
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {int dummy; } ;
struct se_lun {int lun_tg_pt_gp_lock; } ;


 int FUNC_0 (struct se_lun*,struct t10_alua_tg_pt_gp*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct se_lun *VAR_0,
  struct t10_alua_tg_pt_gp *VAR_1)
{
 FUNC_1(&VAR_0->lun_tg_pt_gp_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lun_tg_pt_gp_lock);
}
