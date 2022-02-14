
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct max8925_rtc_info {int rtc_dev; int irq; TYPE_1__* dev; int rtc; struct max8925_chip* chip; } ;
struct max8925_chip {int dev; int rtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*,int,...) ;
 struct max8925_chip* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,struct max8925_rtc_info*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 struct max8925_rtc_info* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int *,int ,int ,char*,struct max8925_rtc_info*) ;
 int FUNC_8 (TYPE_1__*,char*,int *,int ) ;
 int VAR_4 ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,struct max8925_rtc_info*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct max8925_chip *VAR_7 = FUNC_3(VAR_6->dev.parent);
 struct max8925_rtc_info *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_6(&VAR_6->dev, sizeof(struct max8925_rtc_info),
       VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_8->chip = VAR_7;
 VAR_8->rtc = VAR_7->rtc;
 VAR_8->dev = &VAR_6->dev;
 VAR_8->irq = FUNC_9(VAR_6, 0);

 VAR_9 = FUNC_7(&VAR_6->dev, VAR_8->irq, ((void*)0),
     VAR_5, VAR_2,
     "rtc-alarm0", VAR_8);
 if (VAR_9 < 0) {
  FUNC_2(VAR_7->dev, "Failed to request IRQ: #%d: %d\n",
   VAR_8->irq, VAR_9);
  return VAR_9;
 }

 FUNC_4(&VAR_6->dev, VAR_8);

 FUNC_10(VAR_6, VAR_8);

 FUNC_5(&VAR_6->dev, 1);

 VAR_8->rtc_dev = FUNC_8(&VAR_6->dev, "max8925-rtc",
     &VAR_4, VAR_3);
 VAR_9 = FUNC_1(VAR_8->rtc_dev);
 if (FUNC_0(VAR_8->rtc_dev)) {
  FUNC_2(&VAR_6->dev, "Failed to register RTC device: %d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
