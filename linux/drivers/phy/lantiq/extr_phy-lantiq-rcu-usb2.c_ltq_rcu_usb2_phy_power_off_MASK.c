
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct ltq_rcu_usb2_priv {int phy_gate_clk; int phy_reset; } ;


 int FUNC_0 (int ) ;
 struct ltq_rcu_usb2_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct ltq_rcu_usb2_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->phy_reset);

 FUNC_0(VAR_1->phy_gate_clk);

 return 0;
}
