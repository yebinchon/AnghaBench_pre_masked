
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int regs; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct resource*) ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_10)
{
 int VAR_11;
 struct resource *VAR_12;

 FUNC_9(&VAR_6.timer, VAR_5, 0);

 VAR_12 = FUNC_7(VAR_10, VAR_2, 0);
 if (!VAR_12) {
  FUNC_3(&VAR_10->dev, "failed to get resources\n");
  return -VAR_0;
 }

 VAR_6.regs = FUNC_5(&VAR_10->dev, VAR_12->start,
       FUNC_8(VAR_12));
 if (!VAR_6.regs) {
  FUNC_3(&VAR_10->dev, "failed to remap I/O resources\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_0(VAR_3, VAR_7, ((void*)0));
 if (VAR_11 < 0) {
  FUNC_3(&VAR_10->dev, "failed to register wdt timer isr\n");
  return VAR_11;
 }

 if (FUNC_2(VAR_9)) {
  FUNC_2(VAR_4);
  FUNC_4(&VAR_10->dev,
   ": wdt_time value must be 1 <= wdt_time <= 256, using %d\n",
   VAR_9);
 }

 VAR_11 = FUNC_6(&VAR_8);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_10->dev, "failed to register watchdog device\n");
  goto unregister_timer;
 }

 FUNC_4(&VAR_10->dev, " started, timer margin: %d sec\n",
      VAR_4);

 return 0;

unregister_timer:
 FUNC_1(VAR_3);
 return VAR_11;
}
