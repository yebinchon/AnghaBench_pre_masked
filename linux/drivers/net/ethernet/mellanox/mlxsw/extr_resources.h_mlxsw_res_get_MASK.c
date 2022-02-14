
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxsw_res {int * values; int * valid; } ;
typedef enum mlxsw_res_id { ____Placeholder_mlxsw_res_id } mlxsw_res_id ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline u64 FUNC_1(struct mlxsw_res *VAR_0,
    enum mlxsw_res_id VAR_1)
{
 if (FUNC_0(!VAR_0->valid[VAR_1]))
  return 0;
 return VAR_0->values[VAR_1];
}
