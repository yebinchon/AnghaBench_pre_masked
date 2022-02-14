
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int timeout ;
struct watchdog_device {int max_timeout; int timeout; int max_hw_heartbeat_ms; int status; int min_timeout; int * ops; int * info; struct device* parent; } ;
struct TYPE_4__ {int notifier_call; } ;
struct rave_sp_wdt {TYPE_2__ reboot_notifier; TYPE_1__* variant; struct watchdog_device wdd; int sp; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
typedef void nvmem_cell ;
typedef int __le16 ;
struct TYPE_3__ {int max_timeout; int min_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ) ;
 struct rave_sp_wdt* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,TYPE_2__*) ;
 int FUNC_5 (struct device*,struct watchdog_device*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,void*,int ) ;
 int FUNC_9 (size_t,int) ;
 void* FUNC_10 (struct device*,char*) ;
 int FUNC_11 (void*) ;
 void* FUNC_12 (void*,size_t*) ;
 TYPE_1__* FUNC_13 (struct device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (struct watchdog_device*) ;
 int FUNC_15 (struct watchdog_device*) ;
 int FUNC_16 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_17 (struct watchdog_device*,int) ;
 int FUNC_18 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct watchdog_device *VAR_8;
 struct rave_sp_wdt *VAR_9;
 struct nvmem_cell *VAR_10;
 __le16 VAR_11 = 0;
 int VAR_12;

 VAR_9 = FUNC_3(VAR_7, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->variant = FUNC_13(VAR_7);
 VAR_9->sp = FUNC_2(VAR_7->parent);

 VAR_8 = &VAR_9->wdd;
 VAR_8->parent = VAR_7;
 VAR_8->info = &VAR_3;
 VAR_8->ops = &VAR_4;
 VAR_8->min_timeout = VAR_9->variant->min_timeout;
 VAR_8->max_timeout = VAR_9->variant->max_timeout;
 VAR_8->status = VAR_2;
 VAR_8->timeout = 60;

 VAR_10 = FUNC_10(VAR_7, "wdt-timeout");
 if (!FUNC_0(VAR_10)) {
  size_t VAR_13;
  void *VAR_14 = FUNC_12(VAR_10, &VAR_13);

  if (!FUNC_0(VAR_14)) {
   FUNC_8(&VAR_11, VAR_14, FUNC_9(VAR_13, sizeof(VAR_11)));
   FUNC_6(VAR_14);
  }
  FUNC_11(VAR_10);
 }
 FUNC_16(VAR_8, FUNC_7(VAR_11), VAR_7);
 FUNC_17(VAR_8, 255);
 FUNC_18(VAR_8);

 VAR_9->reboot_notifier.notifier_call = VAR_5;
 VAR_12 = FUNC_4(VAR_7, &VAR_9->reboot_notifier);
 if (VAR_12) {
  FUNC_1(VAR_7, "Failed to register reboot notifier\n");
  return VAR_12;
 }





 VAR_8->max_hw_heartbeat_ms = VAR_8->max_timeout * 1000;
 VAR_12 = FUNC_14(VAR_8);
 if (VAR_12) {
  FUNC_1(VAR_7, "Watchdog didn't start\n");
  return VAR_12;
 }

 VAR_12 = FUNC_5(VAR_7, VAR_8);
 if (VAR_12) {
  FUNC_15(VAR_8);
  return VAR_12;
 }

 return 0;
}
