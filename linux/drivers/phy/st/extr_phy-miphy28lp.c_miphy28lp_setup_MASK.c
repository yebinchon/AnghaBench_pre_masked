
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct miphy28lp_phy {int miphy_rst; int * syscfg_reg; scalar_t__ osc_force_ext; struct miphy28lp_dev* phydev; } ;
struct miphy28lp_dev {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct miphy28lp_phy*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct miphy28lp_phy *VAR_4, u32 VAR_5)
{
 int VAR_6;
 struct miphy28lp_dev *VAR_7 = VAR_4->phydev;

 if (!VAR_4->syscfg_reg[VAR_3])
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4->miphy_rst);
 if (VAR_6) {
  FUNC_0(VAR_7->dev, "unable to bring out of miphy reset\n");
  return VAR_6;
 }

 if (VAR_4->osc_force_ext)
  VAR_5 |= VAR_2;

 FUNC_2(VAR_7->regmap,
      VAR_4->syscfg_reg[VAR_3],
      VAR_1, VAR_5);

 VAR_6 = FUNC_4(VAR_4->miphy_rst);
 if (VAR_6) {
  FUNC_0(VAR_7->dev, "unable to bring out of miphy reset\n");
  return VAR_6;
 }

 return FUNC_1(VAR_4);
}
