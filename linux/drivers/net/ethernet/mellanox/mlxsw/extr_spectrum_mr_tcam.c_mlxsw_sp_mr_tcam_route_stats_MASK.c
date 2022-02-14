
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxsw_sp_mr_tcam_route {int counter_index; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp *VAR_0,
     void *VAR_1, u64 *VAR_2,
     u64 *VAR_3)
{
 struct mlxsw_sp_mr_tcam_route *VAR_4 = VAR_1;

 return FUNC_0(VAR_0, VAR_4->counter_index,
      VAR_2, VAR_3);
}
