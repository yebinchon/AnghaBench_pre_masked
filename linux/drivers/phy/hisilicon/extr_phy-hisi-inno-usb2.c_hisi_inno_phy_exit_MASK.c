
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct hisi_inno_phy_priv {int ref_clk; int por_rst; } ;
struct hisi_inno_phy_port {int utmi_rst; struct hisi_inno_phy_priv* priv; } ;


 int FUNC_0 (int ) ;
 struct hisi_inno_phy_port* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct hisi_inno_phy_port *VAR_1 = FUNC_1(VAR_0);
 struct hisi_inno_phy_priv *VAR_2 = VAR_1->priv;

 FUNC_2(VAR_1->utmi_rst);
 FUNC_2(VAR_2->por_rst);
 FUNC_0(VAR_2->ref_clk);

 return 0;
}
