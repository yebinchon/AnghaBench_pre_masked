
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objagg_stats {scalar_t__ root_count; } ;
struct objagg_hints {int dummy; } ;
struct mlxsw_sp_acl_erp_table {int objagg_lock; int objagg; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_erp_table* erp_table; } ;
struct mlxsw_sp {TYPE_1__* bus_info; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct objagg_stats const*) ;
 int FUNC_1 (struct objagg_stats const*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct objagg_stats* FUNC_5 (struct objagg_hints*) ;
 struct objagg_stats* FUNC_6 (int ) ;
 int FUNC_7 (struct objagg_stats const*) ;

__attribute__((used)) static int
FUNC_8(struct mlxsw_sp *VAR_0,
        struct mlxsw_sp_acl_atcam_region *VAR_1,
        struct objagg_hints *VAR_2, bool *VAR_3)
{
 struct mlxsw_sp_acl_erp_table *VAR_4 = VAR_1->erp_table;
 const struct objagg_stats *VAR_5;
 const struct objagg_stats *VAR_6;
 int VAR_7;

 *VAR_3 = 0;

 FUNC_3(&VAR_4->objagg_lock);
 VAR_5 = FUNC_6(VAR_4->objagg);
 FUNC_4(&VAR_4->objagg_lock);
 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_0->bus_info->dev, "Failed to get ERP stats\n");
  return FUNC_1(VAR_5);
 }

 VAR_6 = FUNC_5(VAR_2);
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_0->bus_info->dev, "Failed to get ERP hints stats\n");
  VAR_7 = FUNC_1(VAR_6);
  goto err_hints_stats_get;
 }


 if (VAR_6->root_count < VAR_5->root_count)
  *VAR_3 = 1;

 VAR_7 = 0;

 FUNC_7(VAR_6);
err_hints_stats_get:
 FUNC_7(VAR_5);
 return VAR_7;
}
