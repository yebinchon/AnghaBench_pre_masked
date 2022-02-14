
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u64 ;
struct i2c_client {int dev; } ;
struct fc2580_dev {scalar_t__ f_frequency; scalar_t__ f_bandwidth; int regmap; scalar_t__ clk; int active; struct i2c_client* client; } ;
struct TYPE_5__ {scalar_t__ freq; unsigned int div_out; int band; int r36_val; int r39_val; int r6f_val; int r6e_val; int r6d_val; int r6c_val; int r6b_val; int r6a_val; int r69_val; int r68_val; int r67_val; int r63_val; int r62_val; int r61_val; int r5f_val; int r53_val; int r50_val; int r44_val; int r30_val; int r2d_val; int r2c_val; int r2b_val; int r29_val; int r28_val; int r27_val; int r25_val; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int *,char*,...) ;
 unsigned int FUNC_2 (unsigned int,unsigned long long) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int,unsigned int*) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (struct fc2580_dev*,int,int ) ;
 unsigned long VAR_7 ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 (int ,int,unsigned int*) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct fc2580_dev *VAR_8)
{
 struct i2c_client *VAR_9 = VAR_8->client;
 int VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 u64 VAR_19;
 u8 VAR_20;
 unsigned long VAR_21;

 if (!VAR_8->active) {
  FUNC_1(&VAR_9->dev, "tuner is sleeping\n");
  return 0;
 }
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_6); VAR_11++) {
  if (VAR_8->f_frequency <= VAR_6[VAR_11].freq)
   break;
 }
 if (VAR_11 == FUNC_0(VAR_6)) {
  VAR_10 = -VAR_2;
  goto err;
 }



 VAR_18 = VAR_6[VAR_11].div_out;
 VAR_19 = (u64) VAR_8->f_frequency * VAR_18;
 VAR_20 = VAR_6[VAR_11].band;
 if (VAR_19 < 2600000000ULL)
  VAR_20 |= 0x06;
 else
  VAR_20 |= 0x0e;



 if (VAR_19 >= FUNC_3((u64) 2 * 76 * VAR_8->clk, 1)) {
  VAR_13 = 1;
  VAR_14 = 0x00;
 } else if (VAR_19 >= FUNC_3((u64) 2 * 76 * VAR_8->clk, 2)) {
  VAR_13 = 2;
  VAR_14 = 0x10;
 } else {
  VAR_13 = 4;
  VAR_14 = 0x20;
 }


 VAR_12 = 2 * VAR_8->clk / VAR_13;
 VAR_15 = FUNC_4(VAR_19, VAR_12, &VAR_16);
 VAR_17 = FUNC_3((u64) VAR_16 * 0x100000, VAR_12);

 FUNC_1(&VAR_9->dev,
  "frequency=%u bandwidth=%u f_vco=%llu F_REF=%u div_ref=%u div_n=%u k=%u div_out=%u k_cw=%0x\n",
  VAR_8->f_frequency, VAR_8->f_bandwidth, VAR_19, VAR_8->clk, VAR_13,
  VAR_15, VAR_16, VAR_18, VAR_17);

 VAR_10 = FUNC_8(VAR_8->regmap, 0x02, VAR_20);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_8(VAR_8->regmap, 0x18, VAR_14 << 0 | VAR_17 >> 16);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_8(VAR_8->regmap, 0x1a, (VAR_17 >> 8) & 0xff);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_8(VAR_8->regmap, 0x1b, (VAR_17 >> 0) & 0xff);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_8(VAR_8->regmap, 0x1c, VAR_15);
 if (VAR_10)
  goto err;


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
  if (VAR_8->f_frequency <= VAR_4[VAR_11].freq)
   break;
 }
 if (VAR_11 == FUNC_0(VAR_4)) {
  VAR_10 = -VAR_2;
  goto err;
 }

 VAR_10 = FUNC_5(VAR_8, 0x25, VAR_4[VAR_11].r25_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x27, VAR_4[VAR_11].r27_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x28, VAR_4[VAR_11].r28_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x29, VAR_4[VAR_11].r29_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x2b, VAR_4[VAR_11].r2b_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x2c, VAR_4[VAR_11].r2c_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x2d, VAR_4[VAR_11].r2d_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x30, VAR_4[VAR_11].r30_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x44, VAR_4[VAR_11].r44_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x50, VAR_4[VAR_11].r50_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x53, VAR_4[VAR_11].r53_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x5f, VAR_4[VAR_11].r5f_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x61, VAR_4[VAR_11].r61_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x62, VAR_4[VAR_11].r62_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x63, VAR_4[VAR_11].r63_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x67, VAR_4[VAR_11].r67_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x68, VAR_4[VAR_11].r68_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x69, VAR_4[VAR_11].r69_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x6a, VAR_4[VAR_11].r6a_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x6b, VAR_4[VAR_11].r6b_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x6c, VAR_4[VAR_11].r6c_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x6d, VAR_4[VAR_11].r6d_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x6e, VAR_4[VAR_11].r6e_val);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, 0x6f, VAR_4[VAR_11].r6f_val);
 if (VAR_10)
  goto err;


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
  if (VAR_8->f_bandwidth <= VAR_5[VAR_11].freq)
   break;
 }
 if (VAR_11 == FUNC_0(VAR_5)) {
  VAR_10 = -VAR_2;
  goto err;
 }

 VAR_10 = FUNC_8(VAR_8->regmap, 0x36, VAR_5[VAR_11].r36_val);
 if (VAR_10)
  goto err;

 VAR_12 = (unsigned int) 8058000 - (VAR_8->f_bandwidth * 122 / 100 / 2);
 VAR_12 = FUNC_2((u64) VAR_8->clk * VAR_12, 1000000000000ULL);
 VAR_10 = FUNC_8(VAR_8->regmap, 0x37, VAR_12);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_8(VAR_8->regmap, 0x39, VAR_5[VAR_11].r39_val);
 if (VAR_10)
  goto err;

 VAR_21 = VAR_7 + FUNC_6(30);
 for (VAR_12 = ~0xc0; !FUNC_9(VAR_7, VAR_21) && VAR_12 != 0xc0;) {

  VAR_10 = FUNC_8(VAR_8->regmap, 0x2e, 0x09);
  if (VAR_10)
   goto err;


  VAR_10 = FUNC_7(VAR_8->regmap, 0x2f, &VAR_12);
  if (VAR_10)
   goto err;
  VAR_12 &= 0xc0;

  VAR_10 = FUNC_8(VAR_8->regmap, 0x2e, 0x01);
  if (VAR_10)
   goto err;
 }
 if (VAR_12 != 0xc0)
  FUNC_1(&VAR_9->dev, "filter did not lock %02x\n", VAR_12);

 return 0;
err:
 FUNC_1(&VAR_9->dev, "failed=%d\n", VAR_10);
 return VAR_10;
}
