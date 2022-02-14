
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx5e_modify_sq_param {void* next_state; void* curr_state; } ;
struct mlx5e_channel {struct net_device* netdev; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int msp ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct mlx5e_modify_sq_param*,int ,int) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,struct mlx5e_modify_sq_param*) ;
 int FUNC_2 (struct net_device*,char*,int ) ;

int FUNC_3(struct mlx5e_channel *VAR_3, u32 VAR_4)
{
 struct mlx5_core_dev *VAR_5 = VAR_3->mdev;
 struct net_device *VAR_6 = VAR_3->netdev;
 struct mlx5e_modify_sq_param VAR_7 = {};
 int VAR_8;

 VAR_7.curr_state = VAR_0;
 VAR_7.next_state = VAR_2;

 VAR_8 = FUNC_1(VAR_5, VAR_4, &VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_6, "Failed to move sq 0x%x to reset\n", VAR_4);
  return VAR_8;
 }

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.curr_state = VAR_2;
 VAR_7.next_state = VAR_1;

 VAR_8 = FUNC_1(VAR_5, VAR_4, &VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_6, "Failed to move sq 0x%x to ready\n", VAR_4);
  return VAR_8;
 }

 return 0;
}
