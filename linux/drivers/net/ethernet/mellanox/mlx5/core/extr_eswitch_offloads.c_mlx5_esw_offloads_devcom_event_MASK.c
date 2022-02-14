
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
 int FUNC_0 (TYPE_2__*,char*,int,int) ;
 int FUNC_1 (struct mlx5_devcom*,int ) ;
 int FUNC_2 (struct mlx5_devcom*,int ,int) ;
 int FUNC_3 (struct mlx5_eswitch*,struct mlx5_eswitch*) ;
 int FUNC_4 (struct mlx5_eswitch*,struct mlx5_eswitch*,int) ;
 int FUNC_5 (struct mlx5_eswitch*) ;
 int FUNC_6 (struct mlx5_eswitch*) ;

__attribute__((used)) static int FUNC_7(int VAR_1,
       void *VAR_2,
       void *VAR_3)
{
 struct mlx5_eswitch *VAR_4 = VAR_2;
 struct mlx5_devcom *VAR_5 = VAR_4->dev->priv.devcom;
 struct mlx5_eswitch *VAR_6 = VAR_3;
 int VAR_7;

 switch (VAR_1) {
 case 129:
  if (FUNC_6(VAR_4) !=
      FUNC_6(VAR_6))
   break;

  VAR_7 = FUNC_4(VAR_4, VAR_6, 1);
  if (VAR_7)
   goto err_out;
  VAR_7 = FUNC_3(VAR_4, VAR_6);
  if (VAR_7)
   goto err_peer;

  VAR_7 = FUNC_3(VAR_6, VAR_4);
  if (VAR_7)
   goto err_pair;

  FUNC_2(VAR_5, VAR_0, 1);
  break;

 case 128:
  if (!FUNC_1(VAR_5, VAR_0))
   break;

  FUNC_2(VAR_5, VAR_0, 0);
  FUNC_5(VAR_6);
  FUNC_5(VAR_4);
  FUNC_4(VAR_4, VAR_6, 0);
  break;
 }

 return 0;

err_pair:
 FUNC_5(VAR_4);
err_peer:
 FUNC_4(VAR_4, VAR_6, 0);
err_out:
 FUNC_0(VAR_4->dev, "esw offloads devcom event failure, event %u err %d",
        VAR_1, VAR_7);
 return VAR_7;
}
