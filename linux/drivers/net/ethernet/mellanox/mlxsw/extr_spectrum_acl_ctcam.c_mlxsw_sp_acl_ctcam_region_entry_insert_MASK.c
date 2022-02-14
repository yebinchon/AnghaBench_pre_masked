
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp_acl_tcam_region {int key_info; int tcam_region_info; } ;
struct mlxsw_sp_acl_rule_info {int act_block; int values; } ;
struct mlxsw_sp_acl_ctcam_region {TYPE_2__* ops; struct mlxsw_sp_acl_tcam_region* region; } ;
struct TYPE_3__ {int index; } ;
struct mlxsw_sp_acl_ctcam_entry {TYPE_1__ parman_item; } ;
struct mlxsw_sp {int core; int acl; } ;
struct mlxsw_afk {int dummy; } ;
struct TYPE_4__ {int (* entry_insert ) (struct mlxsw_sp_acl_ctcam_region*,struct mlxsw_sp_acl_ctcam_entry*,char*) ;int (* entry_remove ) (struct mlxsw_sp_acl_ctcam_region*,struct mlxsw_sp_acl_ctcam_entry*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_afk*,int ,int *,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,int,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,char*) ;
 struct mlxsw_afk* FUNC_8 (int ) ;
 int FUNC_9 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule_info*,int *,int) ;
 int VAR_2 ;
 int FUNC_10 (struct mlxsw_sp_acl_ctcam_region*,struct mlxsw_sp_acl_ctcam_entry*,char*) ;
 int FUNC_11 (struct mlxsw_sp_acl_ctcam_region*,struct mlxsw_sp_acl_ctcam_entry*) ;

__attribute__((used)) static int
FUNC_12(struct mlxsw_sp *VAR_3,
           struct mlxsw_sp_acl_ctcam_region *VAR_4,
           struct mlxsw_sp_acl_ctcam_entry *VAR_5,
           struct mlxsw_sp_acl_rule_info *VAR_6,
           bool VAR_7)
{
 struct mlxsw_sp_acl_tcam_region *VAR_8 = VAR_4->region;
 struct mlxsw_afk *VAR_9 = FUNC_8(VAR_3->acl);
 char VAR_10[VAR_0];
 char *VAR_11;
 u32 VAR_12;
 char *VAR_13;
 char *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_9(VAR_3, VAR_6, &VAR_12,
          VAR_7);
 if (VAR_15)
  return VAR_15;

 FUNC_6(VAR_10, 1, VAR_1,
        VAR_8->tcam_region_info,
        VAR_5->parman_item.index, VAR_12);
 VAR_14 = FUNC_4(VAR_10);
 VAR_13 = FUNC_5(VAR_10);
 FUNC_2(VAR_9, VAR_8->key_info, &VAR_6->values, VAR_14, VAR_13);

 VAR_15 = VAR_4->ops->entry_insert(VAR_4, VAR_5, VAR_13);
 if (VAR_15)
  return VAR_15;


 VAR_11 = FUNC_1(VAR_6->act_block);
 FUNC_3(VAR_10, VAR_11);

 VAR_15 = FUNC_7(VAR_3->core, FUNC_0(VAR_2), VAR_10);
 if (VAR_15)
  goto err_ptce2_write;

 return 0;

err_ptce2_write:
 VAR_4->ops->entry_remove(VAR_4, VAR_5);
 return VAR_15;
}
