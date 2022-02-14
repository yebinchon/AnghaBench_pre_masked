
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct rc5t583_rtc {int rtc; } ;
struct rc5t583_platform_data {int irq_base; } ;
struct rc5t583 {int dev; int regmap; } ;
struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_1__ dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct rc5t583* FUNC_3 (int ) ;
 struct rc5t583_platform_data* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 struct rc5t583_rtc* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int,int *,int ,int ,char*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_10 (struct platform_device*,struct rc5t583_rtc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_10)
{
 struct rc5t583 *VAR_11 = FUNC_3(VAR_10->dev.parent);
 struct rc5t583_rtc *VAR_12;
 struct rc5t583_platform_data *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_7(&VAR_10->dev, sizeof(struct rc5t583_rtc),
   VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_10(VAR_10, VAR_12);


 VAR_14 = FUNC_11(VAR_11->regmap, VAR_6, 0);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_14 = FUNC_11(VAR_11->regmap, VAR_5, 0);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_10->dev, "unable to program rtc_adjust reg\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_4(VAR_11->dev);
 VAR_15 = VAR_13->irq_base;
 if (VAR_15 <= 0) {
  FUNC_5(&VAR_10->dev, "Wake up is not possible as irq = %d\n",
   VAR_15);
  return VAR_14;
 }

 VAR_15 += VAR_4;
 VAR_14 = FUNC_8(&VAR_10->dev, VAR_15, ((void*)0),
  VAR_8, VAR_3,
  "rtc-rc5t583", &VAR_10->dev);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_10->dev, "IRQ is not free.\n");
  return VAR_14;
 }
 FUNC_6(&VAR_10->dev, 1);

 VAR_12->rtc = FUNC_9(&VAR_10->dev, VAR_10->name,
  &VAR_9, VAR_7);
 if (FUNC_0(VAR_12->rtc)) {
  VAR_14 = FUNC_1(VAR_12->rtc);
  FUNC_2(&VAR_10->dev, "RTC device register: err %d\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
