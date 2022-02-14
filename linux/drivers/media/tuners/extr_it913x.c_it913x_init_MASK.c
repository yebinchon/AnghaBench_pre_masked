
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dev; } ;
struct it913x_dev {int role; unsigned int clk_mode; int xtal; int fdiv; unsigned int fn_min; int chip_ver; int active; int regmap; struct platform_device* pdev; } ;
struct dvb_frontend {struct it913x_dev* tuner_priv; } ;


 unsigned int FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *,char*,unsigned int) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int*,int) ;
 int FUNC_7 (int ,int,unsigned int*) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (unsigned long,unsigned long) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct dvb_frontend *VAR_2)
{
 struct it913x_dev *VAR_3 = VAR_2->tuner_priv;
 struct platform_device *VAR_4 = VAR_3->pdev;
 int VAR_5;
 unsigned int VAR_6;
 u8 VAR_7, VAR_8, VAR_9[2];
 static const u8 VAR_10[] = {48, 32, 24, 16, 12, 8, 6, 4, 2};
 unsigned long VAR_11;

 FUNC_1(&VAR_4->dev, "role %u\n", VAR_3->role);

 VAR_5 = FUNC_8(VAR_3->regmap, 0x80ec4c, 0x68);
 if (VAR_5)
  goto err;

 FUNC_10(10000, 100000);

 VAR_5 = FUNC_7(VAR_3->regmap, 0x80ec86, &VAR_6);
 if (VAR_5)
  goto err;

 switch (VAR_6) {
 case 0:

  VAR_3->clk_mode = VAR_6;
  VAR_3->xtal = 2000;
  VAR_3->fdiv = 3;
  VAR_7 = 16;
  break;
 case 1:

  VAR_3->clk_mode = VAR_6;
  VAR_3->xtal = 640;
  VAR_3->fdiv = 1;
  VAR_7 = 6;
  break;
 default:
  FUNC_2(&VAR_4->dev, "unknown clock identifier %d\n", VAR_6);
  goto err;
 }

 VAR_5 = FUNC_7(VAR_3->regmap, 0x80ed03, &VAR_6);
 if (VAR_5)
  goto err;

 else if (VAR_6 < FUNC_0(VAR_10))
  VAR_8 = VAR_10[VAR_6];
 else
  VAR_8 = 2;


 VAR_11 = VAR_1 + FUNC_4(50);
 while (!FUNC_9(VAR_1, VAR_11)) {
  VAR_5 = FUNC_6(VAR_3->regmap, 0x80ed23, VAR_9, 2);
  if (VAR_5)
   goto err;

  VAR_6 = (VAR_9[1] << 8) | (VAR_9[0] << 0);
  if (VAR_6)
   break;
 }

 FUNC_1(&VAR_4->dev, "r_fbc_m_bdry took %u ms, val %u\n",
   FUNC_3(VAR_1) -
   (FUNC_3(VAR_11) - 50), VAR_6);

 VAR_3->fn_min = VAR_3->xtal * VAR_6;
 VAR_3->fn_min /= (VAR_3->fdiv * VAR_8);
 VAR_3->fn_min *= 1000;
 FUNC_1(&VAR_4->dev, "fn_min %u\n", VAR_3->fn_min);







 if (VAR_3->chip_ver == 1) {

  VAR_11 = VAR_1 + FUNC_4(50);
  while (!FUNC_9(VAR_1, VAR_11)) {
   VAR_5 = FUNC_7(VAR_3->regmap, 0x80ec82, &VAR_6);
   if (VAR_5)
    goto err;

   if (VAR_6)
    break;
  }

  FUNC_1(&VAR_4->dev, "p_tsm_init_mode took %u ms, val %u\n",
    FUNC_3(VAR_1) -
    (FUNC_3(VAR_11) - 50), VAR_6);
 } else {
  FUNC_5(50);
 }

 VAR_5 = FUNC_8(VAR_3->regmap, 0x80ed81, VAR_7);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_8(VAR_3->regmap, 0x80ec57, 0x00);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_8(VAR_3->regmap, 0x80ec58, 0x00);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_8(VAR_3->regmap, 0x80ec40, 0x01);
 if (VAR_5)
  goto err;

 VAR_3->active = 1;

 return 0;
err:
 FUNC_1(&VAR_4->dev, "failed %d\n", VAR_5);
 return VAR_5;
}
