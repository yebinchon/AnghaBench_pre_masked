
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int cs_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4 != VAR_0;
 int VAR_6 = !(VAR_3->mode & VAR_1);

 if (VAR_3->mode & VAR_2)
  return;

 if (!FUNC_0(VAR_3->cs_gpio))
  return;

 FUNC_1(VAR_3->cs_gpio, VAR_6 ^ VAR_5);
}
