
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devcom; int eswitch; } ;
struct mlx5_core_dev {int dm; TYPE_1__ priv; int vxlan; int geneve; int hv_vhca; int tracer; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_5 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 int FUNC_8 (struct mlx5_core_dev*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct mlx5_core_dev*) ;
 int FUNC_11 (struct mlx5_core_dev*) ;
 int FUNC_12 (struct mlx5_core_dev*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct mlx5_core_dev*) ;
 int FUNC_15 (struct mlx5_core_dev*) ;
 int FUNC_16 (struct mlx5_core_dev*) ;
 int FUNC_17 (struct mlx5_core_dev*) ;
 int FUNC_18 (struct mlx5_core_dev*) ;
 int FUNC_19 (struct mlx5_core_dev*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct mlx5_core_dev*) ;
 int FUNC_22 (struct mlx5_core_dev*) ;
 int FUNC_23 (struct mlx5_core_dev*) ;
 int FUNC_24 (struct mlx5_core_dev*) ;
 int FUNC_25 (struct mlx5_core_dev*) ;
 int FUNC_26 (struct mlx5_core_dev*) ;
 int FUNC_27 (struct mlx5_core_dev*) ;
 int FUNC_28 (struct mlx5_core_dev*) ;
 int FUNC_29 (struct mlx5_core_dev*) ;
 int FUNC_30 (struct mlx5_core_dev*) ;
 int FUNC_31 (struct mlx5_core_dev*) ;
 int FUNC_32 (struct mlx5_core_dev*) ;
 int FUNC_33 (struct mlx5_core_dev*) ;
 int FUNC_34 (struct mlx5_core_dev*) ;
 int FUNC_35 (int ) ;

__attribute__((used)) static int FUNC_36(struct mlx5_core_dev *VAR_0)
{
 int VAR_1;

 VAR_0->priv.devcom = FUNC_8(VAR_0);
 if (FUNC_0(VAR_0->priv.devcom))
  FUNC_4(VAR_0, "failed to register with devcom (0x%p)\n",
         VAR_0->priv.devcom);

 VAR_1 = FUNC_31(VAR_0);
 if (VAR_1) {
  FUNC_4(VAR_0, "query board id failed\n");
  goto err_devcom;
 }

 VAR_1 = FUNC_28(VAR_0);
 if (VAR_1) {
  FUNC_4(VAR_0, "failed to initialize irq table\n");
  goto err_devcom;
 }

 VAR_1 = FUNC_12(VAR_0);
 if (VAR_1) {
  FUNC_4(VAR_0, "failed to initialize eq\n");
  goto err_irq_cleanup;
 }

 VAR_1 = FUNC_16(VAR_0);
 if (VAR_1) {
  FUNC_4(VAR_0, "failed to initialize events\n");
  goto err_eq_cleanup;
 }

 FUNC_7(VAR_0);

 FUNC_24(VAR_0);

 FUNC_23(VAR_0);

 FUNC_25(VAR_0);

 FUNC_22(VAR_0);

 VAR_0->vxlan = FUNC_34(VAR_0);
 VAR_0->geneve = FUNC_19(VAR_0);

 VAR_1 = FUNC_26(VAR_0);
 if (VAR_1) {
  FUNC_4(VAR_0, "Failed to init rate limiting\n");
  goto err_tables_cleanup;
 }

 VAR_1 = FUNC_30(VAR_0);
 if (VAR_1) {
  FUNC_4(VAR_0, "Failed to init l2 table %d\n", VAR_1);
  goto err_rl_cleanup;
 }

 VAR_1 = FUNC_33(VAR_0);
 if (VAR_1) {
  FUNC_4(VAR_0, "Failed to init sriov %d\n", VAR_1);
  goto err_mpfs_cleanup;
 }

 VAR_1 = FUNC_14(VAR_0);
 if (VAR_1) {
  FUNC_4(VAR_0, "Failed to init eswitch %d\n", VAR_1);
  goto err_sriov_cleanup;
 }

 VAR_1 = FUNC_17(VAR_0);
 if (VAR_1) {
  FUNC_4(VAR_0, "Failed to init fpga device %d\n", VAR_1);
  goto err_eswitch_cleanup;
 }

 VAR_0->dm = FUNC_10(VAR_0);
 if (FUNC_0(VAR_0->dm))
  FUNC_5(VAR_0, "Failed to init device memory%d\n", VAR_1);

 VAR_0->tracer = FUNC_18(VAR_0);
 VAR_0->hv_vhca = FUNC_21(VAR_0);

 return 0;

err_eswitch_cleanup:
 FUNC_13(VAR_0->priv.eswitch);
err_sriov_cleanup:
 FUNC_32(VAR_0);
err_mpfs_cleanup:
 FUNC_29(VAR_0);
err_rl_cleanup:
 FUNC_3(VAR_0);
err_tables_cleanup:
 FUNC_20(VAR_0->geneve);
 FUNC_35(VAR_0->vxlan);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_6(VAR_0);
 FUNC_15(VAR_0);
err_eq_cleanup:
 FUNC_11(VAR_0);
err_irq_cleanup:
 FUNC_27(VAR_0);
err_devcom:
 FUNC_9(VAR_0->priv.devcom);

 return VAR_1;
}
