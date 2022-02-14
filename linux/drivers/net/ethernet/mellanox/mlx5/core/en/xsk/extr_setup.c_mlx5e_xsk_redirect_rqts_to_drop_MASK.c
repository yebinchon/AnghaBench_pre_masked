
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refcnt; } ;
struct mlx5e_priv {TYPE_1__ xsk; } ;
struct mlx5e_channels {int num; TYPE_2__** c; } ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*,int) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct mlx5e_priv *VAR_1, struct mlx5e_channels *VAR_2)
{
 int VAR_3;

 if (!VAR_1->xsk.refcnt)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->num; VAR_3++) {
  if (!FUNC_1(VAR_0, VAR_2->c[VAR_3]->state))
   continue;

  FUNC_0(VAR_1, VAR_3);
 }
}
