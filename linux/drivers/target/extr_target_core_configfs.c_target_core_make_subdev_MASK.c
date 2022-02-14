
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct target_backend {int tb_dev_stat_cit; int tb_dev_alua_tg_pt_gps_cit; int tb_dev_wwn_cit; int tb_dev_pr_cit; int tb_dev_attrib_cit; int tb_dev_action_cit; int tb_dev_cit; } ;
struct config_item {int dummy; } ;
struct config_group {struct config_item cg_item; } ;
struct t10_alua_tg_pt_gp {struct config_group tg_pt_gp_group; } ;
struct se_hba {int hba_access_mutex; struct target_backend* backend; } ;
struct TYPE_8__ {struct config_group alua_tg_pt_gps_group; struct t10_alua_tg_pt_gp* default_tg_pt_gp; } ;
struct TYPE_7__ {struct config_group stat_group; } ;
struct TYPE_6__ {struct config_group t10_wwn_group; } ;
struct TYPE_5__ {struct config_group da_group; } ;
struct se_device {struct config_group dev_group; TYPE_4__ t10_alua; TYPE_3__ dev_stat_grps; TYPE_2__ t10_wwn; struct config_group dev_pr_group; TYPE_1__ dev_attrib; struct config_group dev_action_group; } ;


 int VAR_0 ;
 struct config_group* FUNC_0 (int) ;
 int FUNC_1 (struct config_group*,char const*,int *) ;
 int FUNC_2 (struct config_group*,struct config_group*) ;
 struct t10_alua_tg_pt_gp* FUNC_3 (struct se_device*,char*,int) ;
 struct se_hba* FUNC_4 (struct config_item*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct se_device* FUNC_7 (struct se_hba*,char const*) ;
 int VAR_1 ;
 int FUNC_8 (struct se_device*) ;
 int FUNC_9 (struct se_device*) ;

__attribute__((used)) static struct config_group *FUNC_10(
 struct config_group *VAR_2,
 const char *VAR_3)
{
 struct t10_alua_tg_pt_gp *VAR_4;
 struct config_item *VAR_5 = &VAR_2->cg_item;
 struct se_hba *VAR_6 = FUNC_4(VAR_5);
 struct target_backend *VAR_7 = VAR_6->backend;
 struct se_device *VAR_8;
 int VAR_9 = -VAR_0, VAR_10;

 VAR_10 = FUNC_5(&VAR_6->hba_access_mutex);
 if (VAR_10)
  return FUNC_0(VAR_10);

 VAR_8 = FUNC_7(VAR_6, VAR_3);
 if (!VAR_8)
  goto out_unlock;

 FUNC_1(&VAR_8->dev_group, VAR_3, &VAR_7->tb_dev_cit);

 FUNC_1(&VAR_8->dev_action_group, "action",
   &VAR_7->tb_dev_action_cit);
 FUNC_2(&VAR_8->dev_action_group, &VAR_8->dev_group);

 FUNC_1(&VAR_8->dev_attrib.da_group, "attrib",
   &VAR_7->tb_dev_attrib_cit);
 FUNC_2(&VAR_8->dev_attrib.da_group, &VAR_8->dev_group);

 FUNC_1(&VAR_8->dev_pr_group, "pr",
   &VAR_7->tb_dev_pr_cit);
 FUNC_2(&VAR_8->dev_pr_group, &VAR_8->dev_group);

 FUNC_1(&VAR_8->t10_wwn.t10_wwn_group, "wwn",
   &VAR_7->tb_dev_wwn_cit);
 FUNC_2(&VAR_8->t10_wwn.t10_wwn_group,
   &VAR_8->dev_group);

 FUNC_1(&VAR_8->t10_alua.alua_tg_pt_gps_group,
   "alua", &VAR_7->tb_dev_alua_tg_pt_gps_cit);
 FUNC_2(&VAR_8->t10_alua.alua_tg_pt_gps_group,
   &VAR_8->dev_group);

 FUNC_1(&VAR_8->dev_stat_grps.stat_group,
   "statistics", &VAR_7->tb_dev_stat_cit);
 FUNC_2(&VAR_8->dev_stat_grps.stat_group,
   &VAR_8->dev_group);




 VAR_4 = FUNC_3(VAR_8, "default_tg_pt_gp", 1);
 if (!VAR_4)
  goto out_free_device;
 VAR_8->t10_alua.default_tg_pt_gp = VAR_4;

 FUNC_1(&VAR_4->tg_pt_gp_group,
   "default_tg_pt_gp", &VAR_1);
 FUNC_2(&VAR_4->tg_pt_gp_group,
   &VAR_8->t10_alua.alua_tg_pt_gps_group);




 FUNC_9(VAR_8);

 FUNC_6(&VAR_6->hba_access_mutex);
 return &VAR_8->dev_group;

out_free_device:
 FUNC_8(VAR_8);
out_unlock:
 FUNC_6(&VAR_6->hba_access_mutex);
 return FUNC_0(VAR_9);
}
