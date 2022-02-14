
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int max_timeout; int min_timeout; int timeout; struct device* parent; int * ops; int * info; } ;
struct mei_wdt {int reg_lock; int state; TYPE_2__ wdd; TYPE_1__* cldev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mei_wdt*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,struct mei_wdt*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct mei_wdt *VAR_7)
{
 struct device *VAR_8;
 int VAR_9;

 if (!VAR_7 || !VAR_7->cldev)
  return -VAR_0;

 VAR_8 = &VAR_7->cldev->dev;

 FUNC_1(&VAR_7->reg_lock);

 if (FUNC_0(VAR_7)) {
  VAR_9 = 0;
  goto out;
 }

 VAR_7->wdd.info = &VAR_5;
 VAR_7->wdd.ops = &VAR_6;
 VAR_7->wdd.parent = VAR_8;
 VAR_7->wdd.timeout = VAR_1;
 VAR_7->wdd.min_timeout = VAR_4;
 VAR_7->wdd.max_timeout = VAR_3;

 FUNC_4(&VAR_7->wdd, VAR_7);
 FUNC_5(&VAR_7->wdd);

 VAR_9 = FUNC_3(&VAR_7->wdd);
 if (VAR_9)
  FUNC_4(&VAR_7->wdd, ((void*)0));

 VAR_7->state = VAR_2;

out:
 FUNC_2(&VAR_7->reg_lock);
 return VAR_9;
}
