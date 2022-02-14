
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct rtc_device {TYPE_2__ dev; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* alarm_irq_enable ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rtc_device *VAR_0)
{
 if (!VAR_0->ops || !VAR_0->ops->alarm_irq_enable)
  return;

 VAR_0->ops->alarm_irq_enable(VAR_0->dev.parent, 0);
 FUNC_1(0, 0);
}
