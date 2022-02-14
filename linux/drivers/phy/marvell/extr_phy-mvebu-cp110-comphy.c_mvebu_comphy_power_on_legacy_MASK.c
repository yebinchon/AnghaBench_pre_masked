
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct mvebu_comphy_priv {scalar_t__ base; int regmap; } ;
struct mvebu_comphy_lane {int submode; int id; int mode; int port; struct mvebu_comphy_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;




 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct phy*) ;
 int FUNC_5 (struct phy*) ;
 int FUNC_6 (struct phy*) ;
 struct mvebu_comphy_lane* FUNC_7 (struct phy*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int ,int*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct phy *VAR_4)
{
 struct mvebu_comphy_lane *VAR_5 = FUNC_7(VAR_4);
 struct mvebu_comphy_priv *VAR_6 = VAR_5->priv;
 int VAR_7, VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_3(VAR_5->id, VAR_5->port,
       VAR_5->mode, VAR_5->submode);
 if (VAR_8 < 0)
  return -VAR_0;

 FUNC_9(VAR_6->regmap, VAR_1, &VAR_9);
 VAR_9 &= ~(0xf << FUNC_0(VAR_5->id));
 FUNC_10(VAR_6->regmap, VAR_1, VAR_9);

 FUNC_9(VAR_6->regmap, VAR_2, &VAR_9);
 VAR_9 &= ~(0xf << FUNC_1(VAR_5->id));
 VAR_9 |= VAR_8 << FUNC_1(VAR_5->id);
 FUNC_10(VAR_6->regmap, VAR_2, VAR_9);

 switch (VAR_5->submode) {
 case 128:
 case 130:
  VAR_7 = FUNC_6(VAR_4);
  break;
 case 129:
  VAR_7 = FUNC_5(VAR_4);
  break;
 case 131:
  VAR_7 = FUNC_4(VAR_4);
  break;
 default:
  return -VAR_0;
 }


 VAR_9 = FUNC_8(VAR_6->base + FUNC_2(VAR_5->id));
 VAR_9 |= VAR_3;
 FUNC_11(VAR_9, VAR_6->base + FUNC_2(VAR_5->id));

 return VAR_7;
}
