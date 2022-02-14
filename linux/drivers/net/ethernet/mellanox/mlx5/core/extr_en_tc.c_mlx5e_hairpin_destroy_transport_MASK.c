
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_hairpin {int tdn; int func_mdev; int tirn; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_hairpin *VAR_0)
{
 FUNC_1(VAR_0->func_mdev, VAR_0->tirn);
 FUNC_0(VAR_0->func_mdev, VAR_0->tdn);
}
