
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_channels {int num; int * c; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_channels *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num; VAR_1++)
  FUNC_0(VAR_0->c[VAR_1]);
}
