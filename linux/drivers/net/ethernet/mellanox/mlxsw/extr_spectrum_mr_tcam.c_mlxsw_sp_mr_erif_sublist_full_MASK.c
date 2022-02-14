
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_erif_sublist {int num_erifs; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool
FUNC_1(struct mlxsw_sp *VAR_1,
         struct mlxsw_sp_mr_erif_sublist *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1->core,
         VAR_0);

 return VAR_2->num_erifs == VAR_3;
}
