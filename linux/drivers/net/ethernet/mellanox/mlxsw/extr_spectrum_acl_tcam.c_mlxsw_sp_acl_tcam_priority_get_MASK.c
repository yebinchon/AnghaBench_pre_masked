
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct mlxsw_sp_acl_rule_info {scalar_t__ priority; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct mlxsw_sp *VAR_3,
       struct mlxsw_sp_acl_rule_info *VAR_4,
       u32 *VAR_5, bool VAR_6)
{
 u64 VAR_7;

 if (!VAR_6) {
  *VAR_5 = 0;
  return 0;
 }

 if (!FUNC_1(VAR_3->core, VAR_2))
  return -VAR_1;


 VAR_7 = FUNC_0(VAR_3->core, VAR_2) - 1;
 if (VAR_4->priority >= VAR_7)
  return -VAR_0;


 *VAR_5 = VAR_7 - VAR_4->priority;
 return 0;
}
