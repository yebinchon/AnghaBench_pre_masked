
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_acl_tcam_region {int id; } ;
struct mlxsw_sp_acl_erp_table {TYPE_2__* erp_core; TYPE_1__* aregion; } ;
struct mlxsw_sp_acl_erp {int id; } ;
struct mlxsw_sp {int core; } ;
struct TYPE_4__ {struct mlxsw_sp* mlxsw_sp; } ;
struct TYPE_3__ {struct mlxsw_sp_acl_tcam_region* region; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int,int,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 struct mlxsw_sp_acl_erp* FUNC_3 (struct mlxsw_sp_acl_erp_table*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp_acl_erp_table *VAR_2)
{
 struct mlxsw_sp_acl_tcam_region *VAR_3 = VAR_2->aregion->region;
 struct mlxsw_sp *VAR_4 = VAR_2->erp_core->mlxsw_sp;
 char VAR_5[VAR_0];
 struct mlxsw_sp_acl_erp *VAR_6;

 VAR_6 = FUNC_3(VAR_2);




 FUNC_1(VAR_5, VAR_3->id, 0, 0, 0, 0,
         VAR_6 ? VAR_6->id : 0);
 FUNC_2(VAR_4->core, FUNC_0(VAR_1), VAR_5);
}
