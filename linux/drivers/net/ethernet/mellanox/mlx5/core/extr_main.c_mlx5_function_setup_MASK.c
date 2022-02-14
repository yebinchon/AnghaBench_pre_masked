
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,int ) ;
 int FUNC_7 (struct mlx5_core_dev*,int ) ;
 int FUNC_8 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_9 (struct mlx5_core_dev*,char*,int ,int ,int ) ;
 scalar_t__ FUNC_10 (struct mlx5_core_dev*) ;
 int FUNC_11 (struct mlx5_core_dev*) ;
 int FUNC_12 (struct mlx5_core_dev*) ;
 int FUNC_13 (struct mlx5_core_dev*) ;
 int FUNC_14 (struct mlx5_core_dev*,int) ;
 int FUNC_15 (struct mlx5_core_dev*) ;
 int FUNC_16 (struct mlx5_core_dev*) ;
 int FUNC_17 (struct mlx5_core_dev*,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct mlx5_core_dev*) ;
 int FUNC_20 (struct mlx5_core_dev*) ;
 int VAR_3 ;
 int FUNC_21 (struct mlx5_core_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_22(struct mlx5_core_dev *VAR_4, bool VAR_5)
{
 int VAR_6;

 FUNC_9(VAR_4, "firmware version: %d.%d.%d\n", FUNC_0(VAR_4),
         FUNC_1(VAR_4), FUNC_2(VAR_4));


 if (FUNC_10(VAR_4))
  FUNC_18(VAR_4->pdev);



 VAR_6 = FUNC_21(VAR_4, VAR_2, VAR_1);
 if (VAR_6) {
  FUNC_8(VAR_4, "Firmware over %d MS in pre-initializing state, aborting\n",
         VAR_2);
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6) {
  FUNC_8(VAR_4, "Failed initializing command interface, aborting\n");
  return VAR_6;
 }

 VAR_6 = FUNC_21(VAR_4, VAR_0, 0);
 if (VAR_6) {
  FUNC_8(VAR_4, "Firmware over %d MS in initializing state, aborting\n",
         VAR_0);
  goto err_cmd_cleanup;
 }

 VAR_6 = FUNC_7(VAR_4, 0);
 if (VAR_6) {
  FUNC_8(VAR_4, "enable hca failed\n");
  goto err_cmd_cleanup;
 }

 VAR_6 = FUNC_11(VAR_4);
 if (VAR_6) {
  FUNC_8(VAR_4, "failed to set issi\n");
  goto err_disable_hca;
 }

 VAR_6 = FUNC_14(VAR_4, 1);
 if (VAR_6) {
  FUNC_8(VAR_4, "failed to allocate boot pages\n");
  goto err_disable_hca;
 }

 VAR_6 = FUNC_20(VAR_4);
 if (VAR_6) {
  FUNC_8(VAR_4, "set_hca_ctrl failed\n");
  goto reclaim_boot_pages;
 }

 VAR_6 = FUNC_19(VAR_4);
 if (VAR_6) {
  FUNC_8(VAR_4, "set_hca_cap failed\n");
  goto reclaim_boot_pages;
 }

 VAR_6 = FUNC_14(VAR_4, 0);
 if (VAR_6) {
  FUNC_8(VAR_4, "failed to allocate init pages\n");
  goto reclaim_boot_pages;
 }

 VAR_6 = FUNC_5(VAR_4, VAR_3);
 if (VAR_6) {
  FUNC_8(VAR_4, "init hca failed\n");
  goto reclaim_boot_pages;
 }

 FUNC_15(VAR_4);

 FUNC_16(VAR_4);

 VAR_6 = FUNC_12(VAR_4);
 if (VAR_6) {
  FUNC_8(VAR_4, "query hca failed\n");
  goto stop_health;
 }

 return 0;

stop_health:
 FUNC_17(VAR_4, VAR_5);
reclaim_boot_pages:
 FUNC_13(VAR_4);
err_disable_hca:
 FUNC_6(VAR_4, 0);
err_cmd_cleanup:
 FUNC_3(VAR_4);

 return VAR_6;
}
