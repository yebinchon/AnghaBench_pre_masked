
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {int max_timeout; struct device* parent; int timeout; int min_timeout; int * ops; int * info; } ;
struct bcm7038_watchdog {int rate; TYPE_1__ wdd; int * clk; int * base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int ,int *) ;
 int * FUNC_6 (struct device*,int *) ;
 struct bcm7038_watchdog* FUNC_7 (struct device*,int,int ) ;
 int * FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct device*,TYPE_1__*) ;
 int FUNC_10 (struct platform_device*,struct bcm7038_watchdog*) ;
 int FUNC_11 (TYPE_1__*,struct bcm7038_watchdog*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct bcm7038_watchdog *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_7(VAR_9, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_10(VAR_8, VAR_10);

 VAR_10->base = FUNC_8(VAR_8, 0);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_10->clk = FUNC_6(VAR_9, ((void*)0));

 if (!FUNC_0(VAR_10->clk)) {
  VAR_11 = FUNC_3(VAR_10->clk);
  if (VAR_11)
   return VAR_11;
  VAR_11 = FUNC_5(VAR_9,
            VAR_5,
            VAR_10->clk);
  if (VAR_11)
   return VAR_11;
  VAR_10->rate = FUNC_2(VAR_10->clk);

  if (!VAR_10->rate)
   VAR_10->rate = VAR_2;
 } else {
  VAR_10->rate = VAR_2;
  VAR_10->clk = ((void*)0);
 }

 VAR_10->wdd.info = &VAR_6;
 VAR_10->wdd.ops = &VAR_7;
 VAR_10->wdd.min_timeout = VAR_4;
 VAR_10->wdd.timeout = VAR_3;
 VAR_10->wdd.max_timeout = 0xffffffff / VAR_10->rate;
 VAR_10->wdd.parent = VAR_9;
 FUNC_11(&VAR_10->wdd, VAR_10);

 FUNC_12(&VAR_10->wdd);
 FUNC_13(&VAR_10->wdd);
 VAR_11 = FUNC_9(VAR_9, &VAR_10->wdd);
 if (VAR_11)
  return VAR_11;

 FUNC_4(VAR_9, "Registered BCM7038 Watchdog\n");

 return 0;
}
