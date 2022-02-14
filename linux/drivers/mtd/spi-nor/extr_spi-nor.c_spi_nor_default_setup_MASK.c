
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_nor_hwcaps {int mask; } ;
struct TYPE_2__ {int mask; } ;
struct spi_nor_flash_parameter {TYPE_1__ hwcaps; } ;
struct spi_nor {int dev; scalar_t__ spimem; struct spi_nor_flash_parameter params; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*,int) ;
 int FUNC_4 (struct spi_nor*,int) ;
 int FUNC_5 (struct spi_nor*,int*) ;

__attribute__((used)) static int FUNC_6(struct spi_nor *VAR_1,
     const struct spi_nor_hwcaps *VAR_2)
{
 struct spi_nor_flash_parameter *VAR_3 = &VAR_1->params;
 u32 VAR_4, VAR_5;
 int VAR_6;





 VAR_5 = VAR_2->mask & VAR_3->hwcaps.mask;

 if (VAR_1->spimem) {





  FUNC_5(VAR_1, &VAR_5);
 } else {





  VAR_4 = VAR_0;
  if (VAR_5 & VAR_4) {
   FUNC_0(VAR_1->dev,
    "SPI n-n-n protocols are not supported.\n");
   VAR_5 &= ~VAR_4;
  }
 }


 VAR_6 = FUNC_4(VAR_1, VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_1->dev,
   "can't select read settings supported by both the SPI controller and memory.\n");
  return VAR_6;
 }


 VAR_6 = FUNC_3(VAR_1, VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_1->dev,
   "can't select write settings supported by both the SPI controller and memory.\n");
  return VAR_6;
 }


 VAR_6 = FUNC_2(VAR_1);
 if (VAR_6) {
  FUNC_1(VAR_1->dev,
   "can't select erase settings supported by both the SPI controller and memory.\n");
  return VAR_6;
 }

 return 0;
}
