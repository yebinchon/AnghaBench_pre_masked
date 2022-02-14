
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct platform_device {int name; TYPE_1__ dev; } ;
struct da9052_rtc {int da9052; int rtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,char*,int ,struct da9052_rtc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 struct da9052_rtc* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_9 (struct platform_device*,struct da9052_rtc*) ;
 int FUNC_10 (struct da9052_rtc*,char*,int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct da9052_rtc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_7(&VAR_9->dev, sizeof(struct da9052_rtc), VAR_5);
 if (!VAR_10)
  return -VAR_4;

 VAR_10->da9052 = FUNC_5(VAR_9->dev.parent);
 FUNC_9(VAR_9, VAR_10);

 VAR_11 = FUNC_3(VAR_10->da9052, VAR_2, 0xFE);
 if (VAR_11 < 0) {
  FUNC_10(VAR_10,
   "Failed to setup RTC battery charging: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_2(VAR_10->da9052, VAR_0,
    VAR_1, 0);
 if (VAR_11 != 0)
  FUNC_10(VAR_10, "Failed to disable TICKS: %d\n", VAR_11);

 FUNC_6(&VAR_9->dev, 1);
 VAR_10->rtc = FUNC_8(&VAR_9->dev, VAR_9->name,
           &VAR_8, VAR_6);

 if (FUNC_0(VAR_10->rtc))
  return FUNC_1(VAR_10->rtc);

 VAR_11 = FUNC_4(VAR_10->da9052, VAR_3, "ALM",
    VAR_7, VAR_10);
 if (VAR_11 != 0) {
  FUNC_10(VAR_10, "irq registration failed: %d\n", VAR_11);
  return VAR_11;
 }

 return 0;
}
