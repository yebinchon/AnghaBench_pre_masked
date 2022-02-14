
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_device {int chip_select; int mode; scalar_t__ cs_gpiod; int master; struct davinci_spi_config* controller_data; } ;
struct davinci_spi_config {scalar_t__ wdelay; } ;
struct davinci_spi {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int,scalar_t__) ;
 struct davinci_spi* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_6, int VAR_7)
{
 struct davinci_spi *VAR_8;
 struct davinci_spi_config *VAR_9 = VAR_6->controller_data;
 u8 VAR_10 = VAR_6->chip_select;
 u16 VAR_11 = VAR_1;

 VAR_8 = FUNC_2(VAR_6->master);


 if (VAR_9 && VAR_9->wdelay)
  VAR_11 |= VAR_4;





 if (VAR_6->cs_gpiod) {






  if (VAR_7 == VAR_0)
   FUNC_0(VAR_6->cs_gpiod, 1);
  else
   FUNC_0(VAR_6->cs_gpiod, 0);
 } else {
  if (VAR_7 == VAR_0) {
   if (!(VAR_6->mode & VAR_5))
    VAR_11 |= VAR_3;
   VAR_11 &= ~(0x1 << VAR_10);
  }
 }

 FUNC_1(VAR_11, VAR_8->base + VAR_2 + 2);
}
