
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_profile {int max_tc; int rq_groups; int (* init ) (struct mlx5_core_dev*,struct net_device*,struct mlx5e_profile const*,void*) ;} ;
struct mlx5e_priv {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 struct net_device* FUNC_0 (int,int,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_3 (struct mlx5_core_dev*,struct net_device*,struct mlx5e_profile const*,void*) ;

struct net_device *FUNC_4(struct mlx5_core_dev *VAR_0,
           const struct mlx5e_profile *VAR_1,
           int VAR_2,
           void *VAR_3)
{
 struct net_device *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(sizeof(struct mlx5e_priv),
        VAR_2 * VAR_1->max_tc,
        VAR_2 * VAR_1->rq_groups);
 if (!VAR_4) {
  FUNC_2(VAR_0, "alloc_etherdev_mqs() failed\n");
  return ((void*)0);
 }

 VAR_5 = VAR_1->init(VAR_0, VAR_4, VAR_1, VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_0, "failed to init mlx5e profile %d\n", VAR_5);
  goto err_free_netdev;
 }

 return VAR_4;

err_free_netdev:
 FUNC_1(VAR_4);

 return ((void*)0);
}
