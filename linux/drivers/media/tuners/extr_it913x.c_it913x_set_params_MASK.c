
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct platform_device {int dev; } ;
struct it913x_dev {int fn_min; scalar_t__ clk_mode; int fdiv; unsigned int xtal; int regmap; int active; int role; struct platform_device* pdev; } ;
struct dtv_frontend_properties {int frequency; int bandwidth_hz; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct it913x_dev* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ,int,unsigned int*) ;
 int FUNC_2 (int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct it913x_dev *VAR_2 = VAR_1->tuner_priv;
 struct platform_device *VAR_3 = VAR_2->pdev;
 struct dtv_frontend_properties *VAR_4 = &VAR_1->dtv_property_cache;
 int VAR_5;
 unsigned int VAR_6;
 u32 VAR_7, VAR_8;
 u16 VAR_9, VAR_10;
 u8 VAR_11, VAR_12, VAR_13, VAR_14;

 FUNC_0(&VAR_3->dev, "role=%u, frequency %u, bandwidth_hz %u\n",
   VAR_2->role, VAR_4->frequency, VAR_4->bandwidth_hz);

 if (!VAR_2->active) {
  VAR_5 = -VAR_0;
  goto err;
 }

 if (VAR_4->frequency <= 74000000) {
  VAR_10 = 48;
  VAR_12 = 0;
 } else if (VAR_4->frequency <= 111000000) {
  VAR_10 = 32;
  VAR_12 = 1;
 } else if (VAR_4->frequency <= 148000000) {
  VAR_10 = 24;
  VAR_12 = 2;
 } else if (VAR_4->frequency <= 222000000) {
  VAR_10 = 16;
  VAR_12 = 3;
 } else if (VAR_4->frequency <= 296000000) {
  VAR_10 = 12;
  VAR_12 = 4;
 } else if (VAR_4->frequency <= 445000000) {
  VAR_10 = 8;
  VAR_12 = 5;
 } else if (VAR_4->frequency <= VAR_2->fn_min) {
  VAR_10 = 6;
  VAR_12 = 6;
 } else if (VAR_4->frequency <= 950000000) {
  VAR_10 = 4;
  VAR_12 = 7;
 } else {
  VAR_10 = 2;
  VAR_12 = 0;
 }

 VAR_5 = FUNC_1(VAR_2->regmap, 0x80ed81, &VAR_6);
 if (VAR_5)
  goto err;

 VAR_9 = VAR_6 * VAR_10;

 if (VAR_6 < 0x20) {
  if (VAR_2->clk_mode == 0)
   VAR_9 = (VAR_9 * 9) >> 5;
  else
   VAR_9 >>= 1;
 } else {
  VAR_9 = 0x40 - VAR_9;
  if (VAR_2->clk_mode == 0)
   VAR_9 = ~((VAR_9 * 9) >> 5);
  else
   VAR_9 = ~(VAR_9 >> 1);
 }

 VAR_8 = (VAR_4->frequency / 1000) * VAR_10 * VAR_2->fdiv;
 VAR_7 = VAR_8 / VAR_2->xtal;
 VAR_6 = VAR_7 * VAR_2->xtal;

 if ((VAR_8 - VAR_6) >= (VAR_2->xtal >> 1))
  VAR_7++;

 VAR_7 += (u32) VAR_12 << 13;

 VAR_8 = VAR_7 + (u32)VAR_9;
 FUNC_0(&VAR_3->dev, "t_cal_freq %u, pre_lo_freq %u\n",
   VAR_8, VAR_7);

 if (VAR_4->frequency <= 440000000) {
  VAR_13 = 0;
  VAR_14 = 0;
 } else if (VAR_4->frequency <= 484000000) {
  VAR_13 = 1;
  VAR_14 = 1;
 } else if (VAR_4->frequency <= 533000000) {
  VAR_13 = 1;
  VAR_14 = 2;
 } else if (VAR_4->frequency <= 587000000) {
  VAR_13 = 1;
  VAR_14 = 3;
 } else if (VAR_4->frequency <= 645000000) {
  VAR_13 = 1;
  VAR_14 = 4;
 } else if (VAR_4->frequency <= 710000000) {
  VAR_13 = 1;
  VAR_14 = 5;
 } else if (VAR_4->frequency <= 782000000) {
  VAR_13 = 1;
  VAR_14 = 6;
 } else if (VAR_4->frequency <= 860000000) {
  VAR_13 = 1;
  VAR_14 = 7;
 } else if (VAR_4->frequency <= 1492000000) {
  VAR_13 = 1;
  VAR_14 = 0;
 } else if (VAR_4->frequency <= 1685000000) {
  VAR_13 = 1;
  VAR_14 = 1;
 } else {
  VAR_5 = -VAR_0;
  goto err;
 }


 VAR_5 = FUNC_2(VAR_2->regmap, 0x80ee06, VAR_14);
 if (VAR_5)
  goto err;

 if (VAR_4->bandwidth_hz <= 5000000)
  VAR_11 = 0;
 else if (VAR_4->bandwidth_hz <= 6000000)
  VAR_11 = 2;
 else if (VAR_4->bandwidth_hz <= 7000000)
  VAR_11 = 4;
 else
  VAR_11 = 6;

 VAR_5 = FUNC_2(VAR_2->regmap, 0x80ec56, VAR_11);
 if (VAR_5)
  goto err;


 VAR_5 = FUNC_2(VAR_2->regmap, 0x80ec4c, 0xa0 | (VAR_13 << 3));
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_2(VAR_2->regmap, 0x80ec4d, (VAR_8 >> 0) & 0xff);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_2(VAR_2->regmap, 0x80ec4e, (VAR_8 >> 8) & 0xff);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_2(VAR_2->regmap, 0x80011e, (VAR_7 >> 0) & 0xff);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_2(VAR_2->regmap, 0x80011f, (VAR_7 >> 8) & 0xff);
 if (VAR_5)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_3->dev, "failed %d\n", VAR_5);
 return VAR_5;
}
