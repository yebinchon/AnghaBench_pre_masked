
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct spi_message {struct spi_device* spi; } ;
struct spi_master {int dummy; } ;
struct spi_device {int mode; size_t chip_select; struct mtk_chip_config* controller_data; } ;
struct mtk_spi {int* pad_sel; scalar_t__ base; TYPE_1__* dev_comp; } ;
struct mtk_chip_config {scalar_t__ sample_sel; scalar_t__ cs_pol; } ;
struct TYPE_2__ {scalar_t__ need_pad_sel; scalar_t__ enhance_timing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (scalar_t__) ;
 struct mtk_spi* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct spi_master *VAR_18,
       struct spi_message *VAR_19)
{
 u16 VAR_20, VAR_21;
 u32 VAR_22;
 struct spi_device *VAR_23 = VAR_19->spi;
 struct mtk_chip_config *VAR_24 = VAR_23->controller_data;
 struct mtk_spi *VAR_25 = FUNC_1(VAR_18);

 VAR_20 = VAR_23->mode & VAR_14 ? 1 : 0;
 VAR_21 = VAR_23->mode & VAR_15 ? 1 : 0;

 VAR_22 = FUNC_0(VAR_25->base + VAR_6);
 if (VAR_20)
  VAR_22 |= VAR_0;
 else
  VAR_22 &= ~VAR_0;
 if (VAR_21)
  VAR_22 |= VAR_1;
 else
  VAR_22 &= ~VAR_1;


 if (VAR_23->mode & VAR_16) {
  VAR_22 &= ~VAR_11;
  VAR_22 &= ~VAR_7;
 } else {
  VAR_22 |= VAR_11;
  VAR_22 |= VAR_7;
 }






 VAR_22 |= VAR_13;
 VAR_22 |= VAR_9;


 if (VAR_25->dev_comp->enhance_timing) {
  if (VAR_24->cs_pol)
   VAR_22 |= VAR_2;
  else
   VAR_22 &= ~VAR_2;
  if (VAR_24->sample_sel)
   VAR_22 |= VAR_10;
  else
   VAR_22 &= ~VAR_10;
 }


 VAR_22 |= VAR_4 | VAR_5;


 VAR_22 &= ~(VAR_12 | VAR_8);


 VAR_22 &= ~VAR_3;

 FUNC_2(VAR_22, VAR_25->base + VAR_6);


 if (VAR_25->dev_comp->need_pad_sel)
  FUNC_2(VAR_25->pad_sel[VAR_23->chip_select],
         VAR_25->base + VAR_17);

 return 0;
}
