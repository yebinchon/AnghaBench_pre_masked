
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_master {int dummy; } ;
struct spi_device {unsigned int chip_select; int mode; int cs_gpio; struct spi_master* master; } ;
struct lantiq_ssc_spi {unsigned int base_cs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct lantiq_ssc_spi*,int ,int,int ) ;
 struct lantiq_ssc_spi* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_4)
{
 struct spi_master *VAR_5 = VAR_4->master;
 struct lantiq_ssc_spi *VAR_6 = FUNC_4(VAR_5);
 unsigned int VAR_7 = VAR_4->chip_select;
 u32 VAR_8;


 if (FUNC_2(VAR_4->cs_gpio))
  return 0;

 FUNC_0(VAR_6->dev, "using internal chipselect %u\n", VAR_7);

 if (VAR_7 < VAR_6->base_cs) {
  FUNC_1(VAR_6->dev,
   "chipselect %i too small (min %i)\n", VAR_7, VAR_6->base_cs);
  return -VAR_0;
 }


 VAR_8 = 1 << ((VAR_7 - VAR_6->base_cs) + VAR_2);


 if (VAR_4->mode & VAR_3)
  VAR_8 |= 1 << (VAR_7 - VAR_6->base_cs);

 FUNC_3(VAR_6, 0, VAR_8, VAR_1);

 return 0;
}
