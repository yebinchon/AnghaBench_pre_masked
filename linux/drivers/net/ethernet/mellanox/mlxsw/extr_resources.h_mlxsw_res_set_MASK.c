
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxsw_res {int* valid; int * values; } ;
typedef enum mlxsw_res_id { ____Placeholder_mlxsw_res_id } mlxsw_res_id ;



__attribute__((used)) static inline void FUNC_0(struct mlxsw_res *VAR_0,
     enum mlxsw_res_id VAR_1, u64 VAR_2)
{
 VAR_0->valid[VAR_1] = 1;
 VAR_0->values[VAR_1] = VAR_2;
}
