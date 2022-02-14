
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan9303 {int dev; int reset_gpio; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct lan9303*) ;
 int FUNC_5 (struct lan9303*) ;
 int FUNC_6 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_7(struct lan9303 *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_6(VAR_3->regmap, VAR_2, &VAR_5);
 if (VAR_4) {
  FUNC_1(VAR_3->dev, "failed to read chip revision register: %d\n",
   VAR_4);
  if (!VAR_3->reset_gpio) {
   FUNC_0(VAR_3->dev,
    "hint: maybe failed due to missing reset GPIO\n");
  }
  return VAR_4;
 }

 if ((VAR_5 >> 16) != VAR_1) {
  FUNC_1(VAR_3->dev, "expecting LAN9303 chip, but found: %X\n",
   VAR_5 >> 16);
  return -VAR_0;
 }
 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4)
  FUNC_3(VAR_3->dev, "failed to disable switching %d\n", VAR_4);

 FUNC_2(VAR_3->dev, "Found LAN9303 rev. %u\n", VAR_5 & 0xffff);

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_3->dev,
   "failed to discover phy bootstrap setup: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
