
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_pcie {int link_gen; int * phys; int pipe_rst; int mgmt_rst; int core_rst; int mgmt_sticky_rst; scalar_t__ is_rc; int lanes; int pclk_rst; int aclk_rst; int pm_rst; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct rockchip_pcie*,int,int ) ;
 int FUNC_9 (int) ;

int FUNC_10(struct rockchip_pcie *VAR_10)
{
 struct device *VAR_11 = VAR_10->dev;
 int VAR_12, VAR_13;
 u32 VAR_14;

 VAR_12 = FUNC_6(VAR_10->aclk_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "assert aclk_rst err %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_6(VAR_10->pclk_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "assert pclk_rst err %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_6(VAR_10->pm_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "assert pm_rst err %d\n", VAR_12);
  return VAR_12;
 }

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_12 = FUNC_3(VAR_10->phys[VAR_13]);
  if (VAR_12) {
   FUNC_1(VAR_11, "init phy%d err %d\n", VAR_13, VAR_12);
   goto err_exit_phy;
  }
 }

 VAR_12 = FUNC_6(VAR_10->core_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "assert core_rst err %d\n", VAR_12);
  goto err_exit_phy;
 }

 VAR_12 = FUNC_6(VAR_10->mgmt_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "assert mgmt_rst err %d\n", VAR_12);
  goto err_exit_phy;
 }

 VAR_12 = FUNC_6(VAR_10->mgmt_sticky_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "assert mgmt_sticky_rst err %d\n", VAR_12);
  goto err_exit_phy;
 }

 VAR_12 = FUNC_6(VAR_10->pipe_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "assert pipe_rst err %d\n", VAR_12);
  goto err_exit_phy;
 }

 FUNC_9(10);

 VAR_12 = FUNC_7(VAR_10->pm_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "deassert pm_rst err %d\n", VAR_12);
  goto err_exit_phy;
 }

 VAR_12 = FUNC_7(VAR_10->aclk_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "deassert aclk_rst err %d\n", VAR_12);
  goto err_exit_phy;
 }

 VAR_12 = FUNC_7(VAR_10->pclk_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "deassert pclk_rst err %d\n", VAR_12);
  goto err_exit_phy;
 }

 if (VAR_10->link_gen == 2)
  FUNC_8(VAR_10, VAR_6,
        VAR_2);
 else
  FUNC_8(VAR_10, VAR_5,
        VAR_2);

 VAR_14 = VAR_7 | VAR_1 |
        FUNC_0(VAR_10->lanes);

 if (VAR_10->is_rc)
  VAR_14 |= VAR_4 | VAR_9;
 else
  VAR_14 |= VAR_3 | VAR_8;

 FUNC_8(VAR_10, VAR_14, VAR_2);

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_12 = FUNC_5(VAR_10->phys[VAR_13]);
  if (VAR_12) {
   FUNC_1(VAR_11, "power on phy%d err %d\n", VAR_13, VAR_12);
   goto err_power_off_phy;
  }
 }





 VAR_12 = FUNC_7(VAR_10->mgmt_sticky_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "deassert mgmt_sticky_rst err %d\n", VAR_12);
  goto err_power_off_phy;
 }

 VAR_12 = FUNC_7(VAR_10->core_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "deassert core_rst err %d\n", VAR_12);
  goto err_power_off_phy;
 }

 VAR_12 = FUNC_7(VAR_10->mgmt_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "deassert mgmt_rst err %d\n", VAR_12);
  goto err_power_off_phy;
 }

 VAR_12 = FUNC_7(VAR_10->pipe_rst);
 if (VAR_12) {
  FUNC_1(VAR_11, "deassert pipe_rst err %d\n", VAR_12);
  goto err_power_off_phy;
 }

 return 0;
err_power_off_phy:
 while (VAR_13--)
  FUNC_4(VAR_10->phys[VAR_13]);
 VAR_13 = VAR_0;
err_exit_phy:
 while (VAR_13--)
  FUNC_2(VAR_10->phys[VAR_13]);
 return VAR_12;
}
