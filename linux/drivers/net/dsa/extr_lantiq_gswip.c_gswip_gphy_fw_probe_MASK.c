
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gswip_priv {TYPE_1__* gphy_fw_name_cfg; struct device* dev; } ;
struct gswip_gphy_fw {int fw_addr_offset; int reset; int fw_name; int clk_gate; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
typedef int gphyname ;
struct TYPE_2__ {int ge_firmware_name; int fe_firmware_name; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct gswip_priv*,struct gswip_gphy_fw*) ;
 int FUNC_5 (struct device_node*,char*,int*) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_8(struct gswip_priv *VAR_2,
          struct gswip_gphy_fw *VAR_3,
          struct device_node *VAR_4, int VAR_5)
{
 struct device *VAR_6 = VAR_2->dev;
 u32 VAR_7;
 int VAR_8;
 char VAR_9[10];

 FUNC_7(VAR_9, sizeof(VAR_9), "gphy%d", VAR_5);

 VAR_3->clk_gate = FUNC_3(VAR_6, VAR_9);
 if (FUNC_0(VAR_3->clk_gate)) {
  FUNC_2(VAR_6, "Failed to lookup gate clock\n");
  return FUNC_1(VAR_3->clk_gate);
 }

 VAR_8 = FUNC_5(VAR_4, "reg", &VAR_3->fw_addr_offset);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_4, "lantiq,gphy-mode", &VAR_7);

 if (VAR_8)
  VAR_7 = 128;

 switch (VAR_7) {
 case 129:
  VAR_3->fw_name = VAR_2->gphy_fw_name_cfg->fe_firmware_name;
  break;
 case 128:
  VAR_3->fw_name = VAR_2->gphy_fw_name_cfg->ge_firmware_name;
  break;
 default:
  FUNC_2(VAR_6, "Unknown GPHY mode %d\n", VAR_7);
  return -VAR_0;
 }

 VAR_3->reset = FUNC_6(VAR_4);
 if (FUNC_0(VAR_3->reset)) {
  if (FUNC_1(VAR_3->reset) != -VAR_1)
   FUNC_2(VAR_6, "Failed to lookup gphy reset\n");
  return FUNC_1(VAR_3->reset);
 }

 return FUNC_4(VAR_2, VAR_3);
}
