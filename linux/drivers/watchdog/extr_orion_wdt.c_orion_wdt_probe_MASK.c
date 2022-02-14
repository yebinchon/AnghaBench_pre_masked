
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct platform_device {int dev; int name; } ;
struct TYPE_11__ {int min_timeout; unsigned int timeout; unsigned int max_timeout; int status; int * parent; int * ops; TYPE_8__* info; } ;
struct orion_watchdog {unsigned int clk_rate; int clk; TYPE_2__ wdt; TYPE_1__* data; } ;
struct of_device_id {TYPE_1__* data; } ;
struct TYPE_12__ {int options; } ;
struct TYPE_10__ {int (* clock_init ) (struct platform_device*,struct orion_watchdog*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 struct orion_watchdog* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int,int ,int ,int ,struct orion_watchdog*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct of_device_id* FUNC_5 (struct of_device_id*,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct platform_device*,struct orion_watchdog*) ;
 TYPE_8__ VAR_7 ;
 int VAR_8 ;
 struct of_device_id* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct platform_device*,int) ;
 int FUNC_10 (struct platform_device*,TYPE_2__*) ;
 int FUNC_11 (char*,unsigned int,char*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct platform_device*,struct orion_watchdog*) ;
 int FUNC_14 (TYPE_2__*,int ,int *) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,struct orion_watchdog*) ;
 int FUNC_17 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_12)
{
 struct orion_watchdog *VAR_13;
 const struct of_device_id *VAR_14;
 unsigned int VAR_15;
 int VAR_16, VAR_17;

 VAR_13 = FUNC_3(&VAR_12->dev, sizeof(struct orion_watchdog),
      VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_5(VAR_9, &VAR_12->dev);
 if (!VAR_14)

  VAR_14 = &VAR_9[0];

 VAR_13->wdt.info = &VAR_7;
 VAR_13->wdt.ops = &VAR_10;
 VAR_13->wdt.min_timeout = 1;
 VAR_13->data = VAR_14->data;

 VAR_16 = FUNC_7(VAR_12, VAR_13);
 if (VAR_16)
  return VAR_16;

 VAR_16 = VAR_13->data->clock_init(VAR_12, VAR_13);
 if (VAR_16) {
  FUNC_2(&VAR_12->dev, "cannot initialize clock\n");
  return VAR_16;
 }

 VAR_15 = VAR_4 / VAR_13->clk_rate;

 VAR_13->wdt.timeout = VAR_15;
 VAR_13->wdt.max_timeout = VAR_15;
 VAR_13->wdt.parent = &VAR_12->dev;
 FUNC_14(&VAR_13->wdt, VAR_5, &VAR_12->dev);

 FUNC_10(VAR_12, &VAR_13->wdt);
 FUNC_16(&VAR_13->wdt, VAR_13);







 if (!FUNC_6(&VAR_13->wdt))
  FUNC_8(&VAR_13->wdt);
 else
  FUNC_12(VAR_3, &VAR_13->wdt.status);


 VAR_17 = FUNC_9(VAR_12, 0);
 if (VAR_17 > 0) {




  VAR_16 = FUNC_4(&VAR_12->dev, VAR_17, VAR_8, 0,
           VAR_12->name, VAR_13);
  if (VAR_16 < 0) {
   FUNC_2(&VAR_12->dev, "failed to request IRQ\n");
   goto disable_clk;
  }
 }


 VAR_17 = FUNC_9(VAR_12, 1);
 if (VAR_17 > 0) {
  VAR_7.options |= VAR_2;
  VAR_16 = FUNC_4(&VAR_12->dev, VAR_17, VAR_11,
           0, VAR_12->name, VAR_13);
  if (VAR_16 < 0) {
   FUNC_2(&VAR_12->dev, "failed to request IRQ\n");
   goto disable_clk;
  }
 }


 FUNC_17(&VAR_13->wdt, VAR_6);
 VAR_16 = FUNC_15(&VAR_13->wdt);
 if (VAR_16)
  goto disable_clk;

 FUNC_11("Initial timeout %d sec%s\n",
  VAR_13->wdt.timeout, VAR_6 ? ", nowayout" : "");
 return 0;

disable_clk:
 FUNC_0(VAR_13->clk);
 FUNC_1(VAR_13->clk);
 return VAR_16;
}
