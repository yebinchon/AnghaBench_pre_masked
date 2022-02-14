
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void objagg_hints ;
struct mlxsw_sp_acl_erp_table {int objagg_lock; int objagg; } ;
struct mlxsw_sp_acl_atcam_region {TYPE_2__* region; struct mlxsw_sp_acl_erp_table* erp_table; } ;
struct mlxsw_sp {TYPE_1__* bus_info; } ;
struct TYPE_4__ {struct mlxsw_sp* mlxsw_sp; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_acl_atcam_region*,void*,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (void*) ;

void *
FUNC_9(struct mlxsw_sp_acl_atcam_region *VAR_2)
{
 struct mlxsw_sp_acl_erp_table *VAR_3 = VAR_2->erp_table;
 struct mlxsw_sp *VAR_4 = VAR_2->region->mlxsw_sp;
 struct objagg_hints *VAR_5;
 bool VAR_6;
 int VAR_7;

 FUNC_5(&VAR_3->objagg_lock);
 VAR_5 = FUNC_7(VAR_3->objagg,
     VAR_1);
 FUNC_6(&VAR_3->objagg_lock);
 if (FUNC_2(VAR_5)) {
  FUNC_3(VAR_4->bus_info->dev, "Failed to create ERP hints\n");
  return FUNC_0(VAR_5);
 }
 VAR_7 = FUNC_4(VAR_4, VAR_2, VAR_5,
        &VAR_6);
 if (VAR_7)
  goto errout;

 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto errout;
 }
 return VAR_5;

errout:
 FUNC_8(VAR_5);
 return FUNC_1(VAR_7);
}
