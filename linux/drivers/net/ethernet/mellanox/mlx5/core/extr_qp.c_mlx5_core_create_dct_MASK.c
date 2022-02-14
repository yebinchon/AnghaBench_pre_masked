
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_qp {void* uid; void* qpn; } ;
struct mlx5_core_dev {int dummy; } ;
struct mlx5_core_dct {int drained; struct mlx5_core_qp mqp; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5_core_dct*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct mlx5_core_dev*,struct mlx5_core_qp*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx5_core_dev*,int *,int,int *,int) ;
 int FUNC_6 (struct mlx5_core_dev*,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_7(struct mlx5_core_dev *VAR_7,
    struct mlx5_core_dct *VAR_8,
    u32 *VAR_9, int VAR_10,
    u32 *VAR_11, int VAR_12)
{
 struct mlx5_core_qp *VAR_13 = &VAR_8->mqp;
 int VAR_14;

 FUNC_4(&VAR_8->drained);
 FUNC_1(VAR_2, VAR_9, VAR_5, VAR_0);

 VAR_14 = FUNC_5(VAR_7, VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_14) {
  FUNC_6(VAR_7, "create DCT failed, ret %d\n", VAR_14);
  return VAR_14;
 }

 VAR_13->qpn = FUNC_0(VAR_3, VAR_11, VAR_4);
 VAR_13->uid = FUNC_0(VAR_2, VAR_9, VAR_6);
 VAR_14 = FUNC_3(VAR_7, VAR_13, VAR_1);
 if (VAR_14)
  goto err_cmd;

 return 0;
err_cmd:
 FUNC_2(VAR_7, VAR_8, 0);
 return VAR_14;
}
