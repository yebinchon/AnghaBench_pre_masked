
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {int bootstatus; struct device* parent; } ;
struct a21_wdt_drv {TYPE_1__ wdt; int * gpios; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 unsigned int FUNC_2 (struct a21_wdt_drv*) ;
 int FUNC_3 (struct device*,char*,int,int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct a21_wdt_drv*) ;
 int FUNC_6 (struct device*,int *,int,int) ;
 struct a21_wdt_drv* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,TYPE_1__*) ;
 int FUNC_9 (struct device*,int *) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int VAR_12 ;
 int FUNC_13 (TYPE_1__*,int,struct device*) ;
 int FUNC_14 (TYPE_1__*,struct a21_wdt_drv*) ;
 int FUNC_15 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct a21_wdt_drv *VAR_15;
 unsigned int VAR_16 = 0;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_15 = FUNC_7(VAR_14, sizeof(struct a21_wdt_drv), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_17 = FUNC_9(VAR_14, ((void*)0));
 if (VAR_17 != VAR_6) {
  FUNC_3(VAR_14, "gpios DT property wrong, got %d want %d",
   VAR_17, VAR_6);
  return -VAR_0;
 }


 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  enum gpiod_flags VAR_20;

  if (VAR_19 < VAR_5)
   VAR_20 = VAR_3;
  else
   VAR_20 = VAR_4;
  VAR_15->gpios[VAR_19] = FUNC_6(VAR_14, ((void*)0), VAR_19, VAR_20);
  if (FUNC_0(VAR_15->gpios[VAR_19]))
   return FUNC_1(VAR_15->gpios[VAR_19]);

  FUNC_12(VAR_15->gpios[VAR_19], "MEN A21 Watchdog");





  if (VAR_19 < VAR_5) {
   int VAR_21;

   VAR_21 = FUNC_11(VAR_15->gpios[VAR_19]);
   FUNC_10(VAR_15->gpios[VAR_19], VAR_21);
  }
 }

 FUNC_13(&VAR_11, 30, VAR_14);
 FUNC_15(&VAR_11, VAR_12);
 FUNC_14(&VAR_11, VAR_15);
 VAR_11.parent = VAR_14;

 VAR_16 = FUNC_2(VAR_15);
 if (VAR_16 == 2)
  VAR_11.bootstatus |= VAR_8;
 else if (VAR_16 == 4)
  VAR_11.bootstatus |= VAR_7;
 else if (VAR_16 == 5)
  VAR_11.bootstatus |= VAR_10;
 else if (VAR_16 == 7)
  VAR_11.bootstatus |= VAR_9;

 VAR_15->wdt = VAR_11;
 FUNC_5(VAR_14, VAR_15);

 VAR_18 = FUNC_8(VAR_14, &VAR_11);
 if (VAR_18)
  return VAR_18;

 FUNC_4(VAR_14, "MEN A21 watchdog timer driver enabled\n");

 return 0;
}
