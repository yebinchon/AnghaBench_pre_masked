
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int max_speed_hz; struct mpc52xx_psc_spi_cs* controller_state; int master; } ;
struct mpc52xx_psc_spi_cs {int bits_per_word; int speed_hz; } ;
struct mpc52xx_psc_spi {int lock; int busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mpc52xx_psc_spi_cs* FUNC_0 (int,int ) ;
 int FUNC_1 (struct spi_device*) ;
 struct mpc52xx_psc_spi* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_3)
{
 struct mpc52xx_psc_spi *VAR_4 = FUNC_2(VAR_3->master);
 struct mpc52xx_psc_spi_cs *VAR_5 = VAR_3->controller_state;
 unsigned long VAR_6;

 if (VAR_3->bits_per_word%8)
  return -VAR_0;

 if (!VAR_5) {
  VAR_5 = FUNC_0(sizeof *VAR_5, VAR_2);
  if (!VAR_5)
   return -VAR_1;
  VAR_3->controller_state = VAR_5;
 }

 VAR_5->bits_per_word = VAR_3->bits_per_word;
 VAR_5->speed_hz = VAR_3->max_speed_hz;

 FUNC_3(&VAR_4->lock, VAR_6);
 if (!VAR_4->busy)
  FUNC_1(VAR_3);
 FUNC_4(&VAR_4->lock, VAR_6);

 return 0;
}
