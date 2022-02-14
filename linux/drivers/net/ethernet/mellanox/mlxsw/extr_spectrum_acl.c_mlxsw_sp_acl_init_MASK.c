
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_fid {int dummy; } ;
struct TYPE_2__ {int dw; int interval; } ;
struct mlxsw_sp_acl {int afk; int ruleset_ht; TYPE_1__ rule_activity_update; int tcam; int rules; struct mlxsw_sp_fid* dummy_fid; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int afk_ops; int core; struct mlxsw_sp_acl* acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct mlxsw_sp_fid*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct mlxsw_sp_fid*) ;
 int FUNC_5 (struct mlxsw_sp_acl*) ;
 struct mlxsw_sp_acl* FUNC_6 (size_t,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct mlxsw_sp*,int *) ;
 int FUNC_11 (struct mlxsw_sp*) ;
 struct mlxsw_sp_fid* FUNC_12 (struct mlxsw_sp*) ;
 int FUNC_13 (struct mlxsw_sp_fid*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;

int FUNC_16(struct mlxsw_sp *VAR_6)
{
 struct mlxsw_sp_fid *VAR_7;
 struct mlxsw_sp_acl *VAR_8;
 size_t VAR_9;
 int VAR_10;

 VAR_9 = sizeof(*VAR_8) + FUNC_11(VAR_6);
 VAR_8 = FUNC_6(VAR_9, VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_6->acl = VAR_8;
 VAR_8->mlxsw_sp = VAR_6;
 VAR_8->afk = FUNC_7(FUNC_3(VAR_6->core,
             VAR_0),
        VAR_6->afk_ops);
 if (!VAR_8->afk) {
  VAR_10 = -VAR_1;
  goto err_afk_create;
 }

 VAR_10 = FUNC_15(&VAR_8->ruleset_ht,
         &VAR_5);
 if (VAR_10)
  goto err_rhashtable_init;

 VAR_7 = FUNC_12(VAR_6);
 if (FUNC_2(VAR_7)) {
  VAR_10 = FUNC_4(VAR_7);
  goto err_fid_get;
 }
 VAR_8->dummy_fid = VAR_7;

 FUNC_1(&VAR_8->rules);
 VAR_10 = FUNC_10(VAR_6, &VAR_8->tcam);
 if (VAR_10)
  goto err_acl_ops_init;


 FUNC_0(&VAR_8->rule_activity_update.dw,
     VAR_4);
 VAR_8->rule_activity_update.interval = VAR_3;
 FUNC_9(&VAR_8->rule_activity_update.dw, 0);
 return 0;

err_acl_ops_init:
 FUNC_13(VAR_7);
err_fid_get:
 FUNC_14(&VAR_8->ruleset_ht);
err_rhashtable_init:
 FUNC_8(VAR_8->afk);
err_afk_create:
 FUNC_5(VAR_8);
 return VAR_10;
}
