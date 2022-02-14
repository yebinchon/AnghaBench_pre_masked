
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct spi_master* master; } ;
struct tiny_spi {unsigned int gpio_cs_count; int * gpio_cs; TYPE_1__ bitbang; } ;
struct spi_master {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tiny_spi* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct spi_master*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct tiny_spi *VAR_1 = FUNC_1(VAR_0);
 struct spi_master *VAR_2 = VAR_1->bitbang.master;
 unsigned int VAR_3;

 FUNC_2(&VAR_1->bitbang);
 for (VAR_3 = 0; VAR_3 < VAR_1->gpio_cs_count; VAR_3++)
  FUNC_0(VAR_1->gpio_cs[VAR_3]);
 FUNC_3(VAR_2);
 return 0;
}
