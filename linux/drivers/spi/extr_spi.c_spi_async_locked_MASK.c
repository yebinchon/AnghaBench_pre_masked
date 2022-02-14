
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_device {struct spi_controller* controller; } ;
struct spi_controller {int bus_lock_spinlock; } ;


 int FUNC_0 (struct spi_device*,struct spi_message*) ;
 int FUNC_1 (struct spi_device*,struct spi_message*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct spi_device *VAR_0, struct spi_message *VAR_1)
{
 struct spi_controller *VAR_2 = VAR_0->controller;
 int VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3 != 0)
  return VAR_3;

 FUNC_2(&VAR_2->bus_lock_spinlock, VAR_4);

 VAR_3 = FUNC_0(VAR_0, VAR_1);

 FUNC_3(&VAR_2->bus_lock_spinlock, VAR_4);

 return VAR_3;

}
