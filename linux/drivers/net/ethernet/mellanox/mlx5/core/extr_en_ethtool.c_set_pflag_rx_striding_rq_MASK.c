
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ lro_en; } ;
struct TYPE_5__ {TYPE_2__ params; } ;
struct mlx5e_priv {TYPE_1__ channels; int state; struct mlx5_core_dev* mdev; } ;
struct mlx5e_channels {TYPE_2__ params; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_channels*,int *) ;
 int FUNC_3 (struct mlx5_core_dev*,TYPE_2__*) ;
 int FUNC_4 (struct mlx5_core_dev*,TYPE_2__*) ;
 struct mlx5e_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4, bool VAR_5)
{
 struct mlx5e_priv *VAR_6 = FUNC_5(VAR_4);
 struct mlx5_core_dev *VAR_7 = VAR_6->mdev;
 struct mlx5e_channels VAR_8 = {};

 if (VAR_5) {
  if (!FUNC_1(VAR_7))
   return -VAR_1;
  if (!FUNC_4(VAR_7, &VAR_6->channels.params))
   return -VAR_0;
 } else if (VAR_6->channels.params.lro_en) {
  FUNC_6(VAR_4, "Can't set legacy RQ with LRO, disable LRO first\n");
  return -VAR_0;
 }

 VAR_8.params = VAR_6->channels.params;

 FUNC_0(&VAR_8.params, VAR_2, VAR_5);
 FUNC_3(VAR_7, &VAR_8.params);

 if (!FUNC_7(VAR_3, &VAR_6->state)) {
  VAR_6->channels.params = VAR_8.params;
  return 0;
 }

 return FUNC_2(VAR_6, &VAR_8, ((void*)0));
}
