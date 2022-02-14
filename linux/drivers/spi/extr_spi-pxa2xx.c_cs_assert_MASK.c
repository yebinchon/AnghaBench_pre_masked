
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int controller; } ;
struct driver_data {scalar_t__ ssp_type; } ;
struct chip_data {int gpio_cs_inverted; scalar_t__ gpiod_cs; int (* cs_control ) (int ) ;int frm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct driver_data*) ;
 int FUNC_2 (struct spi_device*,int) ;
 int FUNC_3 (struct driver_data*,int ,int ) ;
 struct driver_data* FUNC_4 (int ) ;
 struct chip_data* FUNC_5 (struct spi_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct spi_device *VAR_3)
{
 struct chip_data *VAR_4 = FUNC_5(VAR_3);
 struct driver_data *VAR_5 =
  FUNC_4(VAR_3->controller);

 if (VAR_5->ssp_type == VAR_0) {
  FUNC_3(VAR_5, VAR_2, VAR_4->frm);
  return;
 }

 if (VAR_4->cs_control) {
  VAR_4->cs_control(VAR_1);
  return;
 }

 if (VAR_4->gpiod_cs) {
  FUNC_0(VAR_4->gpiod_cs, VAR_4->gpio_cs_inverted);
  return;
 }

 if (FUNC_1(VAR_5))
  FUNC_2(VAR_3, 1);
}
