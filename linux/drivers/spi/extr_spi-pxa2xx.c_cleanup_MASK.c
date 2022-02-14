
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int controller; } ;
struct driver_data {scalar_t__ ssp_type; int cs_gpiods; } ;
struct chip_data {scalar_t__ gpiod_cs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct chip_data*) ;
 struct driver_data* FUNC_2 (int ) ;
 struct chip_data* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_1)
{
 struct chip_data *VAR_2 = FUNC_3(VAR_1);
 struct driver_data *VAR_3 =
  FUNC_2(VAR_1->controller);

 if (!VAR_2)
  return;

 if (VAR_3->ssp_type != VAR_0 && !VAR_3->cs_gpiods &&
     VAR_2->gpiod_cs)
  FUNC_0(VAR_2->gpiod_cs);

 FUNC_1(VAR_2);
}
