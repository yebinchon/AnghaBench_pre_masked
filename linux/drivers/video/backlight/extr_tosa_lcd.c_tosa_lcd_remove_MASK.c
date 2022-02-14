
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tosa_lcd_data {int i2c; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tosa_lcd_data* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct tosa_lcd_data*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct tosa_lcd_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->i2c);

 FUNC_2(VAR_1);

 return 0;
}
