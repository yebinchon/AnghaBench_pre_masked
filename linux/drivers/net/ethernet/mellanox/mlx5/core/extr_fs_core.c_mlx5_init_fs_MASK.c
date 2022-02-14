
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_steering {void* fgs_cache; void* ftes_cache; struct mlx5_core_dev* dev; } ;
struct mlx5_flow_group {int dummy; } ;
struct TYPE_2__ {struct mlx5_flow_steering* steering; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct fs_fte {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_4 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_5 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_6 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_7 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_8 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_9 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_10 (struct mlx5_core_dev*) ;
 int VAR_4 ;
 int FUNC_11 (struct mlx5_core_dev*) ;
 int FUNC_12 (struct mlx5_flow_steering*) ;
 int FUNC_13 (struct mlx5_flow_steering*) ;
 int FUNC_14 (struct mlx5_core_dev*) ;
 int FUNC_15 (struct mlx5_flow_steering*) ;
 int FUNC_16 (struct mlx5_flow_steering*) ;
 int FUNC_17 (struct mlx5_flow_steering*) ;
 int FUNC_18 (struct mlx5_flow_steering*) ;
 int VAR_5 ;
 void* FUNC_19 (char*,int,int ,int ,int *) ;
 struct mlx5_flow_steering* FUNC_20 (int,int ) ;
 int FUNC_21 (struct mlx5_core_dev*) ;
 int FUNC_22 (struct mlx5_core_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_23(struct mlx5_core_dev *VAR_9)
{
 struct mlx5_flow_steering *VAR_10;
 int VAR_11 = 0;

 VAR_11 = FUNC_22(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_20(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_10->dev = VAR_9;
 VAR_9->priv.steering = VAR_10;

 VAR_10->fgs_cache = FUNC_19("mlx5_fs_fgs",
      sizeof(struct mlx5_flow_group), 0,
      0, ((void*)0));
 VAR_10->ftes_cache = FUNC_19("mlx5_fs_ftes", sizeof(struct fs_fte), 0,
       0, ((void*)0));
 if (!VAR_10->ftes_cache || !VAR_10->fgs_cache) {
  VAR_11 = -VAR_0;
  goto err;
 }

 if ((((FUNC_8(VAR_9, VAR_7) == VAR_2) &&
       (FUNC_8(VAR_9, VAR_6))) ||
      ((FUNC_8(VAR_9, VAR_7) == VAR_3) &&
       FUNC_8(VAR_9, VAR_5))) &&
     FUNC_3(VAR_9, VAR_4)) {
  VAR_11 = FUNC_16(VAR_10);
  if (VAR_11)
   goto err;
 }

 if (FUNC_9(VAR_9)) {
  if (FUNC_1(VAR_9, VAR_4)) {
   VAR_11 = FUNC_13(VAR_10);
   if (VAR_11)
    goto err;
  }
  if (FUNC_0(VAR_9, VAR_4)) {
   VAR_11 = FUNC_11(VAR_9);
   if (VAR_11)
    goto err;
  }
  if (FUNC_2(VAR_9, VAR_4)) {
   VAR_11 = FUNC_14(VAR_9);
   if (VAR_11)
    goto err;
  }
 }

 if (FUNC_6(VAR_9, VAR_4)) {
  VAR_11 = FUNC_17(VAR_10);
  if (VAR_11)
   goto err;
 }

 if (FUNC_7(VAR_9, VAR_4)) {
  VAR_11 = FUNC_18(VAR_10);
  if (VAR_11)
   goto err;
 }

 if (FUNC_5(VAR_9, VAR_4) &&
     FUNC_5(VAR_9, VAR_8)) {
  VAR_11 = FUNC_15(VAR_10);
  if (VAR_11)
   goto err;
 }

 if (FUNC_10(VAR_9) || FUNC_4(VAR_9, VAR_4)) {
  VAR_11 = FUNC_12(VAR_10);
  if (VAR_11)
   goto err;
 }

 return 0;
err:
 FUNC_21(VAR_9);
 return VAR_11;
}
