
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct sched_watchdog {int id; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sched_watchdog*) ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int ,int ) ;
 int FUNC_3 (struct device*,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct sched_watchdog VAR_9 = { .id = ~0 };
 int VAR_10 = FUNC_0(VAR_3, &VAR_9);

 if (VAR_10 == -VAR_2) {
  FUNC_1(VAR_8, "watchdog not supported by hypervisor\n");
  return -VAR_1;
 }

 if (VAR_10 != -VAR_0) {
  FUNC_1(VAR_8, "unexpected hypervisor error (%d)\n", VAR_10);
  return -VAR_1;
 }

 FUNC_4(&VAR_6, VAR_5, ((void*)0));
 FUNC_5(&VAR_6, VAR_4);
 FUNC_6(&VAR_6);
 FUNC_7(&VAR_6);

 VAR_10 = FUNC_3(VAR_8, &VAR_6);
 if (VAR_10)
  return VAR_10;

 FUNC_2(VAR_8, "initialized (timeout=%ds, nowayout=%d)\n",
   VAR_6.timeout, VAR_4);

 return 0;
}
