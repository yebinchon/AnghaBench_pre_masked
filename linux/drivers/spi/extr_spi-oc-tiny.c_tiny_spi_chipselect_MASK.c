
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiny_spi {scalar_t__ gpio_cs_count; int * gpio_cs; } ;
struct spi_device {size_t chip_select; int mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct tiny_spi* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_1, int VAR_2)
{
 struct tiny_spi *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->gpio_cs_count > 0) {
  FUNC_0(VAR_3->gpio_cs[VAR_1->chip_select],
   (VAR_1->mode & VAR_0) ? VAR_2 : !VAR_2);
 }
}
