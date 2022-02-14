
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp_acl_tcam_region {int id; struct mlxsw_sp* mlxsw_sp; } ;
struct TYPE_4__ {int bitmap; } ;
struct mlxsw_sp_acl_erp_table {TYPE_2__ master_mask; TYPE_1__* aregion; } ;
struct mlxsw_sp {int core; } ;
struct TYPE_3__ {struct mlxsw_sp_acl_tcam_region* region; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp_acl_erp_table *VAR_3)
{
 struct mlxsw_sp_acl_tcam_region *VAR_4 = VAR_3->aregion->region;
 struct mlxsw_sp *VAR_5 = VAR_4->mlxsw_sp;
 char VAR_6[VAR_0];
 char *VAR_7;

 FUNC_3(VAR_6, VAR_4->id);
 VAR_7 = FUNC_2(VAR_6);
 FUNC_1((u32 *) VAR_7, VAR_3->master_mask.bitmap,
   VAR_1);

 return FUNC_4(VAR_5->core, FUNC_0(VAR_2), VAR_6);
}
