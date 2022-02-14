
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct ltq_rcu_usb2_priv {int phy_gate_clk; int phy_reset; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 struct ltq_rcu_usb2_priv* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_0)
{
 struct ltq_rcu_usb2_priv *VAR_1 = FUNC_2(VAR_0);
 struct device *VAR_2 = VAR_1->dev;
 int VAR_3;

 FUNC_3(VAR_1->phy_reset);

 VAR_3 = FUNC_0(VAR_1->phy_gate_clk);
 if (VAR_3)
  FUNC_1(VAR_2, "failed to enable PHY gate\n");

 return VAR_3;
}
