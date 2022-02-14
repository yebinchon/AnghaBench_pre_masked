
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int tc_indr_block_priv_list; } ;
struct mlx5e_rep_priv {TYPE_1__ uplink_priv; } ;
struct mlx5e_rep_indr_block_priv {int list; struct mlx5e_rep_priv* rpriv; struct net_device* netdev; } ;
struct flow_block_offload {scalar_t__ binder_type; int unlocked_driver_cb; int command; int block; int * driver_block_list; } ;
struct flow_block_cb {int driver_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ VAR_4 ;

 int VAR_5 ;
 int FUNC_0 (struct flow_block_cb*) ;
 int FUNC_1 (struct flow_block_cb*) ;
 int FUNC_2 (struct flow_block_cb*,struct flow_block_offload*) ;
 struct flow_block_cb* FUNC_3 (int ,struct mlx5e_rep_indr_block_priv*,struct mlx5e_rep_indr_block_priv*,int ) ;
 struct flow_block_cb* FUNC_4 (int ,int ,struct mlx5e_rep_indr_block_priv*) ;
 int FUNC_5 (struct flow_block_cb*,struct flow_block_offload*) ;
 int FUNC_6 (struct mlx5e_rep_indr_block_priv*) ;
 struct mlx5e_rep_indr_block_priv* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 struct mlx5e_rep_indr_block_priv* FUNC_11 (struct mlx5e_rep_priv*,struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_12(struct net_device *VAR_9,
         struct mlx5e_rep_priv *VAR_10,
         struct flow_block_offload *VAR_11)
{
 struct mlx5e_rep_indr_block_priv *VAR_12;
 struct flow_block_cb *VAR_13;

 if (VAR_11->binder_type != VAR_4)
  return -VAR_3;

 VAR_11->unlocked_driver_cb = 1;
 VAR_11->driver_block_list = &VAR_6;

 switch (VAR_11->command) {
 case 129:
  VAR_12 = FUNC_11(VAR_10, VAR_9);
  if (VAR_12)
   return -VAR_0;

  VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_5);
  if (!VAR_12)
   return -VAR_2;

  VAR_12->netdev = VAR_9;
  VAR_12->rpriv = VAR_10;
  FUNC_8(&VAR_12->list,
    &VAR_10->uplink_priv.tc_indr_block_priv_list);

  VAR_13 = FUNC_3(VAR_7,
            VAR_12, VAR_12,
            VAR_8);
  if (FUNC_0(VAR_13)) {
   FUNC_10(&VAR_12->list);
   FUNC_6(VAR_12);
   return FUNC_1(VAR_13);
  }
  FUNC_2(VAR_13, VAR_11);
  FUNC_9(&VAR_13->driver_list, &VAR_6);

  return 0;
 case 128:
  VAR_12 = FUNC_11(VAR_10, VAR_9);
  if (!VAR_12)
   return -VAR_1;

  VAR_13 = FUNC_4(VAR_11->block,
      VAR_7,
      VAR_12);
  if (!VAR_13)
   return -VAR_1;

  FUNC_5(VAR_13, VAR_11);
  FUNC_10(&VAR_13->driver_list);
  return 0;
 default:
  return -VAR_3;
 }
 return 0;
}
