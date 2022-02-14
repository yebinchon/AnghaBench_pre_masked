
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx5e_txqsq {scalar_t__ rate_limit; int sqn; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5e_modify_sq_param {int rl_update; int rl_index; void* next_state; void* curr_state; int member_0; } ;
struct mlx5_rate_limit {scalar_t__ rate; int member_0; } ;
struct mlx5_core_dev {int dummy; } ;


 void* VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int *,struct mlx5_rate_limit*) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_rate_limit*) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,struct mlx5e_modify_sq_param*) ;
 int FUNC_3 (struct net_device*,char*,scalar_t__,int) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
    struct mlx5e_txqsq *VAR_2, u32 VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_4(VAR_1);
 struct mlx5_core_dev *VAR_5 = VAR_4->mdev;
 struct mlx5e_modify_sq_param VAR_6 = {0};
 struct mlx5_rate_limit VAR_7 = {0};
 u16 VAR_8 = 0;
 int VAR_9;

 if (VAR_3 == VAR_2->rate_limit)

  return 0;

 if (VAR_2->rate_limit) {
  VAR_7.rate = VAR_2->rate_limit;

  FUNC_1(VAR_5, &VAR_7);
 }

 VAR_2->rate_limit = 0;

 if (VAR_3) {
  VAR_7.rate = VAR_3;
  VAR_9 = FUNC_0(VAR_5, &VAR_8, &VAR_7);
  if (VAR_9) {
   FUNC_3(VAR_1, "Failed configuring rate %u: %d\n",
       VAR_3, VAR_9);
   return VAR_9;
  }
 }

 VAR_6.curr_state = VAR_0;
 VAR_6.next_state = VAR_0;
 VAR_6.rl_index = VAR_8;
 VAR_6.rl_update = 1;
 VAR_9 = FUNC_2(VAR_5, VAR_2->sqn, &VAR_6);
 if (VAR_9) {
  FUNC_3(VAR_1, "Failed configuring rate %u: %d\n",
      VAR_3, VAR_9);

  if (VAR_3)
   FUNC_1(VAR_5, &VAR_7);
  return VAR_9;
 }

 VAR_2->rate_limit = VAR_3;
 return 0;
}
