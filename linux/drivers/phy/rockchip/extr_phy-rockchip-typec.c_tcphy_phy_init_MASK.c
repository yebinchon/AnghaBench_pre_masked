
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rockchip_usb3phy_port_cfg {int typec_conn_dir; } ;
struct rockchip_typec_phy {int clk_core; int clk_ref; int tcphy_rst; int uphy_rst; int pipe_rst; int dev; scalar_t__ base; scalar_t__ flip; struct rockchip_usb3phy_port_cfg* port_cfgs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct rockchip_typec_phy*,int *,scalar_t__) ;
 int VAR_10 ;
 int FUNC_4 (int ,scalar_t__,int,int,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rockchip_typec_phy*) ;
 int FUNC_8 (struct rockchip_typec_phy*) ;
 int FUNC_9 (struct rockchip_typec_phy*) ;
 int FUNC_10 (struct rockchip_typec_phy*) ;
 int FUNC_11 (struct rockchip_typec_phy*,int) ;
 int FUNC_12 (struct rockchip_typec_phy*,int) ;
 int FUNC_13 (struct rockchip_typec_phy*,int) ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct rockchip_typec_phy *VAR_11, u8 VAR_12)
{
 const struct rockchip_usb3phy_port_cfg *VAR_13 = VAR_11->port_cfgs;
 int VAR_14, VAR_15;
 u32 VAR_16;

 VAR_14 = FUNC_1(VAR_11->clk_core);
 if (VAR_14) {
  FUNC_2(VAR_11->dev, "Failed to prepare_enable core clock\n");
  return VAR_14;
 }

 VAR_14 = FUNC_1(VAR_11->clk_ref);
 if (VAR_14) {
  FUNC_2(VAR_11->dev, "Failed to prepare_enable ref clock\n");
  goto err_clk_core;
 }

 FUNC_6(VAR_11->tcphy_rst);

 FUNC_3(VAR_11, &VAR_13->typec_conn_dir, VAR_11->flip);
 FUNC_10(VAR_11);

 FUNC_7(VAR_11);

 if (VAR_12 == VAR_4) {
  FUNC_8(VAR_11);
  for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
   FUNC_11(VAR_11, VAR_15);

  FUNC_14(VAR_6, VAR_11->base + VAR_9);
 } else {
  FUNC_9(VAR_11);
  FUNC_8(VAR_11);
  if (VAR_11->flip) {
   FUNC_13(VAR_11, 3);
   FUNC_12(VAR_11, 2);
   FUNC_11(VAR_11, 0);
   FUNC_11(VAR_11, 1);
  } else {
   FUNC_13(VAR_11, 0);
   FUNC_12(VAR_11, 1);
   FUNC_11(VAR_11, 2);
   FUNC_11(VAR_11, 3);
  }

  FUNC_14(VAR_7, VAR_11->base + VAR_9);
 }

 FUNC_14(VAR_2, VAR_11->base + VAR_1);

 FUNC_6(VAR_11->uphy_rst);

 VAR_14 = FUNC_4(VAR_10, VAR_11->base + VAR_8,
     VAR_16, VAR_16 & VAR_0, 10,
     VAR_5);
 if (VAR_14 < 0) {
  FUNC_2(VAR_11->dev, "wait pma ready timeout\n");
  VAR_14 = -VAR_3;
  goto err_wait_pma;
 }

 FUNC_6(VAR_11->pipe_rst);

 return 0;

err_wait_pma:
 FUNC_5(VAR_11->uphy_rst);
 FUNC_5(VAR_11->tcphy_rst);
 FUNC_0(VAR_11->clk_ref);
err_clk_core:
 FUNC_0(VAR_11->clk_core);
 return VAR_14;
}
