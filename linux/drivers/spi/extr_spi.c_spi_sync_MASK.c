
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_message {int dummy; } ;
struct spi_device {TYPE_1__* controller; } ;
struct TYPE_2__ {int bus_lock_mutex; } ;


 int FUNC_0 (struct spi_device*,struct spi_message*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct spi_device *VAR_0, struct spi_message *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->controller->bus_lock_mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->controller->bus_lock_mutex);

 return VAR_2;
}
