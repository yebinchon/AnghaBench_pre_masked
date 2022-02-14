
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_tc_flow {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5e_tc_flow*,int ) ;

__attribute__((used)) static bool FUNC_2(struct mlx5e_tc_flow *VAR_2, int VAR_3)
{
 bool VAR_4 = !!(VAR_3 & FUNC_0(VAR_1));
 bool VAR_5 = !!(VAR_3 & FUNC_0(VAR_0));

 return FUNC_1(VAR_2, VAR_1) == VAR_4 &&
  FUNC_1(VAR_2, VAR_0) == VAR_5;
}
