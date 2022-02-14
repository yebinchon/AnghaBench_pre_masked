
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_priv {int* def_counter; } ;
struct TYPE_2__ {int num_ports; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int FUNC_0 (struct mlx4_dev*,int) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

__attribute__((used)) static void FUNC_2(struct mlx4_dev *VAR_0)
{
 struct mlx4_priv *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->caps.num_ports; VAR_2++)
  if (VAR_1->def_counter[VAR_2] != -1)
   FUNC_0(VAR_0, VAR_1->def_counter[VAR_2]);
}
