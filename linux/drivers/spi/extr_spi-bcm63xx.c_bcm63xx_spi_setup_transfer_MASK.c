
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {scalar_t__ speed_hz; } ;
struct spi_device {int dev; int master; } ;
struct bcm63xx_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__** VAR_3 ;
 int FUNC_0 (struct bcm63xx_spi*,int ) ;
 int FUNC_1 (struct bcm63xx_spi*,int,int ) ;
 int FUNC_2 (int *,char*,int,scalar_t__) ;
 struct bcm63xx_spi* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_4,
          struct spi_transfer *VAR_5)
{
 struct bcm63xx_spi *VAR_6 = FUNC_3(VAR_4->master);
 u8 VAR_7, VAR_8;
 int VAR_9;


 VAR_7 = VAR_0;


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (VAR_5->speed_hz >= VAR_3[VAR_9][0]) {
   VAR_7 = VAR_3[VAR_9][1];
   break;
  }
 }


 VAR_8 = FUNC_0(VAR_6, VAR_1);
 VAR_8 &= ~VAR_2;
 VAR_8 |= VAR_7;

 FUNC_1(VAR_6, VAR_8, VAR_1);
 FUNC_2(&VAR_4->dev, "Setting clock register to %02x (hz %d)\n",
  VAR_7, VAR_5->speed_hz);
}
