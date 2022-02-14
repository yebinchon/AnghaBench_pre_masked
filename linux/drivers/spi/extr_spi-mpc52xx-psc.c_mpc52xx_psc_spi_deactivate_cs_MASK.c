
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int master; } ;
struct mpc52xx_psc_spi {int (* cs_control ) (struct spi_device*,int) ;} ;


 int VAR_0 ;
 struct mpc52xx_psc_spi* FUNC_0 (int ) ;
 int FUNC_1 (struct spi_device*,int) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_1)
{
 struct mpc52xx_psc_spi *VAR_2 = FUNC_0(VAR_1->master);

 if (VAR_2->cs_control)
  VAR_2->cs_control(VAR_1, (VAR_1->mode & VAR_0) ? 0 : 1);
}
