
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tpu_pwm_device {int channel; TYPE_1__* tpu; } ;
struct TYPE_2__ {int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct tpu_pwm_device *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 u16 VAR_4;

 FUNC_2(&VAR_1->tpu->lock, VAR_3);
 VAR_4 = FUNC_0(VAR_1->tpu->base + VAR_0);

 if (VAR_2)
  VAR_4 |= 1 << VAR_1->channel;
 else
  VAR_4 &= ~(1 << VAR_1->channel);

 FUNC_1(VAR_4, VAR_1->tpu->base + VAR_0);
 FUNC_3(&VAR_1->tpu->lock, VAR_3);
}
