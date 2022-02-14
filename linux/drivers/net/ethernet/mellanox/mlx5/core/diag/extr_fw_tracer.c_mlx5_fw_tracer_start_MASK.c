
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fw_tracer {struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_2 (struct mlx5_fw_tracer*) ;
 int FUNC_3 (struct mlx5_fw_tracer*) ;
 int FUNC_4 (struct mlx5_fw_tracer*) ;
 int FUNC_5 (struct mlx5_fw_tracer*,int,int) ;

__attribute__((used)) static int FUNC_6(struct mlx5_fw_tracer *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = VAR_0->dev;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_1, "FWTracer: Ownership was not granted %d\n", VAR_2);

  return 0;
 }

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_1, "FWTracer: Failed to set tracer configuration %d\n", VAR_2);
  goto release_ownership;
 }


 VAR_2 = FUNC_5(VAR_0, 1, 1);
 if (VAR_2) {
  FUNC_1(VAR_1, "FWTracer: Failed to enable tracer %d\n", VAR_2);
  goto release_ownership;
 }

 FUNC_0(VAR_1, "FWTracer: Ownership granted and active\n");
 return 0;

release_ownership:
 FUNC_3(VAR_0);
 return VAR_2;
}
