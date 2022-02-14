
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {scalar_t__ controller; scalar_t__ chip_select; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct spi_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, void *VAR_2)
{
 struct spi_device *VAR_3 = FUNC_0(VAR_1);
 struct spi_device *VAR_4 = VAR_2;

 if (VAR_3->controller == VAR_4->controller &&
     VAR_3->chip_select == VAR_4->chip_select)
  return -VAR_0;
 return 0;
}
