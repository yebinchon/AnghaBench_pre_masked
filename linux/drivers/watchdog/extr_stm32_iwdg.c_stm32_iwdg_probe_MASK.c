
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int max_hw_heartbeat_ms; int min_timeout; int * ops; int * info; struct device* parent; } ;
struct stm32_iwdg {int rate; TYPE_1__* data; struct watchdog_device wdd; int regs; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int max_prescaler; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct device*,char*) ;
 struct stm32_iwdg* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct device*,struct watchdog_device*) ;
 TYPE_1__* FUNC_7 (struct device*) ;
 int FUNC_8 (struct platform_device*,struct stm32_iwdg*) ;
 int FUNC_9 (struct platform_device*,struct stm32_iwdg*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_11 (struct watchdog_device*,struct stm32_iwdg*) ;
 int FUNC_12 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct watchdog_device *VAR_11;
 struct stm32_iwdg *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_10, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->data = FUNC_7(&VAR_9->dev);
 if (!VAR_12->data)
  return -VAR_0;


 VAR_12->regs = FUNC_5(VAR_9, 0);
 if (FUNC_1(VAR_12->regs)) {
  FUNC_3(VAR_10, "Could not get resource\n");
  return FUNC_2(VAR_12->regs);
 }

 VAR_13 = FUNC_9(VAR_9, VAR_12);
 if (VAR_13)
  return VAR_13;


 VAR_11 = &VAR_12->wdd;
 VAR_11->parent = VAR_10;
 VAR_11->info = &VAR_7;
 VAR_11->ops = &VAR_8;
 VAR_11->min_timeout = FUNC_0((VAR_5 + 1) * VAR_3, VAR_12->rate);
 VAR_11->max_hw_heartbeat_ms = ((VAR_4 + 1) * VAR_12->data->max_prescaler *
        1000) / VAR_12->rate;

 FUNC_11(VAR_11, VAR_12);
 FUNC_12(VAR_11, VAR_6);
 FUNC_10(VAR_11, 0, VAR_10);

 VAR_13 = FUNC_6(VAR_10, VAR_11);
 if (VAR_13)
  return VAR_13;

 FUNC_8(VAR_9, VAR_12);

 return 0;
}
