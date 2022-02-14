
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct viafb_gpio_cfg {TYPE_1__* vdev; struct viafb_gpio** active_gpios; } ;
struct viafb_gpio {int vg_mask_shift; int vg_port_index; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int reg_lock; } ;


 int VAR_0 ;
 struct viafb_gpio_cfg* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_1, unsigned int VAR_2,
    int VAR_3)
{
 struct viafb_gpio_cfg *VAR_4 = FUNC_0(VAR_1);
 u8 VAR_5;
 struct viafb_gpio *VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_4->vdev->reg_lock, VAR_7);
 VAR_6 = VAR_4->active_gpios[VAR_2];
 VAR_5 = FUNC_3(VAR_0, VAR_6->vg_port_index);
 VAR_5 |= 0x40 << VAR_6->vg_mask_shift;
 if (VAR_3)
  VAR_5 |= 0x10 << VAR_6->vg_mask_shift;
 else
  VAR_5 &= ~(0x10 << VAR_6->vg_mask_shift);
 FUNC_4(VAR_0, VAR_6->vg_port_index, VAR_5);
 FUNC_2(&VAR_4->vdev->reg_lock, VAR_7);
}
