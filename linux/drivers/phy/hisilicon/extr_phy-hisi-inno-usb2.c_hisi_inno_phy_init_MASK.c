
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct hisi_inno_phy_priv {int por_rst; int ref_clk; } ;
struct hisi_inno_phy_port {int utmi_rst; struct hisi_inno_phy_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hisi_inno_phy_priv*) ;
 struct hisi_inno_phy_port* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_3)
{
 struct hisi_inno_phy_port *VAR_4 = FUNC_2(VAR_3);
 struct hisi_inno_phy_priv *VAR_5 = VAR_4->priv;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5->ref_clk);
 if (VAR_6)
  return VAR_6;
 FUNC_4(VAR_1);

 FUNC_3(VAR_5->por_rst);
 FUNC_4(VAR_0);


 FUNC_1(VAR_5);

 FUNC_3(VAR_4->utmi_rst);
 FUNC_4(VAR_2);

 return 0;
}
