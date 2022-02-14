
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mul; int div; int max_usec; } ;
struct vnic_dev {TYPE_1__ intr_coal_timer_info; } ;


 int FUNC_0 (struct vnic_dev*,int) ;

void FUNC_1(struct vnic_dev *VAR_0)
{

 VAR_0->intr_coal_timer_info.mul = 2;
 VAR_0->intr_coal_timer_info.div = 3;
 VAR_0->intr_coal_timer_info.max_usec =
  FUNC_0(VAR_0, 0xffff);
}
