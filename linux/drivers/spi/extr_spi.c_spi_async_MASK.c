
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_device {struct spi_controller* controller; } ;
struct spi_controller {int bus_lock_spinlock; scalar_t__ bus_lock_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_device*,struct spi_message*) ;
 int FUNC_1 (struct spi_device*,struct spi_message*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct spi_device *VAR_1, struct spi_message *VAR_2)
{
 struct spi_controller *VAR_3 = VAR_1->controller;
 int VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 != 0)
  return VAR_4;

 FUNC_2(&VAR_3->bus_lock_spinlock, VAR_5);

 if (VAR_3->bus_lock_flag)
  VAR_4 = -VAR_0;
 else
  VAR_4 = FUNC_0(VAR_1, VAR_2);

 FUNC_3(&VAR_3->bus_lock_spinlock, VAR_5);

 return VAR_4;
}
