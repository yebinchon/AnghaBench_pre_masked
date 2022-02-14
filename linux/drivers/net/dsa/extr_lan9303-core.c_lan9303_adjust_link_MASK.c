
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ speed; scalar_t__ duplex; } ;
struct lan9303 {int phy_addr_base; int regmap; } ;
struct dsa_switch {int dev; struct lan9303* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct dsa_switch*,int,int ) ;
 int FUNC_2 (struct dsa_switch*,int,int ,int) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct dsa_switch *VAR_9, int VAR_10,
    struct phy_device *VAR_11)
{
 struct lan9303 *VAR_12 = VAR_9->priv;
 int VAR_13, VAR_14;

 if (!FUNC_4(VAR_11))
  return;

 VAR_13 = FUNC_1(VAR_9, VAR_10, VAR_6);

 VAR_13 &= ~VAR_0;

 if (VAR_11->speed == VAR_8)
  VAR_13 |= VAR_2;
 else if (VAR_11->speed == VAR_7)
  VAR_13 &= ~VAR_2;
 else
  FUNC_0(VAR_9->dev, "unsupported speed: %d\n", VAR_11->speed);

 if (VAR_11->duplex == VAR_3)
  VAR_13 |= VAR_1;
 else
  VAR_13 &= ~VAR_1;

 VAR_14 = FUNC_2(VAR_9, VAR_10, VAR_6, VAR_13);

 if (VAR_10 == VAR_12->phy_addr_base) {

  FUNC_3(VAR_12->regmap, VAR_4, &VAR_13);

  VAR_13 &= ~VAR_5;
  VAR_14 = FUNC_5(VAR_12->regmap,
        VAR_4, VAR_13);
 }
}
