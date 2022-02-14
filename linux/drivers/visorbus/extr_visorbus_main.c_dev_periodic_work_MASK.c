
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct visor_driver {int (* channel_interrupt ) (struct visor_device*) ;} ;
struct TYPE_2__ {int driver; } ;
struct visor_device {int timer; TYPE_1__ device; } ;
struct timer_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct visor_device* VAR_1 ;
 struct visor_device* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct visor_device*) ;
 int VAR_3 ;
 struct visor_driver* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct visor_device *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 struct visor_driver *VAR_6 = FUNC_3(VAR_5->device.driver);

 VAR_6->channel_interrupt(VAR_5);
 FUNC_1(&VAR_5->timer, VAR_2 + VAR_0);
}
