
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_priv {int ** tisn; int mdev; TYPE_1__* profile; } ;
struct TYPE_2__ {int max_tc; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mlx5e_priv *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0->mdev); VAR_2++)
  for (VAR_1 = 0; VAR_1 < VAR_0->profile->max_tc; VAR_1++)
   FUNC_0(VAR_0->mdev, VAR_0->tisn[VAR_2][VAR_1]);
}
