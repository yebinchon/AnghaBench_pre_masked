
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct palmas_rtc {int irq; int rtc; TYPE_1__* dev; } ;
struct palmas {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 struct palmas* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 struct palmas_rtc* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int *,int ,int,int ,struct palmas_rtc*) ;
 int FUNC_8 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_9 (scalar_t__,char*) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (struct palmas*,int ,int ,unsigned int,unsigned int) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct palmas_rtc*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_14)
{
 struct palmas *VAR_15 = FUNC_3(VAR_14->dev.parent);
 struct palmas_rtc *VAR_16 = ((void*)0);
 int VAR_17;
 bool VAR_18 = 0;
 bool VAR_19 = 0;

 if (VAR_14->dev.of_node) {
  VAR_18 = FUNC_9(VAR_14->dev.of_node,
     "ti,backup-battery-chargeable");
  VAR_19 = FUNC_9(VAR_14->dev.of_node,
     "ti,backup-battery-charge-high-current");
 }

 VAR_16 = FUNC_6(&VAR_14->dev, sizeof(struct palmas_rtc),
   VAR_1);
 if (!VAR_16)
  return -VAR_0;


 VAR_17 = FUNC_10(&VAR_14->dev);
 if (VAR_17 < 0) {
  FUNC_2(&VAR_14->dev, "clear RTC int failed, err = %d\n", VAR_17);
  return VAR_17;
 }

 VAR_16->dev = &VAR_14->dev;
 FUNC_13(VAR_14, VAR_16);

 if (VAR_18) {
  unsigned VAR_20 = VAR_5;

  if (VAR_19)
   VAR_20 = 0;

  VAR_17 = FUNC_11(VAR_15, VAR_7,
   VAR_4,
   VAR_5, VAR_20);
  if (VAR_17 < 0) {
   FUNC_2(&VAR_14->dev,
    "BACKUP_BATTERY_CTRL update failed, %d\n", VAR_17);
   return VAR_17;
  }

  VAR_17 = FUNC_11(VAR_15, VAR_7,
   VAR_4,
   VAR_6,
   VAR_6);
  if (VAR_17 < 0) {
   FUNC_2(&VAR_14->dev,
    "BACKUP_BATTERY_CTRL update failed, %d\n", VAR_17);
   return VAR_17;
  }
 }


 VAR_17 = FUNC_11(VAR_15, VAR_8, VAR_9,
   VAR_10,
   VAR_10);
 if (VAR_17 < 0) {
  FUNC_2(&VAR_14->dev, "RTC_CTRL write failed, err = %d\n", VAR_17);
  return VAR_17;
 }

 VAR_16->irq = FUNC_12(VAR_14, 0);

 FUNC_5(&VAR_14->dev, 1);
 VAR_16->rtc = FUNC_8(&VAR_14->dev, VAR_14->name,
    &VAR_13, VAR_11);
 if (FUNC_0(VAR_16->rtc)) {
  VAR_17 = FUNC_1(VAR_16->rtc);
  FUNC_2(&VAR_14->dev, "RTC register failed, err = %d\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_7(&VAR_14->dev, VAR_16->irq, ((void*)0),
   VAR_12,
   VAR_3 | VAR_2,
   FUNC_4(&VAR_14->dev), VAR_16);
 if (VAR_17 < 0) {
  FUNC_2(&VAR_14->dev, "IRQ request failed, err = %d\n", VAR_17);
  return VAR_17;
 }

 return 0;
}
