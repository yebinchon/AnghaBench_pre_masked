
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int cs_gpio; int master; } ;
struct mpc512x_psc_spi {int (* cs_control ) (struct spi_device*,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct mpc512x_psc_spi* FUNC_1 (int ) ;
 int FUNC_2 (struct spi_device*,int) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_1)
{
 struct mpc512x_psc_spi *VAR_2 = FUNC_1(VAR_1->master);

 if (VAR_2->cs_control && FUNC_0(VAR_1->cs_gpio))
  VAR_2->cs_control(VAR_1, (VAR_1->mode & VAR_0) ? 0 : 1);

}
