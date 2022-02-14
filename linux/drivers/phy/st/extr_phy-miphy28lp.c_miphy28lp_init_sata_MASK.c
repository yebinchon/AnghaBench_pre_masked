
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct miphy28lp_phy {int sata_gen; int * syscfg_reg; int base; struct miphy28lp_dev* phydev; } ;
struct miphy28lp_dev {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct miphy28lp_phy*) ;
 int FUNC_3 (struct miphy28lp_phy*,int ) ;
 int FUNC_4 (struct miphy28lp_phy*) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct miphy28lp_phy *VAR_10)
{
 struct miphy28lp_dev *VAR_11 = VAR_10->phydev;
 int VAR_12, VAR_13 = VAR_5;

 if ((!VAR_10->syscfg_reg[VAR_9]) ||
   (!VAR_10->syscfg_reg[VAR_8]) ||
   (!VAR_10->base))
  return -VAR_0;

 FUNC_1(VAR_11->dev, "sata-up mode, addr 0x%p\n", VAR_10->base);


 VAR_13 |= ((VAR_10->sata_gen - VAR_6) << VAR_7);

 FUNC_5(VAR_11->regmap,
      VAR_10->syscfg_reg[VAR_9],
      VAR_3, VAR_13);

 FUNC_5(VAR_11->regmap, VAR_10->syscfg_reg[VAR_8],
      VAR_2, VAR_4);


 VAR_12 = FUNC_3(VAR_10, VAR_1);

 if (VAR_12) {
  FUNC_0(VAR_11->dev, "SATA phy setup failed\n");
  return VAR_12;
 }


 FUNC_2(VAR_10);

 return FUNC_4(VAR_10);
}
