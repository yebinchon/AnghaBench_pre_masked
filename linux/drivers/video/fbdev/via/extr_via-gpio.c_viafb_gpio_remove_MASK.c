
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_6__ {int ngpio; } ;
struct TYPE_5__ {TYPE_1__* vdev; TYPE_3__ gpio_chip; int * active_gpios; } ;
struct TYPE_4__ {int reg_lock; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;
 if (VAR_0.gpio_chip.ngpio > 0) {
  FUNC_0(&VAR_0.gpio_chip);
 }



 FUNC_1(&VAR_0.vdev->reg_lock, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0.gpio_chip.ngpio; VAR_4 += 2)
  FUNC_3(VAR_0.active_gpios[VAR_4]);
 VAR_0.gpio_chip.ngpio = 0;
 FUNC_2(&VAR_0.vdev->reg_lock, VAR_3);
 return 0;
}
