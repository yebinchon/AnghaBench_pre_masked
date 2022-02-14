
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_hairpin {int num_channels; int pair; } ;


 int FUNC_0 (struct mlx5e_hairpin*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5e_hairpin*) ;
 int FUNC_3 (struct mlx5e_hairpin*) ;

__attribute__((used)) static void FUNC_4(struct mlx5e_hairpin *VAR_0)
{
 if (VAR_0->num_channels > 1)
  FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->pair);
 FUNC_0(VAR_0);
}
