
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx5e_rep_priv {int dl_port; int vport_sqs_list; struct net_device* netdev; struct mlx5_eswitch_rep* rep; } ;
struct mlx5e_profile {int dummy; } ;
struct mlx5_eswitch_rep {scalar_t__ vport; TYPE_1__* rep_data; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {struct mlx5e_rep_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int *,struct net_device*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*,struct mlx5e_rep_priv*) ;
 int FUNC_4 (struct mlx5e_rep_priv*) ;
 struct mlx5e_rep_priv* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 struct net_device* FUNC_8 (struct mlx5_core_dev*,struct mlx5e_profile const*,int,struct mlx5e_rep_priv*) ;
 int FUNC_9 (struct mlx5_core_dev*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct mlx5_core_dev*) ;
 int FUNC_13 (struct mlx5e_rep_priv*) ;
 int FUNC_14 (struct mlx5e_rep_priv*) ;
 struct mlx5e_profile VAR_5 ;
 struct mlx5e_profile VAR_6 ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (char*,scalar_t__) ;
 int FUNC_17 (struct mlx5_core_dev*,struct mlx5e_rep_priv*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct mlx5_core_dev*,struct mlx5e_rep_priv*) ;

__attribute__((used)) static int
FUNC_20(struct mlx5_core_dev *VAR_7, struct mlx5_eswitch_rep *VAR_8)
{
 const struct mlx5e_profile *VAR_9;
 struct mlx5e_rep_priv *VAR_10;
 struct net_device *VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;


 VAR_10->rep = VAR_8;

 VAR_12 = FUNC_12(VAR_7);
 VAR_9 = (VAR_8->vport == VAR_3) ?
    &VAR_6 : &VAR_5;
 VAR_11 = FUNC_8(VAR_7, VAR_9, VAR_12, VAR_10);
 if (!VAR_11) {
  FUNC_16("Failed to create representor netdev for vport %d\n",
   VAR_8->vport);
  FUNC_4(VAR_10);
  return -VAR_0;
 }

 VAR_10->netdev = VAR_11;
 VAR_8->rep_data[VAR_4].priv = VAR_10;
 FUNC_0(&VAR_10->vport_sqs_list);

 if (VAR_8->vport == VAR_3) {
  VAR_13 = FUNC_7(VAR_7);
  if (VAR_13)
   goto err_destroy_netdev;
 }

 VAR_13 = FUNC_6(FUNC_15(VAR_11));
 if (VAR_13) {
  FUNC_16("Failed to attach representor netdev for vport %d\n",
   VAR_8->vport);
  goto err_destroy_mdev_resources;
 }

 VAR_13 = FUNC_14(VAR_10);
 if (VAR_13) {
  FUNC_16("Failed to initialized neighbours handling for vport %d\n",
   VAR_8->vport);
  goto err_detach_netdev;
 }

 VAR_13 = FUNC_17(VAR_7, VAR_10);
 if (VAR_13) {
  FUNC_2(VAR_7, "Failed to register devlink port %d\n",
    VAR_8->vport);
  goto err_neigh_cleanup;
 }

 VAR_13 = FUNC_18(VAR_11);
 if (VAR_13) {
  FUNC_16("Failed to register representor netdev for vport %d\n",
   VAR_8->vport);
  goto err_devlink_cleanup;
 }

 if (FUNC_3(VAR_7, VAR_10))
  FUNC_1(&VAR_10->dl_port, VAR_11);
 return 0;

err_devlink_cleanup:
 FUNC_19(VAR_7, VAR_10);

err_neigh_cleanup:
 FUNC_13(VAR_10);

err_detach_netdev:
 FUNC_11(FUNC_15(VAR_11));

err_destroy_mdev_resources:
 if (VAR_8->vport == VAR_3)
  FUNC_9(VAR_7);

err_destroy_netdev:
 FUNC_10(FUNC_15(VAR_11));
 FUNC_4(VAR_10);
 return VAR_13;
}
