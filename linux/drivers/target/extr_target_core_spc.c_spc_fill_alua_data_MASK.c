
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {unsigned char tg_pt_gp_alua_access_type; } ;
struct se_lun {int lun_tg_pt_gp_lock; struct t10_alua_tg_pt_gp* lun_tg_pt_gp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct se_lun *VAR_0, unsigned char *VAR_1)
{
 struct t10_alua_tg_pt_gp *VAR_2;




 VAR_1[5] = 0x80;







 FUNC_0(&VAR_0->lun_tg_pt_gp_lock);
 VAR_2 = VAR_0->lun_tg_pt_gp;
 if (VAR_2)
  VAR_1[5] |= VAR_2->tg_pt_gp_alua_access_type;
 FUNC_1(&VAR_0->lun_tg_pt_gp_lock);
}
