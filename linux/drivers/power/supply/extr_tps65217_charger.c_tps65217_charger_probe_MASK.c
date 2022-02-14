
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tps65217_charger {TYPE_1__* dev; struct task_struct* poll_task; struct task_struct* psy; struct tps65217* tps; } ;
struct tps65217 {int dummy; } ;
struct task_struct {int dummy; } ;
struct power_supply_config {struct tps65217_charger* drv_data; int of_node; } ;
struct TYPE_5__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int VAR_2 ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct tps65217* FUNC_3 (int ) ;
 struct tps65217_charger* FUNC_4 (TYPE_1__*,int,int ) ;
 struct task_struct* FUNC_5 (TYPE_1__*,int *,struct power_supply_config*) ;
 int FUNC_6 (TYPE_1__*,int,int *,int (*) (int,struct tps65217_charger*),int ,char*,struct tps65217_charger*) ;
 struct task_struct* FUNC_7 (int ,struct tps65217_charger*,char*) ;
 int FUNC_8 (struct platform_device*,char*) ;
 int FUNC_9 (struct platform_device*,struct tps65217_charger*) ;
 int VAR_3 ;
 int FUNC_10 (int,struct tps65217_charger*) ;
 int VAR_4 ;
 int FUNC_11 (struct tps65217_charger*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct tps65217 *VAR_6 = FUNC_3(VAR_5->dev.parent);
 struct tps65217_charger *VAR_7;
 struct power_supply_config VAR_8 = {};
 struct task_struct *VAR_9;
 int VAR_10[VAR_2];
 int VAR_11;
 int VAR_12;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_9(VAR_5, VAR_7);
 VAR_7->tps = VAR_6;
 VAR_7->dev = &VAR_5->dev;

 VAR_8.of_node = VAR_5->dev.of_node;
 VAR_8.drv_data = VAR_7;

 VAR_7->psy = FUNC_5(&VAR_5->dev,
        &VAR_3,
        &VAR_8);
 if (FUNC_0(VAR_7->psy)) {
  FUNC_2(&VAR_5->dev, "failed: power supply register\n");
  return FUNC_1(VAR_7->psy);
 }

 VAR_10[0] = FUNC_8(VAR_5, "USB");
 VAR_10[1] = FUNC_8(VAR_5, "AC");

 VAR_11 = FUNC_11(VAR_7);
 if (VAR_11 < 0) {
  FUNC_2(VAR_7->dev, "charger config failed, err %d\n", VAR_11);
  return VAR_11;
 }


 if (VAR_10[0] < 0 || VAR_10[1] < 0) {
  VAR_9 = FUNC_7(VAR_4,
     VAR_7, "ktps65217charger");
  if (FUNC_0(VAR_9)) {
   VAR_11 = FUNC_1(VAR_9);
   FUNC_2(VAR_7->dev,
    "Unable to run kthread err %d\n", VAR_11);
   return VAR_11;
  }

  VAR_7->poll_task = VAR_9;
  return 0;
 }


 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_11 = FUNC_6(&VAR_5->dev, VAR_10[VAR_12], ((void*)0),
      FUNC_10,
      0, "tps65217-charger",
      VAR_7);
  if (VAR_11) {
   FUNC_2(VAR_7->dev,
    "Unable to register irq %d err %d\n", VAR_10[VAR_12],
    VAR_11);
   return VAR_11;
  }


  FUNC_10(-1, VAR_7);
 }

 return 0;
}
