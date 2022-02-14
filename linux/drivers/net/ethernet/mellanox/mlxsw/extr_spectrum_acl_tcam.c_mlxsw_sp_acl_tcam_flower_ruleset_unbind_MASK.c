
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_port {int dummy; } ;
struct TYPE_2__ {int group; } ;
struct mlxsw_sp_acl_tcam_flower_ruleset {TYPE_1__ vgroup; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int *,struct mlxsw_sp_port*,int) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp *VAR_0,
     void *VAR_1,
     struct mlxsw_sp_port *VAR_2,
     bool VAR_3)
{
 struct mlxsw_sp_acl_tcam_flower_ruleset *VAR_4 = VAR_1;

 FUNC_0(VAR_0, &VAR_4->vgroup.group,
           VAR_2, VAR_3);
}
