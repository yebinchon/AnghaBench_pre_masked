
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uar; } ;
struct mlx5_core_dev {TYPE_1__ priv; int tracer; int hv_vhca; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_8 (struct mlx5_core_dev*) ;
 int FUNC_9 (struct mlx5_core_dev*) ;
 int FUNC_10 (struct mlx5_core_dev*) ;
 int FUNC_11 (struct mlx5_core_dev*) ;
 int FUNC_12 (struct mlx5_core_dev*) ;
 int FUNC_13 (struct mlx5_core_dev*) ;
 int FUNC_14 (struct mlx5_core_dev*) ;
 int FUNC_15 (struct mlx5_core_dev*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct mlx5_core_dev*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct mlx5_core_dev*) ;
 int FUNC_22 (struct mlx5_core_dev*) ;
 int FUNC_23 (struct mlx5_core_dev*) ;
 int FUNC_24 (struct mlx5_core_dev*) ;
 int FUNC_25 (struct mlx5_core_dev*) ;
 int FUNC_26 (struct mlx5_core_dev*,int ) ;
 int FUNC_27 (struct mlx5_core_dev*) ;
 int FUNC_28 (struct mlx5_core_dev*) ;

__attribute__((used)) static int FUNC_29(struct mlx5_core_dev *VAR_0)
{
 int VAR_1;

 VAR_0->priv.uar = FUNC_18(VAR_0);
 if (FUNC_0(VAR_0->priv.uar)) {
  FUNC_7(VAR_0, "Failed allocating uar, aborting\n");
  VAR_1 = FUNC_1(VAR_0->priv.uar);
  return VAR_1;
 }

 FUNC_12(VAR_0);
 FUNC_24(VAR_0);

 VAR_1 = FUNC_22(VAR_0);
 if (VAR_1) {
  FUNC_7(VAR_0, "Failed to alloc IRQs\n");
  goto err_irq_table;
 }

 VAR_1 = FUNC_10(VAR_0);
 if (VAR_1) {
  FUNC_7(VAR_0, "Failed to create EQs\n");
  goto err_eq_table;
 }

 VAR_1 = FUNC_17(VAR_0->tracer);
 if (VAR_1) {
  FUNC_7(VAR_0, "Failed to init FW tracer\n");
  goto err_fw_tracer;
 }

 FUNC_20(VAR_0->hv_vhca);

 VAR_1 = FUNC_14(VAR_0);
 if (VAR_1) {
  FUNC_7(VAR_0, "fpga device start failed %d\n", VAR_1);
  goto err_fpga_start;
 }

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_7(VAR_0, "IPSec device start failed %d\n", VAR_1);
  goto err_ipsec_start;
 }

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1) {
  FUNC_7(VAR_0, "TLS device start failed %d\n", VAR_1);
  goto err_tls_start;
 }

 VAR_1 = FUNC_21(VAR_0);
 if (VAR_1) {
  FUNC_7(VAR_0, "Failed to init flow steering\n");
  goto err_fs;
 }

 VAR_1 = FUNC_8(VAR_0);
 if (VAR_1) {
  FUNC_7(VAR_0, "Failed to set hca defaults\n");
  goto err_sriov;
 }

 VAR_1 = FUNC_27(VAR_0);
 if (VAR_1) {
  FUNC_7(VAR_0, "sriov init failed %d\n", VAR_1);
  goto err_sriov;
 }

 VAR_1 = FUNC_9(VAR_0);
 if (VAR_1) {
  FUNC_7(VAR_0, "Failed to init embedded CPU\n");
  goto err_ec;
 }

 return 0;

err_ec:
 FUNC_28(VAR_0);
err_sriov:
 FUNC_6(VAR_0);
err_fs:
 FUNC_4(VAR_0);
err_tls_start:
 FUNC_2(VAR_0);
err_ipsec_start:
 FUNC_15(VAR_0);
err_fpga_start:
 FUNC_19(VAR_0->hv_vhca);
 FUNC_16(VAR_0->tracer);
err_fw_tracer:
 FUNC_11(VAR_0);
err_eq_table:
 FUNC_23(VAR_0);
err_irq_table:
 FUNC_25(VAR_0);
 FUNC_13(VAR_0);
 FUNC_26(VAR_0, VAR_0->priv.uar);
 return VAR_1;
}
