
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_pcie_dw {int phy_count; int update_fc_fixup; void* enable_cdm_check; TYPE_1__* dev; void* supports_clkreq; int cid; int max_speed; int num_lanes; int aspm_l0s_enter_lat; int aspm_pwr_on_t; int aspm_cmrt; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*) ;
 void* FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (struct device_node*,char*,int,int *) ;

__attribute__((used)) static int FUNC_7(struct tegra_pcie_dw *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev->of_node;
 int VAR_2;

 VAR_2 = FUNC_5(VAR_1, "nvidia,aspm-cmrt-us", &VAR_0->aspm_cmrt);
 if (VAR_2 < 0) {
  FUNC_1(VAR_0->dev, "Failed to read ASPM T_cmrt: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_5(VAR_1, "nvidia,aspm-pwr-on-t-us",
       &VAR_0->aspm_pwr_on_t);
 if (VAR_2 < 0)
  FUNC_1(VAR_0->dev, "Failed to read ASPM Power On time: %d\n",
    VAR_2);

 VAR_2 = FUNC_5(VAR_1, "nvidia,aspm-l0s-entrance-latency-us",
       &VAR_0->aspm_l0s_enter_lat);
 if (VAR_2 < 0)
  FUNC_1(VAR_0->dev,
    "Failed to read ASPM L0s Entrance latency: %d\n", VAR_2);

 VAR_2 = FUNC_5(VAR_1, "num-lanes", &VAR_0->num_lanes);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "Failed to read num-lanes: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_0->max_speed = FUNC_2(VAR_1);

 VAR_2 = FUNC_6(VAR_1, "nvidia,bpmp", 1, &VAR_0->cid);
 if (VAR_2) {
  FUNC_0(VAR_0->dev, "Failed to read Controller-ID: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1, "phy-names");
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "Failed to find PHY entries: %d\n",
   VAR_2);
  return VAR_2;
 }
 VAR_0->phy_count = VAR_2;

 if (FUNC_4(VAR_1, "nvidia,update-fc-fixup"))
  VAR_0->update_fc_fixup = 1;

 VAR_0->supports_clkreq =
  FUNC_4(VAR_0->dev->of_node, "supports-clkreq");

 VAR_0->enable_cdm_check =
  FUNC_4(VAR_1, "snps,enable-cdm-check");

 return 0;
}
