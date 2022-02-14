
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_rif {int dummy; } ;
struct devlink_dpipe_value {int mapping_valid; int mapping_value; int * value; } ;
struct devlink_dpipe_entry {struct devlink_dpipe_value* action_values; struct devlink_dpipe_value* match_values; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (struct mlxsw_sp_rif*) ;
 int FUNC_2 (struct mlxsw_sp_rif*) ;

__attribute__((used)) static void
FUNC_3(struct devlink_dpipe_entry *VAR_5,
          u32 VAR_6, u32 VAR_7,
          u32 VAR_8, unsigned char *VAR_9,
          struct mlxsw_sp_rif *VAR_10)
{
 struct devlink_dpipe_value *VAR_11;
 u32 *VAR_12;
 u32 *VAR_13;

 VAR_11 = &VAR_5->match_values[VAR_3];
 VAR_13 = VAR_11->value;
 *VAR_13 = VAR_6;

 VAR_11 = &VAR_5->match_values[VAR_4];
 VAR_13 = VAR_11->value;
 *VAR_13 = VAR_7;

 VAR_11 = &VAR_5->match_values[VAR_2];
 VAR_13 = VAR_11->value;
 *VAR_13 = VAR_8;

 VAR_11 = &VAR_5->action_values[VAR_0];
 FUNC_0(VAR_11->value, VAR_9);

 VAR_11 = &VAR_5->action_values[VAR_1];
 VAR_12 = VAR_11->value;
 *VAR_12 = FUNC_2(VAR_10);
 VAR_11->mapping_value = FUNC_1(VAR_10);
 VAR_11->mapping_valid = 1;
}
