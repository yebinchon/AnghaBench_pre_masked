
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int * clk; int set_mac_speed; int drv_version; int drv_name; } ;
struct rockchip_priv_data {int * refclk; int * regulator; int * macclk; TYPE_2__* soc_data; int * grf; TYPE_1__ emac; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {TYPE_2__* data; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int grf_speed_offset; int grf_mode_offset; scalar_t__ need_div_macclk; int grf_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,struct device*) ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct device*,char*,...) ;
 void* FUNC_9 (struct device*,char*) ;
 int * FUNC_10 (struct device*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (struct net_device*) ;
 struct rockchip_priv_data* FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ) ;
 struct of_device_id* FUNC_14 (int ,int ) ;
 int FUNC_15 (struct platform_device*,struct net_device*) ;
 int FUNC_16 (int *,int ,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int ,char*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct net_device *VAR_11;
 struct rockchip_priv_data *VAR_12;
 const struct of_device_id *VAR_13;
 u32 VAR_14;
 int VAR_15, VAR_16;

 if (!VAR_9->dev.of_node)
  return -VAR_2;

 VAR_11 = FUNC_3(sizeof(struct rockchip_priv_data));
 if (!VAR_11)
  return -VAR_3;
 FUNC_15(VAR_9, VAR_11);
 FUNC_2(VAR_11, VAR_10);

 VAR_12 = FUNC_12(VAR_11);
 VAR_12->emac.drv_name = VAR_0;
 VAR_12->emac.drv_version = VAR_1;
 VAR_12->emac.set_mac_speed = VAR_8;

 VAR_16 = FUNC_13(VAR_10->of_node);


 if (VAR_16 != VAR_6) {
  FUNC_8(VAR_10, "unsupported phy interface mode %d\n", VAR_16);
  VAR_15 = -VAR_4;
  goto out_netdev;
 }

 VAR_12->grf = FUNC_19(VAR_10->of_node,
          "rockchip,grf");
 if (FUNC_0(VAR_12->grf)) {
  FUNC_8(VAR_10, "failed to retrieve global register file (%ld)\n",
   FUNC_1(VAR_12->grf));
  VAR_15 = FUNC_1(VAR_12->grf);
  goto out_netdev;
 }

 VAR_13 = FUNC_14(VAR_7, VAR_10->of_node);
 VAR_12->soc_data = VAR_13->data;

 VAR_12->emac.clk = FUNC_9(VAR_10, "hclk");
 if (FUNC_0(VAR_12->emac.clk)) {
  FUNC_8(VAR_10, "failed to retrieve host clock (%ld)\n",
   FUNC_1(VAR_12->emac.clk));
  VAR_15 = FUNC_1(VAR_12->emac.clk);
  goto out_netdev;
 }

 VAR_12->refclk = FUNC_9(VAR_10, "macref");
 if (FUNC_0(VAR_12->refclk)) {
  FUNC_8(VAR_10, "failed to retrieve reference clock (%ld)\n",
   FUNC_1(VAR_12->refclk));
  VAR_15 = FUNC_1(VAR_12->refclk);
  goto out_netdev;
 }

 VAR_15 = FUNC_6(VAR_12->refclk);
 if (VAR_15) {
  FUNC_8(VAR_10, "failed to enable reference clock (%d)\n", VAR_15);
  goto out_netdev;
 }


 VAR_12->regulator = FUNC_10(VAR_10, "phy");
 if (FUNC_0(VAR_12->regulator)) {
  if (FUNC_1(VAR_12->regulator) == -VAR_5) {
   VAR_15 = -VAR_5;
   goto out_clk_disable;
  }
  FUNC_8(VAR_10, "no regulator found\n");
  VAR_12->regulator = ((void*)0);
 }

 if (VAR_12->regulator) {
  VAR_15 = FUNC_18(VAR_12->regulator);
  if (VAR_15) {
   FUNC_8(VAR_10, "failed to enable phy-supply (%d)\n", VAR_15);
   goto out_clk_disable;
  }
 }


 VAR_14 = (1 << (VAR_12->soc_data->grf_speed_offset + 16)) |
        (1 << VAR_12->soc_data->grf_speed_offset);

 VAR_14 |= (1 << (VAR_12->soc_data->grf_mode_offset + 16)) |
  (0 << VAR_12->soc_data->grf_mode_offset);

 VAR_15 = FUNC_16(VAR_12->grf, VAR_12->soc_data->grf_offset, VAR_14);
 if (VAR_15) {
  FUNC_8(VAR_10, "unable to apply initial settings to grf (%d)\n",
   VAR_15);
  goto out_regulator_disable;
 }


 VAR_15 = FUNC_7(VAR_12->refclk, 50000000);
 if (VAR_15) {
  FUNC_8(VAR_10,
   "failed to change reference clock rate (%d)\n", VAR_15);
  goto out_regulator_disable;
 }

 if (VAR_12->soc_data->need_div_macclk) {
  VAR_12->macclk = FUNC_9(VAR_10, "macclk");
  if (FUNC_0(VAR_12->macclk)) {
   FUNC_8(VAR_10, "failed to retrieve mac clock (%ld)\n",
    FUNC_1(VAR_12->macclk));
   VAR_15 = FUNC_1(VAR_12->macclk);
   goto out_regulator_disable;
  }

  VAR_15 = FUNC_6(VAR_12->macclk);
  if (VAR_15) {
   FUNC_8(VAR_10, "failed to enable mac clock (%d)\n", VAR_15);
   goto out_regulator_disable;
  }


  VAR_15 = FUNC_7(VAR_12->macclk, 25000000);
  if (VAR_15) {
   FUNC_8(VAR_10,
    "failed to change mac clock rate (%d)\n", VAR_15);
   goto out_clk_disable_macclk;
  }
 }

 VAR_15 = FUNC_4(VAR_11, VAR_16);
 if (VAR_15) {
  FUNC_8(VAR_10, "failed to probe arc emac (%d)\n", VAR_15);
  goto out_clk_disable_macclk;
 }

 return 0;

out_clk_disable_macclk:
 if (VAR_12->soc_data->need_div_macclk)
  FUNC_5(VAR_12->macclk);
out_regulator_disable:
 if (VAR_12->regulator)
  FUNC_17(VAR_12->regulator);
out_clk_disable:
 FUNC_5(VAR_12->refclk);
out_netdev:
 FUNC_11(VAR_11);
 return VAR_15;
}
