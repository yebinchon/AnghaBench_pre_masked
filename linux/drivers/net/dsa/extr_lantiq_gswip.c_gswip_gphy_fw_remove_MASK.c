
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gswip_priv {int dev; int rcu_regmap; } ;
struct gswip_gphy_fw {int reset; int clk_gate; int fw_addr_offset; int fw_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gswip_priv *VAR_0,
     struct gswip_gphy_fw *VAR_1)
{
 int VAR_2;


 if (!VAR_1->fw_name)
  return;

 VAR_2 = FUNC_2(VAR_0->rcu_regmap, VAR_1->fw_addr_offset, 0);
 if (VAR_2)
  FUNC_1(VAR_0->dev, "can not reset GPHY FW pointer");

 FUNC_0(VAR_1->clk_gate);

 FUNC_3(VAR_1->reset);
}
