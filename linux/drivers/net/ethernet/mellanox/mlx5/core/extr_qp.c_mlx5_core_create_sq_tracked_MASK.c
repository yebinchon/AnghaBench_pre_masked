
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_qp {int uid; int qpn; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_core_qp*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct mlx5_core_dev*,int ,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int *,int,int *) ;
 int VAR_2 ;

int FUNC_4(struct mlx5_core_dev *VAR_3, u32 *VAR_4, int VAR_5,
    struct mlx5_core_qp *VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_6->uid = FUNC_0(VAR_1, VAR_4, VAR_2);
 VAR_6->qpn = VAR_8;
 VAR_7 = FUNC_1(VAR_3, VAR_6, VAR_0);
 if (VAR_7)
  goto err_destroy_sq;

 return 0;

err_destroy_sq:
 FUNC_2(VAR_3, VAR_6->qpn, VAR_6->uid);

 return VAR_7;
}
