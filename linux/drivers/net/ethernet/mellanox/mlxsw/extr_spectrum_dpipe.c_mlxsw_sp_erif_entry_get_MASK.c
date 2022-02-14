
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct devlink_dpipe_entry {int counter_valid; int counter; void* index; TYPE_2__* action_values; TYPE_1__* match_values; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_3__ {int* value; int mapping_valid; int mapping_value; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_rif*,int ,int *) ;
 int FUNC_1 (struct mlxsw_sp_rif*) ;
 void* FUNC_2 (struct mlxsw_sp_rif*) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_1,
       struct devlink_dpipe_entry *VAR_2,
       struct mlxsw_sp_rif *VAR_3,
       bool VAR_4)
{
 u32 *VAR_5;
 u32 *VAR_6;
 u64 VAR_7;
 int VAR_8;


 VAR_6 = VAR_2->match_values->value;
 *VAR_6 = FUNC_2(VAR_3);
 VAR_2->match_values->mapping_value = FUNC_1(VAR_3);
 VAR_2->match_values->mapping_valid = 1;


 VAR_5 = VAR_2->action_values->value;
 *VAR_5 = 1;

 VAR_2->counter_valid = 0;
 VAR_2->counter = 0;
 VAR_2->index = FUNC_2(VAR_3);

 if (!VAR_4)
  return 0;

 VAR_8 = FUNC_0(VAR_1, VAR_3,
          VAR_0,
          &VAR_7);
 if (!VAR_8) {
  VAR_2->counter = VAR_7;
  VAR_2->counter_valid = 1;
 }
 return 0;
}
