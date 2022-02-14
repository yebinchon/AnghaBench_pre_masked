
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct watchdog_device {scalar_t__ timeout; scalar_t__ max_timeout; scalar_t__ min_timeout; int * ops; int * info; struct device* parent; } ;
struct ts4800_wdt {struct watchdog_device wdd; int regmap; int feed_offset; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,scalar_t__,int ) ;
 struct ts4800_wdt* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,struct watchdog_device*) ;
 int VAR_4 ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (struct device_node*,char*,int ) ;
 int FUNC_8 (struct device_node*,char*,int,int *) ;
 int FUNC_9 (struct platform_device*,struct ts4800_wdt*) ;
 int FUNC_10 (struct device_node*) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (struct watchdog_device*,scalar_t__) ;
 int FUNC_12 (struct watchdog_device*) ;
 int FUNC_13 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_14 (struct watchdog_device*,struct ts4800_wdt*) ;
 int FUNC_15 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct device_node *VAR_10 = VAR_9->of_node;
 struct device_node *VAR_11;
 struct watchdog_device *VAR_12;
 struct ts4800_wdt *VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_11 = FUNC_7(VAR_10, "syscon", 0);
 if (!VAR_11) {
  FUNC_2(VAR_9, "no syscon property\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_8(VAR_10, "syscon", 1, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_2(VAR_9, "no offset in syscon\n");
  return VAR_15;
 }


 VAR_13 = FUNC_4(VAR_9, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;


 VAR_13->feed_offset = VAR_14;
 VAR_13->regmap = FUNC_10(VAR_11);
 FUNC_6(VAR_11);
 if (FUNC_0(VAR_13->regmap)) {
  FUNC_2(VAR_9, "cannot get parent's regmap\n");
  return FUNC_1(VAR_13->regmap);
 }


 VAR_12 = &VAR_13->wdd;
 VAR_12->parent = VAR_9;
 VAR_12->info = &VAR_5;
 VAR_12->ops = &VAR_7;
 VAR_12->min_timeout = VAR_6[0].timeout;
 VAR_12->max_timeout = VAR_6[VAR_3].timeout;

 FUNC_14(VAR_12, VAR_13);
 FUNC_15(VAR_12, VAR_4);
 FUNC_13(VAR_12, 0, VAR_9);







 if (!VAR_12->timeout)
  VAR_12->timeout = VAR_12->max_timeout;
 FUNC_11(VAR_12, VAR_12->timeout);





 FUNC_12(VAR_12);

 VAR_15 = FUNC_5(VAR_9, VAR_12);
 if (VAR_15)
  return VAR_15;

 FUNC_9(VAR_8, VAR_13);

 FUNC_3(VAR_9, "initialized (timeout = %d sec, nowayout = %d)\n",
   VAR_12->timeout, VAR_4);

 return 0;
}
