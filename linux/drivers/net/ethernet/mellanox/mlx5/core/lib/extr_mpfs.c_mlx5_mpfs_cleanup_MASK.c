
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_mpfs {int bitmap; int hash; } ;
struct TYPE_2__ {struct mlx5_mpfs* mpfs; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5_mpfs*) ;

void FUNC_5(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_mpfs *VAR_1 = VAR_0->priv.mpfs;

 if (!FUNC_0(VAR_0))
  return;

 FUNC_1(!FUNC_3(VAR_1->hash));
 FUNC_2(VAR_1->bitmap);
 FUNC_4(VAR_1);
}
