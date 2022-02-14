
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {struct spi_device* driver_override; TYPE_1__* controller; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* cleanup ) (struct spi_device*) ;} ;


 int FUNC_0 (struct spi_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct spi_device*) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct spi_device *VAR_1 = FUNC_3(VAR_0);


 if (VAR_1->controller->cleanup)
  VAR_1->controller->cleanup(VAR_1);

 FUNC_1(VAR_1->controller);
 FUNC_0(VAR_1->driver_override);
 FUNC_0(VAR_1);
}
