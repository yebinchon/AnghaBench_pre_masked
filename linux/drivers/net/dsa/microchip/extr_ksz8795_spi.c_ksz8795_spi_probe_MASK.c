
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct regmap_config {int val_bits; int * lock_arg; } ;
struct ksz_device {scalar_t__ pdata; int * regmap; int regmap_mutex; } ;


 int FUNC_0 (struct regmap_config*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int) ;
 int FUNC_4 (struct spi_device*,struct regmap_config*) ;
 struct regmap_config* VAR_1 ;
 int FUNC_5 (struct ksz_device*) ;
 struct ksz_device* FUNC_6 (TYPE_1__*,struct spi_device*) ;
 int FUNC_7 (struct spi_device*,struct ksz_device*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_2)
{
 struct regmap_config VAR_3;
 struct ksz_device *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_6(&VAR_2->dev, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_3 = VAR_1[VAR_5];
  VAR_3.lock_arg = &VAR_4->regmap_mutex;
  VAR_4->regmap[VAR_5] = FUNC_4(VAR_2, &VAR_3);
  if (FUNC_1(VAR_4->regmap[VAR_5])) {
   VAR_6 = FUNC_2(VAR_4->regmap[VAR_5]);
   FUNC_3(&VAR_2->dev,
    "Failed to initialize regmap%i: %d\n",
    VAR_1[VAR_5].val_bits, VAR_6);
   return VAR_6;
  }
 }

 if (VAR_2->dev.platform_data)
  VAR_4->pdata = VAR_2->dev.platform_data;

 VAR_6 = FUNC_5(VAR_4);


 if (VAR_6)
  return VAR_6;

 FUNC_7(VAR_2, VAR_4);

 return 0;
}
