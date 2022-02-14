
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp_rif {int dummy; } ;
struct devlink_dpipe_value {int mapping_valid; int * value; int value_size; int mapping_value; } ;
struct devlink_dpipe_entry {struct devlink_dpipe_value* action_values; struct devlink_dpipe_value* match_values; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *,void*,int ) ;
 int FUNC_2 (struct mlxsw_sp_rif*) ;
 int FUNC_3 (struct mlxsw_sp_rif*) ;

__attribute__((used)) static void
FUNC_4(struct devlink_dpipe_entry *VAR_2,
           struct mlxsw_sp_rif *VAR_3,
           unsigned char *VAR_4, void *VAR_5)
{
 struct devlink_dpipe_value *VAR_6;
 u32 *VAR_7;
 u8 *VAR_8;


 VAR_6 = &VAR_2->match_values[VAR_1];

 VAR_7 = VAR_6->value;
 *VAR_7 = FUNC_3(VAR_3);
 VAR_6->mapping_value = FUNC_2(VAR_3);
 VAR_6->mapping_valid = 1;


 VAR_6 = &VAR_2->match_values[VAR_0];
 FUNC_1(VAR_6->value, VAR_5, VAR_6->value_size);


 VAR_6 = VAR_2->action_values;
 VAR_8 = VAR_6->value;
 FUNC_0(VAR_8, VAR_4);
}
