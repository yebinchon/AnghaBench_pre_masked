
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viafb_gpio_cfg {TYPE_1__* vdev; struct viafb_gpio** active_gpios; } ;
struct viafb_gpio {int vg_mask_shift; int vg_port_index; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int reg_lock; } ;


 int VAR_0 ;
 struct viafb_gpio_cfg* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct viafb_gpio_cfg *VAR_3 = FUNC_0(VAR_1);
 struct viafb_gpio *VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_3->vdev->reg_lock, VAR_5);
 VAR_4 = VAR_3->active_gpios[VAR_2];
 FUNC_3(VAR_0, VAR_4->vg_port_index, 0,
   0x40 << VAR_4->vg_mask_shift);
 FUNC_2(&VAR_3->vdev->reg_lock, VAR_5);
 return 0;
}
