
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_transfer {int speed_hz; int bits_per_word; } ;
struct spi_master {int dev; } ;
struct spi_device {int mode; } ;
struct ep93xx_spi {scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct spi_master*,int ,int*,int*) ;
 struct ep93xx_spi* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct spi_master *VAR_6,
     struct spi_device *VAR_7,
     struct spi_transfer *VAR_8)
{
 struct ep93xx_spi *VAR_9 = FUNC_3(VAR_6);
 u8 VAR_10 = FUNC_0(VAR_8->bits_per_word);
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;
 u16 VAR_13;
 int VAR_14;

 VAR_14 = FUNC_2(VAR_6, VAR_8->speed_hz,
           &VAR_11, &VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_13 = VAR_12 << VAR_5;
 VAR_13 |= (VAR_7->mode & (VAR_0 | VAR_1)) << VAR_4;
 VAR_13 |= VAR_10;

 FUNC_1(&VAR_6->dev, "setup: mode %d, cpsr %d, scr %d, dss %d\n",
  VAR_7->mode, VAR_11, VAR_12, VAR_10);
 FUNC_1(&VAR_6->dev, "setup: cr0 %#x\n", VAR_13);

 FUNC_4(VAR_11, VAR_9->mmio + VAR_2);
 FUNC_4(VAR_13, VAR_9->mmio + VAR_3);

 return 0;
}
