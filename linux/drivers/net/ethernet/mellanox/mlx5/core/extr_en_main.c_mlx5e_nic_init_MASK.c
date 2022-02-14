
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct mlx5e_rss_params {int dummy; } ;
struct mlx5e_profile {int dummy; } ;
struct TYPE_2__ {int params; } ;
struct mlx5e_priv {int max_nch; TYPE_1__ channels; int xsk; struct mlx5e_rss_params rss_params; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mlx5_core_dev*,int *,struct mlx5e_rss_params*,int *,int ,int ) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 int FUNC_6 (struct net_device*,struct mlx5e_priv*,struct mlx5_core_dev*,struct mlx5e_profile const*,void*) ;
 int FUNC_7 (struct mlx5e_priv*) ;
 int FUNC_8 (struct mlx5e_priv*) ;
 struct mlx5e_priv* FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct mlx5_core_dev *VAR_0,
     struct net_device *VAR_1,
     const struct mlx5e_profile *VAR_2,
     void *VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_9(VAR_1);
 struct mlx5e_rss_params *VAR_5 = &VAR_4->rss_params;
 int VAR_6;

 VAR_6 = FUNC_6(VAR_1, VAR_4, VAR_0, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_0, &VAR_4->xsk, VAR_5, &VAR_4->channels.params,
          VAR_4->max_nch, VAR_1->mtu);

 FUNC_7(VAR_4);

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6)
  FUNC_0(VAR_0, "IPSec initialization failed, %d\n", VAR_6);
 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6)
  FUNC_0(VAR_0, "TLS initialization failed, %d\n", VAR_6);
 FUNC_1(VAR_1);
 FUNC_3(VAR_4);
 FUNC_4(VAR_4);

 return 0;
}
