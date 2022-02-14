
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_tcam_region {int id; TYPE_1__* group; int priv; } ;
struct mlxsw_sp_acl_tcam_ops {int (* region_fini ) (struct mlxsw_sp*,int ) ;} ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;
struct TYPE_2__ {int tcam; } ;


 int FUNC_0 (struct mlxsw_sp_acl_tcam_region*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_region*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_region*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static void
FUNC_5(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_acl_tcam_region *VAR_1)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_2 = VAR_0->acl_tcam_ops;

 VAR_2->region_fini(VAR_0, VAR_1->priv);
 FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_1);
 FUNC_3(VAR_1->group->tcam,
     VAR_1->id);
 FUNC_0(VAR_1);
}
