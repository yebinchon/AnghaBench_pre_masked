
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int status; int timeout; struct device* parent; int min_hw_heartbeat_ms; int max_timeout; int min_timeout; int * ops; int * info; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct da9063 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct da9063*) ;
 int FUNC_1 (struct watchdog_device*,int ) ;
 int FUNC_2 (struct da9063*,int ) ;
 struct da9063* FUNC_3 (int ) ;
 struct watchdog_device* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,struct watchdog_device*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_8 (struct watchdog_device*,struct da9063*) ;
 int FUNC_9 (struct watchdog_device*,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct da9063 *VAR_13;
 struct watchdog_device *VAR_14;

 if (!VAR_12->parent)
  return -VAR_4;

 VAR_13 = FUNC_3(VAR_12->parent);
 if (!VAR_13)
  return -VAR_4;

 VAR_14 = FUNC_4(VAR_12, sizeof(*VAR_14), VAR_6);
 if (!VAR_14)
  return -VAR_5;

 VAR_14->info = &VAR_9;
 VAR_14->ops = &VAR_10;
 VAR_14->min_timeout = VAR_3;
 VAR_14->max_timeout = VAR_2;
 VAR_14->min_hw_heartbeat_ms = VAR_0;
 VAR_14->parent = VAR_12;
 VAR_14->status = VAR_7;

 FUNC_9(VAR_14, 128);
 FUNC_8(VAR_14, VAR_13);


 VAR_14->timeout = VAR_1;
 FUNC_7(VAR_14, 0, VAR_12);
 FUNC_1(VAR_14, VAR_14->timeout);


 if (FUNC_0(VAR_13)) {
  FUNC_2(VAR_13, VAR_14->timeout);
  FUNC_6(VAR_8, &VAR_14->status);
 }

 return FUNC_5(VAR_12, VAR_14);
}
