
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_transfer {int speed_hz; } ;
struct spi_master {int dummy; } ;
struct mtk_spi {scalar_t__ base; TYPE_1__* dev_comp; int spi_clk; } ;
struct TYPE_2__ {scalar_t__ enhance_timing; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct mtk_spi* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct spi_master *VAR_12,
         struct spi_transfer *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18 = 0;
 struct mtk_spi *VAR_19 = FUNC_3(VAR_12);

 VAR_14 = FUNC_1(VAR_19->spi_clk);
 if (VAR_13->speed_hz < VAR_14 / 2)
  VAR_15 = FUNC_0(VAR_14, VAR_13->speed_hz);
 else
  VAR_15 = 1;

 VAR_16 = (VAR_15 + 1) / 2;
 VAR_17 = VAR_16 * 2;

 if (VAR_19->dev_comp->enhance_timing) {
  VAR_18 |= (((VAR_16 - 1) & 0xffff)
      << VAR_6);
  VAR_18 |= (((VAR_16 - 1) & 0xffff)
      << VAR_2);
  FUNC_4(VAR_18, VAR_19->base + VAR_11);
  VAR_18 |= (((VAR_17 - 1) & 0xffff)
      << VAR_0);
  VAR_18 |= (((VAR_17 - 1) & 0xffff)
      << VAR_1);
  FUNC_4(VAR_18, VAR_19->base + VAR_5);
 } else {
  VAR_18 |= (((VAR_16 - 1) & 0xff)
      << VAR_6);
  VAR_18 |= (((VAR_16 - 1) & 0xff) << VAR_7);
  VAR_18 |= (((VAR_17 - 1) & 0xff) << VAR_3);
  VAR_18 |= (((VAR_17 - 1) & 0xff) << VAR_4);
  FUNC_4(VAR_18, VAR_19->base + VAR_5);
 }

 VAR_18 = FUNC_2(VAR_19->base + VAR_10);
 VAR_18 &= ~VAR_8;
 VAR_18 |= (((VAR_17 - 1) & 0xff) << VAR_9);
 FUNC_4(VAR_18, VAR_19->base + VAR_10);
}
