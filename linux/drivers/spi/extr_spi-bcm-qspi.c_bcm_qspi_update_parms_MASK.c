
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int bits_per_word; int speed_hz; } ;
struct spi_device {int mode; } ;
struct bcm_qspi_parms {int mode; int bits_per_word; int speed_hz; } ;
struct bcm_qspi {int dummy; } ;


 int FUNC_0 (struct bcm_qspi*,struct bcm_qspi_parms*) ;

__attribute__((used)) static void FUNC_1(struct bcm_qspi *VAR_0,
      struct spi_device *VAR_1,
      struct spi_transfer *VAR_2)
{
 struct bcm_qspi_parms VAR_3;

 VAR_3.speed_hz = VAR_2->speed_hz;
 VAR_3.bits_per_word = VAR_2->bits_per_word;
 VAR_3.mode = VAR_1->mode;

 FUNC_0(VAR_0, &VAR_3);
}
