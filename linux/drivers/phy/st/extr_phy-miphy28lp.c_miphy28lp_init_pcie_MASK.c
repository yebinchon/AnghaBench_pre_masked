
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct miphy28lp_phy {scalar_t__ pipebase; int * syscfg_reg; int base; struct miphy28lp_dev* phydev; } ;
struct miphy28lp_dev {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct miphy28lp_phy*) ;
 int FUNC_3 (struct miphy28lp_phy*,int ) ;
 int FUNC_4 (struct miphy28lp_phy*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct miphy28lp_phy *VAR_8)
{
 struct miphy28lp_dev *VAR_9 = VAR_8->phydev;
 int VAR_10;

 if ((!VAR_8->syscfg_reg[VAR_7]) ||
   (!VAR_8->syscfg_reg[VAR_5])
  || (!VAR_8->base) || (!VAR_8->pipebase))
  return -VAR_0;

 FUNC_1(VAR_9->dev, "pcie-up mode, addr 0x%p\n", VAR_8->base);


 FUNC_5(VAR_9->regmap,
      VAR_8->syscfg_reg[VAR_7],
      VAR_3, VAR_4);

 FUNC_5(VAR_9->regmap, VAR_8->syscfg_reg[VAR_5],
      VAR_2, VAR_6);


 VAR_10 = FUNC_3(VAR_8, VAR_1);

 if (VAR_10) {
  FUNC_0(VAR_9->dev, "PCIe phy setup failed\n");
  return VAR_10;
 }


 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10)
  return VAR_10;


 FUNC_6(0x68, VAR_8->pipebase + 0x104);
 FUNC_6(0x61, VAR_8->pipebase + 0x105);
 FUNC_6(0x68, VAR_8->pipebase + 0x108);
 FUNC_6(0x61, VAR_8->pipebase + 0x109);
 FUNC_6(0x68, VAR_8->pipebase + 0x10c);
 FUNC_6(0x60, VAR_8->pipebase + 0x10d);


 return FUNC_4(VAR_8);
}
