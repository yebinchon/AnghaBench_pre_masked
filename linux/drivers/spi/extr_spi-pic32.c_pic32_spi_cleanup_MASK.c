
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int cs_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct spi_device *VAR_1)
{

 FUNC_0(VAR_1->cs_gpio, !(VAR_1->mode & VAR_0));
}
