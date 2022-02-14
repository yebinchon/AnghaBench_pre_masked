
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_res {int* valid; } ;
typedef enum mlxsw_res_id { ____Placeholder_mlxsw_res_id } mlxsw_res_id ;



__attribute__((used)) static inline bool FUNC_0(struct mlxsw_res *VAR_0,
       enum mlxsw_res_id VAR_1)
{
 return VAR_0->valid[VAR_1];
}
