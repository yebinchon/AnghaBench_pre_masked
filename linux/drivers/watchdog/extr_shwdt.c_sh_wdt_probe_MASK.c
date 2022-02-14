
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int expires; } ;
struct sh_wdt {TYPE_4__ timer; int lock; int * base; int * clk; int * dev; } ;
struct platform_device {int id; int dev; } ;
struct TYPE_7__ {int timeout; int * parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int ) ;
 int * FUNC_5 (int *,int *) ;
 struct sh_wdt* FUNC_6 (int *,int,int ) ;
 int * FUNC_7 (struct platform_device*,int ) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,struct sh_wdt*) ;
 int FUNC_16 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_9)
{
 struct sh_wdt *VAR_10;
 int VAR_11;





 if (VAR_9->id != -1)
  return -VAR_0;

 VAR_10 = FUNC_6(&VAR_9->dev, sizeof(struct sh_wdt), VAR_2);
 if (FUNC_13(!VAR_10))
  return -VAR_1;

 VAR_10->dev = &VAR_9->dev;

 VAR_10->clk = FUNC_5(&VAR_9->dev, ((void*)0));
 if (FUNC_0(VAR_10->clk)) {




  VAR_10->clk = ((void*)0);
 }

 VAR_10->base = FUNC_7(VAR_9, 0);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 FUNC_16(&VAR_7, VAR_6);
 FUNC_15(&VAR_7, VAR_10);
 VAR_7.parent = &VAR_9->dev;

 FUNC_11(&VAR_10->lock);

 VAR_11 = FUNC_10(&VAR_7, VAR_5);
 if (FUNC_13(VAR_11)) {

  FUNC_10(&VAR_7, VAR_3);

  FUNC_4(&VAR_9->dev,
    "heartbeat value must be 1<=x<=3600, using %d\n",
    VAR_7.timeout);
 }

 FUNC_3(&VAR_9->dev, "configured with heartbeat=%d sec (nowayout=%d)\n",
   VAR_7.timeout, VAR_6);

 VAR_11 = FUNC_14(&VAR_7);
 if (FUNC_13(VAR_11)) {
  FUNC_2(&VAR_9->dev, "Can't register watchdog (err=%d)\n", VAR_11);
  return VAR_11;
 }

 FUNC_12(&VAR_10->timer, VAR_8, 0);
 VAR_10->timer.expires = FUNC_8(VAR_4);

 FUNC_3(&VAR_9->dev, "initialized.\n");

 FUNC_9(&VAR_9->dev);

 return 0;
}
