
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rtc_device {int uie_unsupported; } ;
struct TYPE_6__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {int alarm_irq_enable; int set_alarm; int read_alarm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int) ;
 struct rtc_device* FUNC_3 (TYPE_2__*,int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_6)
{
 struct rtc_device *VAR_7;

 if (VAR_6->dev.of_node &&
     (FUNC_4(VAR_6->dev.of_node, "wakeup-source") ||
      FUNC_4(VAR_6->dev.of_node, "has-tpo") )) {
  FUNC_2(&VAR_6->dev, 1);
  VAR_3.read_alarm = VAR_2;
  VAR_3.set_alarm = VAR_4;
  VAR_3.alarm_irq_enable = VAR_5;
 }

 VAR_7 = FUNC_3(&VAR_6->dev, VAR_0, &VAR_3,
           VAR_1);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_7->uie_unsupported = 1;

 return 0;
}
