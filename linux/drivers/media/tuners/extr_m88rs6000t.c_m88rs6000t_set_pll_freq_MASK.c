
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct m88rs6000t_dev {int frequency_khz; TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int,unsigned int*) ;
 int FUNC_2 (int ,int,unsigned int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct m88rs6000t_dev *VAR_0,
   u32 VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5;
 u8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u8 VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 VAR_2 = 27000;
 VAR_6 = 27;

 VAR_18 = FUNC_2(VAR_0->regmap, 0x36, (VAR_6 - 8));
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x31, 0x00);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x2c, 0x02);
 if (VAR_18)
  goto err;

 if (VAR_1 >= 1550) {
  VAR_7 = 2;
  VAR_8 = 0;
  VAR_9 = 2;
  VAR_10 = 0;
 } else if (VAR_1 >= 1380) {
  VAR_7 = 3;
  VAR_8 = 16;
  VAR_9 = 2;
  VAR_10 = 0;
 } else if (VAR_1 >= 1070) {
  VAR_7 = 3;
  VAR_8 = 16;
  VAR_9 = 3;
  VAR_10 = 16;
 } else if (VAR_1 >= 1000) {
  VAR_7 = 3;
  VAR_8 = 16;
  VAR_9 = 4;
  VAR_10 = 64;
 } else if (VAR_1 >= 775) {
  VAR_7 = 4;
  VAR_8 = 64;
  VAR_9 = 4;
  VAR_10 = 64;
 } else if (VAR_1 >= 700) {
  VAR_7 = 6;
  VAR_8 = 48;
  VAR_9 = 4;
  VAR_10 = 64;
 } else if (VAR_1 >= 520) {
  VAR_7 = 6;
  VAR_8 = 48;
  VAR_9 = 6;
  VAR_10 = 48;
 } else {
  VAR_7 = 8;
  VAR_8 = 96;
  VAR_9 = 8;
  VAR_10 = 96;
 }

 VAR_3 = ((VAR_1 * VAR_7 * 1000) * VAR_6
   / VAR_2 - 1024) / 2;
 VAR_4 = ((VAR_1 * VAR_9 * 1000) * VAR_6
   / VAR_2 - 1024) / 2;

 VAR_13 = (((VAR_3 >> 8) & 0x0F) + VAR_8) & 0x7F;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x27, VAR_13);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x28, (u8)(VAR_3 & 0xFF));
 if (VAR_18)
  goto err;
 VAR_14 = (((VAR_4 >> 8) & 0x0F) + VAR_10) & 0x7f;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x29, VAR_14);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x2a, (u8)(VAR_4 & 0xFF));
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x2F, 0xf5);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x30, 0x05);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x08, 0x1f);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x08, 0x3f);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x09, 0x20);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x09, 0x00);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x3e, 0x11);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x08, 0x2f);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x08, 0x3f);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x09, 0x10);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x09, 0x00);
 if (VAR_18)
  goto err;
 FUNC_3(2000, 50000);

 VAR_18 = FUNC_1(VAR_0->regmap, 0x42, &VAR_17);
 if (VAR_18)
  goto err;
 VAR_15 = VAR_17;

 VAR_18 = FUNC_2(VAR_0->regmap, 0x3e, 0x10);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x08, 0x2f);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x08, 0x3f);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x09, 0x10);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x09, 0x00);
 if (VAR_18)
  goto err;
 FUNC_3(2000, 50000);

 VAR_18 = FUNC_1(VAR_0->regmap, 0x42, &VAR_17);
 if (VAR_18)
  goto err;
 VAR_16 = VAR_17;
 if (VAR_16 < VAR_15) {
  VAR_18 = FUNC_2(VAR_0->regmap, 0x3e, 0x11);
  if (VAR_18)
   goto err;
 }
 FUNC_3(5000, 50000);

 VAR_18 = FUNC_1(VAR_0->regmap, 0x2d, &VAR_17);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x2d, VAR_17);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_1(VAR_0->regmap, 0x2e, &VAR_17);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x2e, VAR_17);
 if (VAR_18)
  goto err;

 VAR_18 = FUNC_1(VAR_0->regmap, 0x27, &VAR_17);
 if (VAR_18)
  goto err;
 VAR_13 = VAR_17 & 0x70;
 VAR_18 = FUNC_1(VAR_0->regmap, 0x83, &VAR_17);
 if (VAR_18)
  goto err;
 if (VAR_13 == (VAR_17 & 0x70)) {
  VAR_11 = VAR_7;
  VAR_5 = VAR_3;
  VAR_12 = VAR_8 / 16;
 } else {
  VAR_11 = VAR_9;
  VAR_5 = VAR_4;
  VAR_12 = VAR_10 / 16;
 }

 if ((VAR_11 == 3) || (VAR_11 == 6)) {
  VAR_6 = 18;
  VAR_18 = FUNC_2(VAR_0->regmap, 0x36, (VAR_6 - 8));
  if (VAR_18)
   goto err;
  VAR_5 = ((VAR_1 * VAR_11 * 1000) * VAR_6
    / VAR_2 - 1024) / 2;
 }

 VAR_13 = (0x80 + ((VAR_12 << 4) & 0x70)
   + ((VAR_5 >> 8) & 0x0F)) & 0xFF;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x27, VAR_13);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x28, (u8)(VAR_5 & 0xFF));
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x29, 0x80);
 if (VAR_18)
  goto err;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x31, 0x03);
 if (VAR_18)
  goto err;

 if (VAR_11 == 3)
  VAR_17 = 0xCE;
 else
  VAR_17 = 0x8A;
 VAR_18 = FUNC_2(VAR_0->regmap, 0x3b, VAR_17);
 if (VAR_18)
  goto err;

 VAR_0->frequency_khz = VAR_2 * (VAR_5 * 2 + 1024) / VAR_6 / VAR_11;

 FUNC_0(&VAR_0->client->dev,
  "actual tune frequency=%d\n", VAR_0->frequency_khz);
err:
 if (VAR_18)
  FUNC_0(&VAR_0->client->dev, "failed=%d\n", VAR_18);
 return VAR_18;
}
