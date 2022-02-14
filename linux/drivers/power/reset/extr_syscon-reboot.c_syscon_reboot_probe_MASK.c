
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int priority; int notifier_call; } ;
struct syscon_reboot_context {int offset; int value; int mask; TYPE_1__ restart_handler; int map; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct syscon_reboot_context* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (int ,char*,int*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct syscon_reboot_context *VAR_5;
 struct device *VAR_6 = &VAR_4->dev;
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_5 = FUNC_3(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->map = FUNC_6(VAR_6->of_node, "regmap");
 if (FUNC_0(VAR_5->map))
  return FUNC_1(VAR_5->map);

 if (FUNC_4(VAR_4->dev.of_node, "offset", &VAR_5->offset))
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_4->dev.of_node, "value", &VAR_5->value);
 VAR_7 = FUNC_4(VAR_4->dev.of_node, "mask", &VAR_5->mask);
 if (VAR_8 && VAR_7) {
  FUNC_2(VAR_6, "unable to read 'value' and 'mask'");
  return -VAR_0;
 }

 if (VAR_8) {

  VAR_5->value = VAR_5->mask;
  VAR_5->mask = 0xFFFFFFFF;
 } else if (VAR_7) {

  VAR_5->mask = 0xFFFFFFFF;
 }

 VAR_5->restart_handler.notifier_call = VAR_3;
 VAR_5->restart_handler.priority = 192;
 VAR_9 = FUNC_5(&VAR_5->restart_handler);
 if (VAR_9)
  FUNC_2(VAR_6, "can't register restart notifier (err=%d)\n", VAR_9);

 return VAR_9;
}
