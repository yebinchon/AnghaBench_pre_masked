
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int cs_gpio; } ;
struct img_spfi_device_data {scalar_t__ gpio_requested; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct img_spfi_device_data*) ;
 struct img_spfi_device_data* FUNC_2 (struct spi_device*) ;
 int FUNC_3 (struct spi_device*,int *) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_0)
{
 struct img_spfi_device_data *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1) {
  if (VAR_1->gpio_requested)
   FUNC_0(VAR_0->cs_gpio);
  FUNC_1(VAR_1);
  FUNC_3(VAR_0, ((void*)0));
 }
}
