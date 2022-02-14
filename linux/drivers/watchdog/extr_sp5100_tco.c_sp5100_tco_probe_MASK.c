
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int min_timeout; int max_timeout; int timeout; int * ops; int * info; struct device* parent; } ;
struct sp5100_tco {struct watchdog_device wdd; int tco_reg_layout; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ,int ) ;
 struct sp5100_tco* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device*,struct watchdog_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct device*,struct watchdog_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct watchdog_device*,int ,int *) ;
 int FUNC_6 (struct watchdog_device*,struct sp5100_tco*) ;
 int FUNC_7 (struct watchdog_device*,int ) ;
 int FUNC_8 (struct watchdog_device*) ;
 int FUNC_9 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct watchdog_device *VAR_10;
 struct sp5100_tco *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(VAR_9, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->tco_reg_layout = FUNC_4(VAR_5);

 VAR_10 = &VAR_11->wdd;
 VAR_10->parent = VAR_9;
 VAR_10->info = &VAR_6;
 VAR_10->ops = &VAR_7;
 VAR_10->timeout = VAR_2;
 VAR_10->min_timeout = 1;
 VAR_10->max_timeout = 0xffff;

 FUNC_5(VAR_10, VAR_3, ((void*)0));
 FUNC_7(VAR_10, VAR_4);
 FUNC_8(VAR_10);
 FUNC_9(VAR_10);
 FUNC_6(VAR_10, VAR_11);

 VAR_12 = FUNC_3(VAR_9, VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_9, VAR_10);
 if (VAR_12)
  return VAR_12;


 FUNC_0(VAR_9, "initialized. heartbeat=%d sec (nowayout=%d)\n",
   VAR_10->timeout, VAR_4);

 return 0;
}
