
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int controller; } ;
struct driver_data {scalar_t__ ssp_type; } ;
struct chip_data {int gpio_cs_inverted; scalar_t__ gpiod_cs; int (* cs_control ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct driver_data*) ;
 unsigned long VAR_4 ;
 int FUNC_3 (struct spi_device*,int) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (struct driver_data*,int ) ;
 struct driver_data* FUNC_6 (int ) ;
 struct chip_data* FUNC_7 (struct spi_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct spi_device *VAR_5)
{
 struct chip_data *VAR_6 = FUNC_7(VAR_5);
 struct driver_data *VAR_7 =
  FUNC_6(VAR_5->controller);
 unsigned long VAR_8;

 if (VAR_7->ssp_type == VAR_0)
  return;


 VAR_8 = VAR_4 + FUNC_4(10);
 while (FUNC_5(VAR_7, VAR_2) & VAR_3 &&
        !FUNC_9(VAR_4, VAR_8))
  FUNC_0();

 if (VAR_6->cs_control) {
  VAR_6->cs_control(VAR_1);
  return;
 }

 if (VAR_6->gpiod_cs) {
  FUNC_1(VAR_6->gpiod_cs, !VAR_6->gpio_cs_inverted);
  return;
 }

 if (FUNC_2(VAR_7))
  FUNC_3(VAR_5, 0);
}
