
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct m88rs6000t_dev {TYPE_1__* client; int regmap; } ;
struct dvb_frontend {struct m88rs6000t_dev* tuner_priv; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,unsigned int,unsigned int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0, u16 *VAR_1)
{
 struct m88rs6000t_dev *VAR_2 = VAR_0->tuner_priv;
 unsigned int VAR_3, VAR_4;
 int VAR_5;
 u16 VAR_6;
 u32 VAR_7 = 46, VAR_8 = 290, VAR_9 = 290;
 u32 VAR_10 = 1200, VAR_11 = 1100, VAR_12 = 300;
 u32 VAR_13 = 300, VAR_14 = 300, VAR_15 = 0, VAR_16 = 0;
 u32 VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 u32 VAR_22[13] = {0, 245, 266, 268, 270, 285,
   298, 295, 283, 285, 285, 300, 300};
 u32 VAR_23[12] = {0, 300, 230, 270, 270, 285,
   295, 285, 290, 295, 295, 310};
 u32 VAR_24[14] = {0, 286, 275, 290, 294, 300, 290,
   290, 285, 283, 260, 295, 290, 260};

 VAR_5 = FUNC_2(VAR_2->regmap, 0x5A, &VAR_3);
 if (VAR_5)
  goto err;
 VAR_10 = VAR_3 & 0x0f;

 VAR_5 = FUNC_2(VAR_2->regmap, 0x5F, &VAR_3);
 if (VAR_5)
  goto err;
 VAR_11 = VAR_3 & 0x0f;

 VAR_5 = FUNC_2(VAR_2->regmap, 0x3F, &VAR_3);
 if (VAR_5)
  goto err;
 VAR_14 = (VAR_3 >> 4) & 0x07;

 VAR_5 = FUNC_2(VAR_2->regmap, 0x77, &VAR_3);
 if (VAR_5)
  goto err;
 VAR_12 = (VAR_3 >> 4) & 0x0f;

 VAR_5 = FUNC_2(VAR_2->regmap, 0x76, &VAR_3);
 if (VAR_5)
  goto err;
 VAR_13 = VAR_3 & 0x3f;
 VAR_15 = VAR_13 >> 2;
 VAR_16 = VAR_13 & 0x03;

 for (VAR_4 = 0; VAR_4 <= VAR_10; VAR_4++)
  VAR_17 += VAR_22[VAR_4];

 if (VAR_10 == 0)
  VAR_17 += 400;
 if (VAR_10 == 1)
  VAR_17 += 300;
 if (VAR_10 == 2)
  VAR_17 += 200;
 if (VAR_10 == 3)
  VAR_17 += 100;

 for (VAR_4 = 0; VAR_4 <= VAR_11; VAR_4++)
  VAR_18 += VAR_23[VAR_4];

 VAR_21 = VAR_14 * VAR_9;

 for (VAR_4 = 0; VAR_4 <= VAR_12; VAR_4++)
  VAR_19 += VAR_24[VAR_4];

 VAR_20 = VAR_15 * VAR_7 + VAR_16 * VAR_8;

 VAR_6 = VAR_17 + VAR_18 - VAR_21 + VAR_19 + VAR_20;


 VAR_6 = FUNC_0(VAR_6, 1000U, 10500U);
 *VAR_1 = (10500 - VAR_6) * 0xffff / (10500 - 1000);
err:
 if (VAR_5)
  FUNC_1(&VAR_2->client->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
