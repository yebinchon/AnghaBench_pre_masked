
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pwm_device {size_t hwpwm; } ;
struct meson_pwm {int lock; scalar_t__ base; } ;
struct TYPE_2__ {int pwm_en_mask; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct meson_pwm *VAR_2, struct pwm_device *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_1(&VAR_2->lock, VAR_4);

 VAR_5 = FUNC_0(VAR_2->base + VAR_0);
 VAR_5 &= ~VAR_1[VAR_3->hwpwm].pwm_en_mask;
 FUNC_3(VAR_5, VAR_2->base + VAR_0);

 FUNC_2(&VAR_2->lock, VAR_4);
}
