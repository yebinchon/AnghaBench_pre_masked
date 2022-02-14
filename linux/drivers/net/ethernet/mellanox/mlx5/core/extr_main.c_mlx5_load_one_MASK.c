
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int embedded_cpu; } ;
struct mlx5_core_dev {int intf_state_mutex; int state; int intf_state; TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 scalar_t__ FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*,int) ;
 int FUNC_6 (struct mlx5_core_dev*,int) ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 int FUNC_8 (struct mlx5_core_dev*) ;
 int FUNC_9 (struct mlx5_core_dev*) ;
 int FUNC_10 (struct mlx5_core_dev*) ;
 int FUNC_11 (struct mlx5_core_dev*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct mlx5_core_dev *VAR_3, bool VAR_4)
{
 int VAR_5 = 0;

 VAR_3->caps.embedded_cpu = FUNC_9(VAR_3);
 FUNC_12(&VAR_3->intf_state_mutex);
 if (FUNC_15(VAR_2, &VAR_3->intf_state)) {
  FUNC_3(VAR_3, "interface is up, NOP\n");
  goto out;
 }

 VAR_3->state = VAR_1;

 VAR_5 = FUNC_5(VAR_3, VAR_4);
 if (VAR_5)
  goto out;

 if (VAR_4) {
  VAR_5 = FUNC_7(VAR_3);
  if (VAR_5) {
   FUNC_2(VAR_3, "sw objs init failed\n");
   goto function_teardown;
  }
 }

 VAR_5 = FUNC_8(VAR_3);
 if (VAR_5)
  goto err_load;

 if (FUNC_4(VAR_3)) {
  FUNC_0(VAR_3);
 } else {
  VAR_5 = FUNC_10(VAR_3);
  if (VAR_5) {
   FUNC_2(VAR_3, "register device failed %d\n", VAR_5);
   goto err_reg_dev;
  }
 }

 FUNC_14(VAR_2, &VAR_3->intf_state);
out:
 FUNC_13(&VAR_3->intf_state_mutex);

 return VAR_5;

err_reg_dev:
 FUNC_11(VAR_3);
err_load:
 if (VAR_4)
  FUNC_1(VAR_3);
function_teardown:
 FUNC_6(VAR_3, VAR_4);
 VAR_3->state = VAR_0;
 FUNC_13(&VAR_3->intf_state_mutex);

 return VAR_5;
}
