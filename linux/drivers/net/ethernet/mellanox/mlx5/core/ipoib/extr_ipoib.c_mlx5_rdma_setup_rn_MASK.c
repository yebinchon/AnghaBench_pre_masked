
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rdma_netdev {int set_id; int detach_mcast; int attach_mcast; int send; struct ib_device* hca; } ;
struct net_device {int needs_free_netdev; int priv_destructor; } ;
struct mlx5i_priv {scalar_t__ sub_interface; struct rdma_netdev rn; } ;
struct mlx5e_profile {int (* cleanup ) (struct mlx5e_priv*) ;int (* init ) (struct mlx5_core_dev*,struct net_device*,struct mlx5e_profile const*,struct mlx5i_priv*) ;} ;
struct mlx5e_priv {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*) ;
 struct mlx5e_profile* FUNC_1 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*) ;
 int VAR_0 ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5e_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mlx5i_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct mlx5_core_dev*,struct net_device*,struct mlx5e_profile const*,struct mlx5i_priv*) ;
 int FUNC_12 (struct mlx5e_priv*) ;

__attribute__((used)) static int FUNC_13(struct ib_device *VAR_5, u8 VAR_6,
         struct net_device *VAR_7, void *VAR_8)
{
 struct mlx5_core_dev *VAR_9 = (struct mlx5_core_dev *)VAR_8;
 const struct mlx5e_profile *VAR_10 = FUNC_1(VAR_9);
 struct mlx5i_priv *VAR_11;
 struct mlx5e_priv *VAR_12;
 struct rdma_netdev *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_9(VAR_7);
 VAR_12 = FUNC_6(VAR_7);

 VAR_11->sub_interface = FUNC_2(VAR_9);
 if (!VAR_11->sub_interface) {
  VAR_14 = FUNC_8(VAR_7);
  if (VAR_14) {
   FUNC_0(VAR_9, "allocate qpn_to_netdev ht failed\n");
   return VAR_14;
  }


  VAR_14 = FUNC_4(VAR_9);
  if (VAR_14)
   goto destroy_ht;
 }

 VAR_10->init(VAR_9, VAR_7, VAR_10, VAR_11);

 VAR_14 = FUNC_3(VAR_12);
 if (VAR_14)
  goto detach;
 FUNC_10(VAR_7);


 VAR_13 = &VAR_11->rn;
 VAR_13->hca = VAR_5;
 VAR_13->send = VAR_4;
 VAR_13->attach_mcast = VAR_1;
 VAR_13->detach_mcast = VAR_2;
 VAR_13->set_id = VAR_3;

 VAR_7->priv_destructor = VAR_0;
 VAR_7->needs_free_netdev = 1;

 return 0;

detach:
 VAR_10->cleanup(VAR_12);
 if (VAR_11->sub_interface)
  return VAR_14;
 FUNC_5(VAR_9);
destroy_ht:
 FUNC_7(VAR_7);
 return VAR_14;
}
