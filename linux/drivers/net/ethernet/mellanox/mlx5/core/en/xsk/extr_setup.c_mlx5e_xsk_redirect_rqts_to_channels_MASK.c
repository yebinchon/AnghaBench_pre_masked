
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcnt; } ;
struct mlx5e_priv {TYPE_1__ xsk; } ;
struct mlx5e_channels {int num; struct mlx5e_channel** c; } ;
struct mlx5e_channel {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*,struct mlx5e_channel*) ;
 int FUNC_1 (struct mlx5e_priv*,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct mlx5e_priv *VAR_1, struct mlx5e_channels *VAR_2)
{
 int VAR_3, VAR_4;

 if (!VAR_1->xsk.refcnt)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->num; VAR_4++) {
  struct mlx5e_channel *VAR_5 = VAR_2->c[VAR_4];

  if (!FUNC_2(VAR_0, VAR_5->state))
   continue;

  VAR_3 = FUNC_0(VAR_1, VAR_5);
  if (FUNC_3(VAR_3))
   goto err_stop;
 }

 return 0;

err_stop:
 for (VAR_4--; VAR_4 >= 0; VAR_4--) {
  if (!FUNC_2(VAR_0, VAR_2->c[VAR_4]->state))
   continue;

  FUNC_1(VAR_1, VAR_4);
 }

 return VAR_3;
}
