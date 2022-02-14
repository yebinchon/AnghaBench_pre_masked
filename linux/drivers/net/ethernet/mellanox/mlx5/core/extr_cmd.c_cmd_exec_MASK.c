
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct mlx5_core_dev {scalar_t__ state; int cmd; int pdev; } ;
struct mlx5_cmd_msg {int dummy; } ;
typedef int mlx5_cmd_cbk_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_cmd_msg*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int ,void*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct mlx5_cmd_msg*) ;
 struct mlx5_cmd_msg* FUNC_4 (struct mlx5_core_dev*,int,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct mlx5_core_dev*,struct mlx5_cmd_msg*) ;
 int FUNC_7 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mlx5_cmd_msg* FUNC_8 (struct mlx5_core_dev*,int ,int,scalar_t__) ;
 int FUNC_9 (struct mlx5_core_dev*,struct mlx5_cmd_msg*,struct mlx5_cmd_msg*,void*,int,int ,void*,int,scalar_t__*,scalar_t__,int) ;
 int FUNC_10 (void*,struct mlx5_cmd_msg*,int) ;
 int FUNC_11 (struct mlx5_cmd_msg*,void*,int,scalar_t__) ;
 int FUNC_12 (struct mlx5_core_dev*,char*,int,scalar_t__) ;
 int FUNC_13 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_14 (struct mlx5_core_dev*,struct mlx5_cmd_msg*) ;
 int FUNC_15 (struct mlx5_core_dev*,int ,scalar_t__*,scalar_t__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_18(struct mlx5_core_dev *VAR_7, void *VAR_8, int VAR_9, void *VAR_10,
      int VAR_11, mlx5_cmd_cbk_t VAR_12, void *VAR_13,
      bool VAR_14)
{
 struct mlx5_cmd_msg *VAR_15;
 struct mlx5_cmd_msg *VAR_16;
 int VAR_17;
 gfp_t VAR_18;
 int VAR_19;
 u8 VAR_20 = 0;
 u32 VAR_21;
 u8 VAR_22;

 if (FUNC_16(VAR_7->pdev) ||
     VAR_7->state == VAR_2) {
  u16 VAR_23 = FUNC_1(VAR_3, VAR_8, VAR_23);

  VAR_19 = FUNC_15(VAR_7, VAR_23, &VAR_21, &VAR_20);
  FUNC_2(VAR_4, VAR_10, VAR_20, VAR_20);
  FUNC_2(VAR_4, VAR_10, VAR_6, VAR_21);
  return VAR_19;
 }

 VAR_17 = FUNC_7(VAR_8);
 VAR_18 = VAR_12 ? VAR_0 : VAR_1;

 VAR_15 = FUNC_4(VAR_7, VAR_9, VAR_18);
 if (FUNC_0(VAR_15)) {
  VAR_19 = FUNC_3(VAR_15);
  return VAR_19;
 }

 VAR_22 = FUNC_5(&VAR_7->cmd);

 VAR_19 = FUNC_11(VAR_15, VAR_8, VAR_9, VAR_22);
 if (VAR_19) {
  FUNC_13(VAR_7, "err %d\n", VAR_19);
  goto out_in;
 }

 VAR_16 = FUNC_8(VAR_7, VAR_18, VAR_11, VAR_22);
 if (FUNC_0(VAR_16)) {
  VAR_19 = FUNC_3(VAR_16);
  goto out_in;
 }

 VAR_19 = FUNC_9(VAR_7, VAR_15, VAR_16, VAR_10, VAR_11, VAR_12, VAR_13,
         VAR_17, &VAR_20, VAR_22, VAR_14);
 if (VAR_19)
  goto out_out;

 FUNC_12(VAR_7, "err %d, status %d\n", VAR_19, VAR_20);
 if (VAR_20) {
  VAR_19 = FUNC_17(VAR_20);
  goto out_out;
 }

 if (!VAR_12)
  VAR_19 = FUNC_10(VAR_10, VAR_16, VAR_11);

out_out:
 if (!VAR_12)
  FUNC_14(VAR_7, VAR_16);

out_in:
 if (!VAR_12)
  FUNC_6(VAR_7, VAR_15);
 return VAR_19;
}
