
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int chip_select; } ;
struct altera_spi {scalar_t__ base; int imr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 struct altera_spi* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_3, bool VAR_4)
{
 struct altera_spi *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4) {
  VAR_5->imr &= ~VAR_1;
  FUNC_2(VAR_5->imr, VAR_5->base + VAR_0);
  FUNC_2(0, VAR_5->base + VAR_2);
 } else {
  FUNC_2(FUNC_0(VAR_3->chip_select), VAR_5->base + VAR_2);
  VAR_5->imr |= VAR_1;
  FUNC_2(VAR_5->imr, VAR_5->base + VAR_0);
 }
}
