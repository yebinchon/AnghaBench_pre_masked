
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int bus_lock_mutex; scalar_t__ bus_lock_flag; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct spi_controller *VAR_0)
{
 VAR_0->bus_lock_flag = 0;

 FUNC_0(&VAR_0->bus_lock_mutex);

 return 0;
}
