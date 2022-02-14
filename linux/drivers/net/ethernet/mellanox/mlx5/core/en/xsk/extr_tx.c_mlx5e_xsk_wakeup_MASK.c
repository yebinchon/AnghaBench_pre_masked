
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct net_device {int dummy; } ;
struct mlx5e_params {int dummy; } ;
struct TYPE_3__ {struct mlx5e_channel** c; struct mlx5e_params params; } ;
struct mlx5e_priv {TYPE_1__ channels; } ;
struct TYPE_4__ {int state; } ;
struct mlx5e_channel {int xskicosq_lock; TYPE_2__ xskicosq; int napi; int * state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlx5e_params*,int ,int ,size_t*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int FUNC_3 (int *) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct net_device *VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct mlx5e_priv *VAR_9 = FUNC_4(VAR_6);
 struct mlx5e_params *VAR_10 = &VAR_9->channels.params;
 struct mlx5e_channel *VAR_11;
 u16 VAR_12;

 if (FUNC_8(!FUNC_2(VAR_9)))
  return -VAR_1;

 if (FUNC_8(!FUNC_0(VAR_10, VAR_7, VAR_4, &VAR_12)))
  return -VAR_0;

 VAR_11 = VAR_9->channels.c[VAR_12];

 if (FUNC_8(!FUNC_7(VAR_3, VAR_11->state)))
  return -VAR_2;

 if (!FUNC_3(&VAR_11->napi)) {




  if (FUNC_8(!FUNC_7(VAR_5, &VAR_11->xskicosq.state)))
   return 0;

  FUNC_5(&VAR_11->xskicosq_lock);
  FUNC_1(&VAR_11->xskicosq);
  FUNC_6(&VAR_11->xskicosq_lock);
 }

 return 0;
}
