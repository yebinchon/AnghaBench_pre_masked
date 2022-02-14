
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_icm_chunk {int ste_arr; int hw_ste_arr; int miss_list; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5dr_icm_chunk *VAR_0)
{
 FUNC_0(VAR_0->miss_list);
 FUNC_0(VAR_0->hw_ste_arr);
 FUNC_0(VAR_0->ste_arr);
}
