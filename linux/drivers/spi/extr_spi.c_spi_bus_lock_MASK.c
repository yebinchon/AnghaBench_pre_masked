
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int bus_lock_flag; int bus_lock_spinlock; int bus_lock_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct spi_controller *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->bus_lock_mutex);

 FUNC_1(&VAR_0->bus_lock_spinlock, VAR_1);
 VAR_0->bus_lock_flag = 1;
 FUNC_2(&VAR_0->bus_lock_spinlock, VAR_1);



 return 0;
}
