
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pcie {struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_2(struct tegra_pcie *VAR_11, u32 VAR_12,
          u32 *VAR_13)
{
 struct device *VAR_14 = VAR_11->dev;
 struct device_node *VAR_15 = VAR_14->of_node;

 if (FUNC_1(VAR_15, "nvidia,tegra186-pcie")) {
  switch (VAR_12) {
  case 0x010004:
   FUNC_0(VAR_14, "4x1, 1x1 configuration\n");
   *VAR_13 = VAR_3;
   return 0;

  case 0x010102:
   FUNC_0(VAR_14, "2x1, 1X1, 1x1 configuration\n");
   *VAR_13 = VAR_1;
   return 0;

  case 0x010101:
   FUNC_0(VAR_14, "1x1, 1x1, 1x1 configuration\n");
   *VAR_13 = VAR_0;
   return 0;

  default:
   FUNC_0(VAR_14, "wrong configuration updated in DT, "
     "switching to default 2x1, 1x1, 1x1 "
     "configuration\n");
   *VAR_13 = VAR_1;
   return 0;
  }
 } else if (FUNC_1(VAR_15, "nvidia,tegra124-pcie") ||
     FUNC_1(VAR_15, "nvidia,tegra210-pcie")) {
  switch (VAR_12) {
  case 0x0000104:
   FUNC_0(VAR_14, "4x1, 1x1 configuration\n");
   *VAR_13 = VAR_9;
   return 0;

  case 0x0000102:
   FUNC_0(VAR_14, "2x1, 1x1 configuration\n");
   *VAR_13 = VAR_8;
   return 0;
  }
 } else if (FUNC_1(VAR_15, "nvidia,tegra30-pcie")) {
  switch (VAR_12) {
  case 0x00000204:
   FUNC_0(VAR_14, "4x1, 2x1 configuration\n");
   *VAR_13 = VAR_5;
   return 0;

  case 0x00020202:
   FUNC_0(VAR_14, "2x3 configuration\n");
   *VAR_13 = VAR_2;
   return 0;

  case 0x00010104:
   FUNC_0(VAR_14, "4x1, 1x2 configuration\n");
   *VAR_13 = VAR_4;
   return 0;
  }
 } else if (FUNC_1(VAR_15, "nvidia,tegra20-pcie")) {
  switch (VAR_12) {
  case 0x00000004:
   FUNC_0(VAR_14, "single-mode configuration\n");
   *VAR_13 = VAR_7;
   return 0;

  case 0x00000202:
   FUNC_0(VAR_14, "dual-mode configuration\n");
   *VAR_13 = VAR_6;
   return 0;
  }
 }

 return -VAR_10;
}
