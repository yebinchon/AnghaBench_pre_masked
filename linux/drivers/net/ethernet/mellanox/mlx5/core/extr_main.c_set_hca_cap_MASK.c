
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, "handle_hca_cap failed\n");
  goto out;
 }

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, "handle_hca_cap_atomic failed\n");
  goto out;
 }

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, "handle_hca_cap_odp failed\n");
  goto out;
 }

out:
 return VAR_1;
}
