
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int params; } ;
struct mlx5e_priv {TYPE_1__ channels; int state; int mdev; } ;
struct mlx5e_channels {int params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,struct mlx5e_priv*,char*,char*) ;
 int FUNC_4 (struct mlx5e_priv*,struct mlx5e_channels*,int *) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct mlx5e_priv *VAR_5, bool VAR_6)
{
 bool VAR_7 = FUNC_0(&VAR_5->channels.params, VAR_2);
 struct mlx5e_channels VAR_8 = {};
 int VAR_9 = 0;

 if (!FUNC_2(VAR_5->mdev, VAR_4))
  return VAR_6 ? -VAR_1 : 0;

 if (VAR_7 == VAR_6)
  return 0;

 VAR_8.params = VAR_5->channels.params;
 FUNC_1(&VAR_8.params, VAR_2, VAR_6);

 if (!FUNC_5(VAR_3, &VAR_5->state)) {
  VAR_5->channels.params = VAR_8.params;
  return 0;
 }

 VAR_9 = FUNC_4(VAR_5, &VAR_8, ((void*)0));
 if (VAR_9)
  return VAR_9;

 FUNC_3(VAR_0, VAR_5, "MLX5E: RxCqeCmprss was turned %s\n",
    FUNC_0(&VAR_5->channels.params,
      VAR_2) ? "ON" : "OFF");

 return 0;
}
