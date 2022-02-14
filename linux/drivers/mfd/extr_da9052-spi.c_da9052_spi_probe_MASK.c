
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {int driver_data; } ;
struct spi_device {int bits_per_word; int dev; int irq; int mode; } ;
struct regmap_config {int read_flag_mask; int reg_bits; int pad_bits; int val_bits; int use_single_read; int use_single_write; } ;
struct da9052 {int regmap; int chip_irq; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct da9052*,int ) ;
 struct regmap_config VAR_3 ;
 int FUNC_3 (int *,char*,int) ;
 struct da9052* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct spi_device*,struct regmap_config*) ;
 struct spi_device_id* FUNC_6 (struct spi_device*) ;
 int FUNC_7 (struct spi_device*,struct da9052*) ;
 int FUNC_8 (struct spi_device*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_4)
{
 struct regmap_config VAR_5;
 int VAR_6;
 const struct spi_device_id *VAR_7 = FUNC_6(VAR_4);
 struct da9052 *VAR_8;

 VAR_8 = FUNC_4(&VAR_4->dev, sizeof(struct da9052), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_4->mode = VAR_2;
 VAR_4->bits_per_word = 8;
 FUNC_8(VAR_4);

 VAR_8->dev = &VAR_4->dev;
 VAR_8->chip_irq = VAR_4->irq;

 FUNC_7(VAR_4, VAR_8);

 VAR_5 = VAR_3;
 VAR_5.read_flag_mask = 1;
 VAR_5.reg_bits = 7;
 VAR_5.pad_bits = 1;
 VAR_5.val_bits = 8;
 VAR_5.use_single_read = 1;
 VAR_5.use_single_write = 1;

 VAR_8->regmap = FUNC_5(VAR_4, &VAR_5);
 if (FUNC_0(VAR_8->regmap)) {
  VAR_6 = FUNC_1(VAR_8->regmap);
  FUNC_3(&VAR_4->dev, "Failed to allocate register map: %d\n",
   VAR_6);
  return VAR_6;
 }

 return FUNC_2(VAR_8, VAR_7->driver_data);
}
