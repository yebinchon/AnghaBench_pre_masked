
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ min_rate; scalar_t__ max_rate; } ;
struct TYPE_3__ {int bw_share; } ;
struct mlx5_vport {TYPE_2__ info; TYPE_1__ qos; } ;
struct mlx5_eswitch {int state_lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_eswitch*) ;
 scalar_t__ FUNC_1 (struct mlx5_vport*) ;
 void* FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct mlx5_vport*) ;
 scalar_t__ FUNC_4 (struct mlx5_eswitch*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct mlx5_eswitch*,struct mlx5_vport*,scalar_t__,int ) ;
 int VAR_5 ;
 struct mlx5_vport* FUNC_6 (struct mlx5_eswitch*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mlx5_eswitch*,scalar_t__) ;

int FUNC_10(struct mlx5_eswitch *VAR_6, u16 VAR_7,
    u32 VAR_8, u32 VAR_9)
{
 struct mlx5_vport *VAR_10 = FUNC_6(VAR_6, VAR_7);
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 bool VAR_14;
 bool VAR_15;
 int VAR_16 = 0;

 if (!FUNC_0(VAR_6))
  return -VAR_1;
 if (FUNC_1(VAR_10))
  return FUNC_3(VAR_10);

 VAR_11 = FUNC_2(VAR_6->dev, VAR_5);
 VAR_14 = FUNC_2(VAR_6->dev, VAR_3) &&
    VAR_11 >= VAR_2;
 VAR_15 = FUNC_2(VAR_6->dev, VAR_4);

 if ((VAR_9 && !VAR_14) || (VAR_8 && !VAR_15))
  return -VAR_0;

 FUNC_7(&VAR_6->state_lock);

 if (VAR_9 == VAR_10->info.min_rate)
  goto set_max_rate;

 VAR_12 = VAR_10->info.min_rate;
 VAR_10->info.min_rate = VAR_9;
 VAR_13 = FUNC_4(VAR_6);
 VAR_16 = FUNC_9(VAR_6, VAR_13);
 if (VAR_16) {
  VAR_10->info.min_rate = VAR_12;
  goto unlock;
 }

set_max_rate:
 if (VAR_8 == VAR_10->info.max_rate)
  goto unlock;

 VAR_16 = FUNC_5(VAR_6, VAR_10, VAR_8, VAR_10->qos.bw_share);
 if (!VAR_16)
  VAR_10->info.max_rate = VAR_8;

unlock:
 FUNC_8(&VAR_6->state_lock);
 return VAR_16;
}
