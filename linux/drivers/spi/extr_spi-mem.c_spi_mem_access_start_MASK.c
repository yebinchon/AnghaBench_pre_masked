
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_mem {TYPE_1__* spi; } ;
struct TYPE_4__ {int parent; } ;
struct spi_controller {int io_mutex; int bus_lock_mutex; TYPE_2__ dev; scalar_t__ auto_runtime_pm; } ;
struct TYPE_3__ {struct spi_controller* controller; } ;


 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_4(struct spi_mem *VAR_0)
{
 struct spi_controller *VAR_1 = VAR_0->spi->controller;





 FUNC_3(VAR_1);

 if (VAR_1->auto_runtime_pm) {
  int VAR_2;

  VAR_2 = FUNC_2(VAR_1->dev.parent);
  if (VAR_2 < 0) {
   FUNC_0(&VAR_1->dev, "Failed to power device: %d\n",
    VAR_2);
   return VAR_2;
  }
 }

 FUNC_1(&VAR_1->bus_lock_mutex);
 FUNC_1(&VAR_1->io_mutex);

 return 0;
}
