
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_mem {TYPE_1__* spi; } ;
struct TYPE_4__ {int parent; } ;
struct spi_controller {TYPE_2__ dev; scalar_t__ auto_runtime_pm; int bus_lock_mutex; int io_mutex; } ;
struct TYPE_3__ {struct spi_controller* controller; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct spi_mem *VAR_0)
{
 struct spi_controller *VAR_1 = VAR_0->spi->controller;

 FUNC_0(&VAR_1->io_mutex);
 FUNC_0(&VAR_1->bus_lock_mutex);

 if (VAR_1->auto_runtime_pm)
  FUNC_1(VAR_1->dev.parent);
}
