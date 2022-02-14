
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int dev; int mode; } ;
struct rtc_device {int dummy; } ;
struct regmap_config {int reg_bits; int val_bits; int read_flag_mask; int max_register; int * wr_table; } ;
typedef struct rtc_device regmap ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 struct rtc_device* FUNC_4 (struct spi_device*,struct regmap_config*) ;
 struct rtc_device* FUNC_5 (int *,char*,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct regmap_config*,int ,int) ;
 int FUNC_7 (struct rtc_device*,int ,unsigned int*) ;
 int FUNC_8 (struct rtc_device*,int ,unsigned int) ;
 int FUNC_9 (struct spi_device*,struct rtc_device*) ;
 int FUNC_10 (struct spi_device*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_7)
{
 struct rtc_device *VAR_8;
 struct regmap_config VAR_9;
 struct regmap *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.reg_bits = 8;
 VAR_9.val_bits = 8;
 VAR_9.read_flag_mask = 0x80;
 VAR_9.max_register = 0x3F;
 VAR_9.wr_table = &VAR_5;


 VAR_7->mode = VAR_3;
 VAR_7->bits_per_word = 8;
 FUNC_10(VAR_7);

 VAR_10 = FUNC_4(VAR_7, &VAR_9);

 if (FUNC_0(VAR_10)) {
  FUNC_2(&VAR_7->dev, "ds1347 regmap init spi failed\n");
  return FUNC_1(VAR_10);
 }

 FUNC_9(VAR_7, VAR_10);


 VAR_12 = FUNC_7(VAR_10, VAR_1, &VAR_11);
 if (VAR_12)
  return VAR_12;


 FUNC_7(VAR_10, VAR_0, &VAR_11);
 VAR_11 = VAR_11 & ~(1<<7);
 FUNC_8(VAR_10, VAR_0, VAR_11);



 FUNC_7(VAR_10, VAR_2, &VAR_11);
 VAR_11 = VAR_11 & 0x1B;
 FUNC_8(VAR_10, VAR_2, VAR_11);


 FUNC_7(VAR_10, VAR_0, &VAR_11);
 FUNC_3(&VAR_7->dev, "DS1347 RTC CTRL Reg = 0x%02x\n", VAR_11);

 FUNC_7(VAR_10, VAR_2, &VAR_11);
 FUNC_3(&VAR_7->dev, "DS1347 RTC Status Reg = 0x%02x\n", VAR_11);

 VAR_8 = FUNC_5(&VAR_7->dev, "ds1347",
    &VAR_6, VAR_4);

 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 return 0;
}
