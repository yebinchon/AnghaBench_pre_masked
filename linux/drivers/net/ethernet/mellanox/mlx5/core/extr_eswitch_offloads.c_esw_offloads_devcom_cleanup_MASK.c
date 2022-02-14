
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_eswitch {TYPE_2__* dev; } ;
struct mlx5_devcom {int dummy; } ;
struct TYPE_3__ {struct mlx5_devcom* devcom; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_devcom*,int ,int ,struct mlx5_eswitch*) ;
 int FUNC_2 (struct mlx5_devcom*,int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_eswitch *VAR_3)
{
 struct mlx5_devcom *VAR_4 = VAR_3->dev->priv.devcom;

 if (!FUNC_0(VAR_3->dev, VAR_2))
  return;

 FUNC_1(VAR_4, VAR_1,
          VAR_0, VAR_3);

 FUNC_2(VAR_4, VAR_1);
}
