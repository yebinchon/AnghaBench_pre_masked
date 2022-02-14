
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; int min_timeout; int max_timeout; struct device* parent; scalar_t__ status; int * ops; int * info; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct watchdog_device* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device*,struct watchdog_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct platform_device*,struct watchdog_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct watchdog_device *VAR_7;

 VAR_7 = FUNC_0(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->info = &VAR_3;
 VAR_7->ops = &VAR_4;
 VAR_7->status = 0;
 VAR_7->timeout = 30;
 VAR_7->min_timeout = 1;
 VAR_7->max_timeout = 30;
 VAR_7->parent = VAR_6;

 FUNC_4(VAR_7, VAR_2);
 FUNC_2(VAR_5, VAR_7);

 FUNC_3(VAR_7);

 return FUNC_1(VAR_6, VAR_7);
}
