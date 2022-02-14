
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_acl_tcam_region {int id; } ;
struct mlxsw_sp_acl_erp_table {scalar_t__ num_ctcam_erps; int erp_index_bitmap; int base_index; TYPE_2__* erp_core; TYPE_1__* aregion; } ;
struct mlxsw_sp_acl_erp {int index; struct mlxsw_sp_acl_erp_table* erp_table; } ;
struct mlxsw_sp {int core; } ;
struct TYPE_4__ {struct mlxsw_sp* mlxsw_sp; } ;
struct TYPE_3__ {struct mlxsw_sp_acl_tcam_region* region; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int ,int,int,int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct mlxsw_sp_acl_erp *VAR_3)
{
 struct mlxsw_sp_acl_erp_table *VAR_4 = VAR_3->erp_table;
 struct mlxsw_sp_acl_tcam_region *VAR_5 = VAR_4->aregion->region;
 struct mlxsw_sp *VAR_6 = VAR_4->erp_core->mlxsw_sp;
 bool VAR_7 = VAR_4->num_ctcam_erps > 0;
 char VAR_8[VAR_0];

 FUNC_3(VAR_8, VAR_5->id, VAR_7, 1, 0,
         VAR_4->base_index, 0);
 FUNC_1(VAR_8, VAR_4->erp_index_bitmap,
      VAR_1);
 FUNC_2(VAR_8, VAR_3->index, 0);

 FUNC_4(VAR_6->core, FUNC_0(VAR_2), VAR_8);
}
