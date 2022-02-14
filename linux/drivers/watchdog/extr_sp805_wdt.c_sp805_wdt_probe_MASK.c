
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int status; int timeout; TYPE_9__* parent; int * ops; int * info; } ;
struct sp805_wdt {TYPE_1__ wdd; int lock; struct amba_device* adev; int rate; int clk; int base; } ;
struct amba_id {int dummy; } ;
struct TYPE_18__ {scalar_t__ of_node; } ;
struct amba_device {TYPE_9__ dev; int res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct amba_device*,struct sp805_wdt*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_9__*,char*) ;
 int FUNC_5 (TYPE_9__*,char*) ;
 int FUNC_6 (TYPE_9__*,char*,int *) ;
 int FUNC_7 (TYPE_9__*,int *) ;
 int FUNC_8 (TYPE_9__*,int *) ;
 struct sp805_wdt* FUNC_9 (TYPE_9__*,int,int ) ;
 scalar_t__ FUNC_10 (TYPE_9__*) ;
 int VAR_5 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*,int ,TYPE_9__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,struct sp805_wdt*) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_20 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_21(struct amba_device *VAR_8, const struct amba_id *VAR_9)
{
 struct sp805_wdt *VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_9(&VAR_8->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto err;
 }

 VAR_10->base = FUNC_8(&VAR_8->dev, &VAR_8->res);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 if (VAR_8->dev.of_node) {
  VAR_10->clk = FUNC_7(&VAR_8->dev, ((void*)0));
  if (FUNC_0(VAR_10->clk)) {
   FUNC_4(&VAR_8->dev, "Clock not found\n");
   return FUNC_1(VAR_10->clk);
  }
  VAR_10->rate = FUNC_3(VAR_10->clk);
 } else if (FUNC_10(&VAR_8->dev)) {





  FUNC_6(&VAR_8->dev, "clock-frequency",
      &VAR_10->rate);
  if (!VAR_10->rate) {
   FUNC_4(&VAR_8->dev, "no clock-frequency property\n");
   return -VAR_1;
  }
 }

 VAR_10->adev = VAR_8;
 VAR_10->wdd.info = &VAR_6;
 VAR_10->wdd.ops = &VAR_7;
 VAR_10->wdd.parent = &VAR_8->dev;

 FUNC_12(&VAR_10->lock);
 FUNC_16(&VAR_10->wdd, VAR_5);
 FUNC_15(&VAR_10->wdd, VAR_10);
 FUNC_17(&VAR_10->wdd, 128);





 VAR_10->wdd.timeout = VAR_0;
 FUNC_13(&VAR_10->wdd, 0, &VAR_8->dev);
 FUNC_20(&VAR_10->wdd, VAR_10->wdd.timeout);





 if (FUNC_19(&VAR_10->wdd)) {
  FUNC_18(&VAR_10->wdd);
  FUNC_11(VAR_4, &VAR_10->wdd.status);
 }

 VAR_11 = FUNC_14(&VAR_10->wdd);
 if (VAR_11)
  goto err;
 FUNC_2(VAR_8, VAR_10);

 FUNC_5(&VAR_8->dev, "registration successful\n");
 return 0;

err:
 FUNC_4(&VAR_8->dev, "Probe Failed!!!\n");
 return VAR_11;
}
