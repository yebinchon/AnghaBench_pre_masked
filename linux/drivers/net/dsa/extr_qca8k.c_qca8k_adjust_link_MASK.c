
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qca8k_priv {int dev; } ;
struct phy_device {int speed; scalar_t__ duplex; } ;
struct dsa_switch {struct qca8k_priv* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ FUNC_2 (struct dsa_switch*,int) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct qca8k_priv*,int,int) ;
 int FUNC_5 (struct qca8k_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct dsa_switch *VAR_7, int VAR_8, struct phy_device *VAR_9)
{
 struct qca8k_priv *VAR_10 = VAR_7->priv;
 u32 VAR_11;


 if (!FUNC_3(VAR_9))
  return;


 switch (VAR_9->speed) {
 case 10:
  VAR_11 = VAR_3;
  break;
 case 100:
  VAR_11 = VAR_4;
  break;
 case 1000:
  VAR_11 = VAR_5;
  break;
 default:
  FUNC_1(VAR_10->dev, "port%d link speed %dMbps not supported.\n",
   VAR_8, VAR_9->speed);
  return;
 }


 if (VAR_9->duplex == VAR_0)
  VAR_11 |= VAR_1;


 if (FUNC_2(VAR_7, VAR_8))
  VAR_11 |= VAR_2 | VAR_6;


 FUNC_4(VAR_10, VAR_8, 0);
 FUNC_5(VAR_10, FUNC_0(VAR_8), VAR_11);
 FUNC_4(VAR_10, VAR_8, 1);
}
