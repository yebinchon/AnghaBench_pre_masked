
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt9m032_platform_data {int pix_clock; int ext_clock; } ;
struct mt9m032 {int pix_clock; struct mt9m032_platform_data* pdata; int subdev; } ;
struct i2c_client {int dev; } ;
struct aptina_pll_limits {int ext_clock_min; int ext_clock_max; int int_clock_min; int int_clock_max; int out_clock_min; int out_clock_max; int pix_clock_max; int n_min; int n_max; int m_min; int m_max; int p1_min; int p1_max; } ;
struct aptina_pll {int m; int n; int p1; int pix_clock; int ext_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,struct aptina_pll_limits const*,struct aptina_pll*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mt9m032 *VAR_12)
{
 static const struct aptina_pll_limits VAR_13 = {
  .ext_clock_min = 8000000,
  .ext_clock_max = 16500000,
  .int_clock_min = 2000000,
  .int_clock_max = 24000000,
  .out_clock_min = 322000000,
  .out_clock_max = 693000000,
  .pix_clock_max = 99000000,
  .n_min = 1,
  .n_max = 64,
  .m_min = 16,
  .m_max = 255,
  .p1_min = 6,
  .p1_max = 7,
 };

 struct i2c_client *VAR_14 = FUNC_2(&VAR_12->subdev);
 struct mt9m032_platform_data *VAR_15 = VAR_12->pdata;
 struct aptina_pll VAR_16;
 u16 VAR_17;
 int VAR_18;

 VAR_16.ext_clock = VAR_15->ext_clock;
 VAR_16.pix_clock = VAR_15->pix_clock;

 VAR_18 = FUNC_0(&VAR_14->dev, &VAR_13, &VAR_16);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_12->pix_clock = VAR_15->pix_clock;

 VAR_18 = FUNC_1(VAR_14, VAR_3,
       (VAR_16.m << VAR_4) |
       ((VAR_16.n - 1) & VAR_5));
 if (!VAR_18)
  VAR_18 = FUNC_1(VAR_14, VAR_9,
        VAR_10 |
        VAR_11);
 if (!VAR_18)
  VAR_18 = FUNC_1(VAR_14, VAR_6, 0x8000 |
        VAR_8 |
        VAR_7);
 if (!VAR_18) {
  VAR_17 = (VAR_16.p1 == 6 ? VAR_2 : 0)
   | VAR_1 | 0x001e;
  VAR_18 = FUNC_1(VAR_14, VAR_0, VAR_17);
 }

 return VAR_18;
}
