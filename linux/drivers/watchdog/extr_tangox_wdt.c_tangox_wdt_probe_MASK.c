
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int min_timeout; int max_hw_heartbeat_ms; int status; int timeout; int * ops; int * info; int * parent; } ;
struct tangox_wdt_device {int clk_rate; TYPE_1__ wdt; scalar_t__ base; scalar_t__ clk; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 struct tangox_wdt_device* FUNC_7 (int *,int,int ) ;
 scalar_t__ FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_10 (struct platform_device*,struct tangox_wdt_device*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_14 (TYPE_1__*,int ,int *) ;
 int FUNC_15 (TYPE_1__*,struct tangox_wdt_device*) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_15)
{
 struct tangox_wdt_device *VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_16 = FUNC_7(&VAR_15->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->base = FUNC_8(VAR_15, 0);
 if (FUNC_0(VAR_16->base))
  return FUNC_1(VAR_16->base);

 VAR_16->clk = FUNC_6(&VAR_15->dev, ((void*)0));
 if (FUNC_0(VAR_16->clk))
  return FUNC_1(VAR_16->clk);

 VAR_18 = FUNC_3(VAR_16->clk);
 if (VAR_18)
  return VAR_18;
 VAR_18 = FUNC_5(&VAR_15->dev,
           VAR_11, VAR_16->clk);
 if (VAR_18)
  return VAR_18;

 VAR_16->clk_rate = FUNC_2(VAR_16->clk);
 if (!VAR_16->clk_rate)
  return -VAR_1;

 VAR_16->wdt.parent = &VAR_15->dev;
 VAR_16->wdt.info = &VAR_12;
 VAR_16->wdt.ops = &VAR_13;
 VAR_16->wdt.timeout = VAR_0;
 VAR_16->wdt.min_timeout = 1;
 VAR_16->wdt.max_hw_heartbeat_ms = (VAR_4 - 1) / VAR_16->clk_rate;

 FUNC_14(&VAR_16->wdt, VAR_14, &VAR_15->dev);
 FUNC_16(&VAR_16->wdt, VAR_10);
 FUNC_15(&VAR_16->wdt, VAR_16);





 VAR_17 = FUNC_11(VAR_16->base + VAR_6);
 if (VAR_17 & VAR_7)
  FUNC_19(0, VAR_16->base + VAR_9);

 FUNC_19(VAR_8, VAR_16->base + VAR_6);





 if (FUNC_11(VAR_16->base + VAR_9)) {
  FUNC_12(VAR_5, &VAR_16->wdt.status);
  FUNC_13(&VAR_16->wdt);
 }

 FUNC_17(&VAR_16->wdt, 128);

 FUNC_18(&VAR_16->wdt);
 VAR_18 = FUNC_9(&VAR_15->dev, &VAR_16->wdt);
 if (VAR_18)
  return VAR_18;

 FUNC_10(VAR_15, VAR_16);

 FUNC_4(&VAR_15->dev, "SMP86xx/SMP87xx watchdog registered\n");

 return 0;
}
