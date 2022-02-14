
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dw; } ;
struct mlxsw_sp_acl {int afk; int ruleset_ht; int dummy_fid; int rules; int tcam; TYPE_1__ rule_activity_update; } ;
struct mlxsw_sp {struct mlxsw_sp_acl* acl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_sp_acl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlxsw_sp*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct mlxsw_sp *VAR_0)
{
 struct mlxsw_sp_acl *VAR_1 = VAR_0->acl;

 FUNC_1(&VAR_0->acl->rule_activity_update.dw);
 FUNC_5(VAR_0, &VAR_1->tcam);
 FUNC_0(!FUNC_3(&VAR_1->rules));
 FUNC_6(VAR_1->dummy_fid);
 FUNC_7(&VAR_1->ruleset_ht);
 FUNC_4(VAR_1->afk);
 FUNC_2(VAR_1);
}
