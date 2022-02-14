
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct se_portal_group {int dummy; } ;
struct se_lun {struct se_portal_group* lun_tpg; int lun_tg_pt_gp_lock; int lun_tg_pt_gp_link; int lun_tg_pt_md_mutex; int lun_deve_lock; int lun_tg_pt_secondary_offline; int lun_dev_link; int lun_deve_list; int lun_shutdown_comp; int lun_acl_count; int unpacked_lun; } ;


 int VAR_0 ;
 struct se_lun* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct se_lun* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;

struct se_lun *FUNC_8(
 struct se_portal_group *VAR_2,
 u64 VAR_3)
{
 struct se_lun *VAR_4;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  FUNC_6("Unable to allocate se_lun memory\n");
  return FUNC_0(-VAR_0);
 }
 VAR_4->unpacked_lun = VAR_3;
 FUNC_2(&VAR_4->lun_acl_count, 0);
 FUNC_3(&VAR_4->lun_shutdown_comp);
 FUNC_1(&VAR_4->lun_deve_list);
 FUNC_1(&VAR_4->lun_dev_link);
 FUNC_2(&VAR_4->lun_tg_pt_secondary_offline, 0);
 FUNC_7(&VAR_4->lun_deve_lock);
 FUNC_5(&VAR_4->lun_tg_pt_md_mutex);
 FUNC_1(&VAR_4->lun_tg_pt_gp_link);
 FUNC_7(&VAR_4->lun_tg_pt_gp_lock);
 VAR_4->lun_tpg = VAR_2;

 return VAR_4;
}
