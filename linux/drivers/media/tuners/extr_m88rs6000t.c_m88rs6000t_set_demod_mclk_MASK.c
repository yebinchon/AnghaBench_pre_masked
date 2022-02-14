
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct m88rs6000t_dev {TYPE_1__* client; int regmap; } ;
struct dtv_frontend_properties {int symbol_rate; scalar_t__ delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct m88rs6000t_dev* tuner_priv; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int,unsigned int*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1)
{
 struct m88rs6000t_dev *VAR_2 = VAR_1->tuner_priv;
 struct dtv_frontend_properties *VAR_3 = &VAR_1->dtv_property_cache;
 u8 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 u8 VAR_10, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 u16 VAR_15;
 u32 VAR_16, VAR_17;
 unsigned int VAR_18;
 int VAR_19;


 VAR_19 = FUNC_1(VAR_2->regmap, 0x15, &VAR_18);
 if (VAR_19)
  goto err;
 VAR_5 = VAR_18;
 if (VAR_3->symbol_rate > 45010000) {
  VAR_4 = 0x0E;
  VAR_5 |= 0x02;
  VAR_6 = 115;
 } else {
  VAR_4 = 0x0A;
  VAR_5 &= ~0x02;
  VAR_6 = 96;
 }


 if (VAR_3->delivery_system == VAR_0)
  VAR_17 = 96000;
 else
  VAR_17 = 144000;

 VAR_15 = (VAR_5 & 0x01) << 8;
 VAR_15 += VAR_6;
 VAR_15 += 32;

 VAR_16 = 36000 * VAR_15;
 VAR_16 /= VAR_17;

 if (VAR_16 <= 32) {
  VAR_10 = 2;
  VAR_11 = 0;
  VAR_12 = VAR_16 / 2;
  VAR_13 = VAR_16 - VAR_12;
  VAR_14 = 0;
 } else if (VAR_16 <= 48) {
  VAR_10 = 3;
  VAR_11 = VAR_16 / 3;
  VAR_12 = (VAR_16 - VAR_11) / 2;
  VAR_13 = VAR_16 - VAR_11 - VAR_12;
  VAR_14 = 0;
 } else if (VAR_16 <= 64) {
  VAR_10 = 4;
  VAR_11 = VAR_16 / 4;
  VAR_12 = (VAR_16 - VAR_11) / 3;
  VAR_13 = (VAR_16 - VAR_11 - VAR_12) / 2;
  VAR_14 = VAR_16 - VAR_11 - VAR_12 - VAR_13;
 } else {
  VAR_10 = 4;
  VAR_11 = 16;
  VAR_12 = 16;
  VAR_13 = 16;
  VAR_14 = 16;
 }

 if (VAR_11 == 16)
  VAR_11 = 0;
 if (VAR_12 == 16)
  VAR_12 = 0;
 if (VAR_13 == 16)
  VAR_13 = 0;
 if (VAR_14 == 16)
  VAR_14 = 0;

 VAR_19 = FUNC_1(VAR_2->regmap, 0x1D, &VAR_18);
 if (VAR_19)
  goto err;
 VAR_7 = VAR_18;
 VAR_7 &= ~0x03;
 VAR_7 |= VAR_10 - 1;
 VAR_8 = ((VAR_14 << 4) + VAR_13) & 0xFF;
 VAR_9 = ((VAR_12 << 4) + VAR_11) & 0xFF;


 VAR_19 = FUNC_2(VAR_2->regmap, 0x05, 0x40);
 if (VAR_19)
  goto err;
 VAR_19 = FUNC_2(VAR_2->regmap, 0x11, 0x08);
 if (VAR_19)
  goto err;
 VAR_19 = FUNC_2(VAR_2->regmap, 0x15, VAR_5);
 if (VAR_19)
  goto err;
 VAR_19 = FUNC_2(VAR_2->regmap, 0x16, VAR_6);
 if (VAR_19)
  goto err;
 VAR_19 = FUNC_2(VAR_2->regmap, 0x1D, VAR_7);
 if (VAR_19)
  goto err;
 VAR_19 = FUNC_2(VAR_2->regmap, 0x1E, VAR_8);
 if (VAR_19)
  goto err;
 VAR_19 = FUNC_2(VAR_2->regmap, 0x1F, VAR_9);
 if (VAR_19)
  goto err;
 VAR_19 = FUNC_2(VAR_2->regmap, 0x17, 0xc1);
 if (VAR_19)
  goto err;
 VAR_19 = FUNC_2(VAR_2->regmap, 0x17, 0x81);
 if (VAR_19)
  goto err;
 FUNC_3(5000, 50000);
 VAR_19 = FUNC_2(VAR_2->regmap, 0x05, 0x00);
 if (VAR_19)
  goto err;
 VAR_19 = FUNC_2(VAR_2->regmap, 0x11, VAR_4);
 if (VAR_19)
  goto err;
 FUNC_3(5000, 50000);
err:
 if (VAR_19)
  FUNC_0(&VAR_2->client->dev, "failed=%d\n", VAR_19);
 return VAR_19;
}
