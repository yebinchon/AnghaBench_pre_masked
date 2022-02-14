
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int bits_per_word; scalar_t__ speed_hz; } ;
struct spi_device {int bits_per_word; scalar_t__ max_speed_hz; struct mpc52xx_psc_spi_cs* controller_state; } ;
struct mpc52xx_psc_spi_cs {int bits_per_word; scalar_t__ speed_hz; } ;



__attribute__((used)) static int FUNC_0(struct spi_device *VAR_0,
  struct spi_transfer *VAR_1)
{
 struct mpc52xx_psc_spi_cs *VAR_2 = VAR_0->controller_state;

 VAR_2->speed_hz = (VAR_1 && VAR_1->speed_hz)
   ? VAR_1->speed_hz : VAR_0->max_speed_hz;
 VAR_2->bits_per_word = (VAR_1 && VAR_1->bits_per_word)
   ? VAR_1->bits_per_word : VAR_0->bits_per_word;
 VAR_2->bits_per_word = ((VAR_2->bits_per_word + 7) / 8) * 8;
 return 0;
}
