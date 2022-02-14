
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int params; } ;
struct mlx5e_priv {TYPE_1__ channels; } ;
struct mlx5e_channels {int params; } ;


 int FUNC_0 (struct mlx5e_priv*,struct mlx5e_channels*,int *) ;

int FUNC_1(struct mlx5e_priv *VAR_0)
{
 struct mlx5e_channels VAR_1 = {};

 VAR_1.params = VAR_0->channels.params;
 return FUNC_0(VAR_0, &VAR_1, ((void*)0));
}
