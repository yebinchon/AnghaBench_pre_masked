
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_modify_sq_param {scalar_t__ curr_state; scalar_t__ next_state; scalar_t__ rl_index; scalar_t__ rl_update; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,void*,int ,scalar_t__) ;
 int FUNC_2 (void*,void*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (void*) ;
 int VAR_3 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,int ,void*,int) ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_7(struct mlx5_core_dev *VAR_9, u32 VAR_10,
      struct mlx5e_modify_sq_param *VAR_11)
{
 void *VAR_12;
 void *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_14 = FUNC_3(VAR_5);
 VAR_12 = FUNC_5(VAR_14, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = FUNC_0(VAR_5, VAR_12, VAR_3);

 FUNC_1(VAR_5, VAR_12, VAR_7, VAR_11->curr_state);
 FUNC_1(VAR_13, VAR_13, VAR_8, VAR_11->next_state);
 if (VAR_11->rl_update && VAR_11->next_state == VAR_2) {
  FUNC_2(VAR_5, VAR_12, VAR_4, 1);
  FUNC_1(VAR_13, VAR_13, VAR_6, VAR_11->rl_index);
 }

 VAR_15 = FUNC_6(VAR_9, VAR_10, VAR_12, VAR_14);

 FUNC_4(VAR_12);

 return VAR_15;
}
