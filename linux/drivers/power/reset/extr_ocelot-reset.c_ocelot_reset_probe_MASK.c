
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int priority; int notifier_call; } ;
struct ocelot_reset_context {TYPE_1__ restart_handler; int cpu_ctrl; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,struct resource*) ;
 struct ocelot_reset_context* FUNC_4 (struct device*,int,int ) ;
 int VAR_3 ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct ocelot_reset_context *VAR_5;
 struct resource *VAR_6;

 struct device *VAR_7 = &VAR_4->dev;
 int VAR_8;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_4, VAR_2, 0);
 VAR_5->base = FUNC_3(VAR_7, VAR_6);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->cpu_ctrl = FUNC_7("mscc,ocelot-cpu-syscon");
 if (FUNC_0(VAR_5->cpu_ctrl))
  return FUNC_1(VAR_5->cpu_ctrl);

 VAR_5->restart_handler.notifier_call = VAR_3;
 VAR_5->restart_handler.priority = 192;
 VAR_8 = FUNC_6(&VAR_5->restart_handler);
 if (VAR_8)
  FUNC_2(VAR_7, "can't register restart notifier (err=%d)\n", VAR_8);

 return VAR_8;
}
