
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {TYPE_1__* parent; void* max_timeout; scalar_t__ min_timeout; void* timeout; int * ops; int * info; } ;
struct retu_wdt_dev {int ping_work; TYPE_1__* dev; struct retu_dev* rdev; } ;
struct retu_dev {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 struct retu_dev* FUNC_1 (int ) ;
 void* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (struct platform_device*,struct watchdog_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct watchdog_device*) ;
 int FUNC_5 (struct retu_wdt_dev*) ;
 int VAR_6 ;
 int FUNC_6 (struct watchdog_device*) ;
 int FUNC_7 (struct watchdog_device*,struct retu_wdt_dev*) ;
 int FUNC_8 (struct watchdog_device*,int) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct retu_dev *VAR_8 = FUNC_1(VAR_7->dev.parent);
 bool VAR_9 = VAR_3;
 struct watchdog_device *VAR_10;
 struct retu_wdt_dev *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_2(&VAR_7->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_2(&VAR_7->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_10->info = &VAR_4;
 VAR_10->ops = &VAR_5;
 VAR_10->timeout = VAR_2;
 VAR_10->min_timeout = 0;
 VAR_10->max_timeout = VAR_2;
 VAR_10->parent = &VAR_7->dev;

 FUNC_7(VAR_10, VAR_11);
 FUNC_8(VAR_10, VAR_9);

 VAR_11->rdev = VAR_8;
 VAR_11->dev = &VAR_7->dev;

 FUNC_0(&VAR_11->ping_work, VAR_6);

 VAR_12 = FUNC_6(VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_9)
  FUNC_4(VAR_10);
 else
  FUNC_5(VAR_11);

 FUNC_3(VAR_7, VAR_10);

 return 0;
}
