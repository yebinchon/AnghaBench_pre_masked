
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct watchdog_device {int id; TYPE_1__ reboot_nb; int status; int groups; int parent; } ;
struct device {int dummy; } ;
typedef int dev_t ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*) ;
 int VAR_0 ;
 struct device* FUNC_4 (int *,int ,int ,struct watchdog_device*,int ,char*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct device*,TYPE_1__*) ;
 int FUNC_7 (char*,int ,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct watchdog_device*,int ) ;
 int FUNC_10 (struct watchdog_device*) ;
 int VAR_1 ;
 int FUNC_11 (struct watchdog_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (struct watchdog_device*) ;

int FUNC_13(struct watchdog_device *VAR_4)
{
 struct device *VAR_5;
 dev_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(FUNC_1(VAR_2), VAR_4->id);

 VAR_7 = FUNC_9(VAR_4, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_5 = FUNC_4(&VAR_1, VAR_4->parent,
     VAR_6, VAR_4, VAR_4->groups,
     "watchdog%d", VAR_4->id);
 if (FUNC_0(VAR_5)) {
  FUNC_10(VAR_4);
  return FUNC_3(VAR_5);
 }

 VAR_7 = FUNC_12(VAR_4);
 if (VAR_7) {
  FUNC_5(&VAR_1, VAR_6);
  FUNC_10(VAR_4);
  return VAR_7;
 }

 if (FUNC_8(VAR_0, &VAR_4->status)) {
  VAR_4->reboot_nb.notifier_call = VAR_3;

  VAR_7 = FUNC_6(VAR_5, &VAR_4->reboot_nb);
  if (VAR_7) {
   FUNC_7("watchdog%d: Cannot register reboot notifier (%d)\n",
          VAR_4->id, VAR_7);
   FUNC_11(VAR_4);
  }
 }

 return VAR_7;
}
