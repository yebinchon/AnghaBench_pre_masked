
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct max77620_therm_info {scalar_t__ irq_tjalarm1; scalar_t__ irq_tjalarm2; int tz_device; int rmap; TYPE_1__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 struct max77620_therm_info* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int *,int ,int,int ,struct max77620_therm_info*) ;
 int FUNC_8 (TYPE_1__*,int ,struct max77620_therm_info*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_9 (struct platform_device*,int) ;
 int FUNC_10 (struct platform_device*,struct max77620_therm_info*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 struct max77620_therm_info *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(&VAR_8->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->irq_tjalarm1 = FUNC_9(VAR_8, 0);
 VAR_9->irq_tjalarm2 = FUNC_9(VAR_8, 1);
 if ((VAR_9->irq_tjalarm1 < 0) || (VAR_9->irq_tjalarm2 < 0)) {
  FUNC_2(&VAR_8->dev, "Alarm irq number not available\n");
  return -VAR_0;
 }

 VAR_9->dev = &VAR_8->dev;
 VAR_9->rmap = FUNC_3(VAR_8->dev.parent, ((void*)0));
 if (!VAR_9->rmap) {
  FUNC_2(&VAR_8->dev, "Failed to get parent regmap\n");
  return -VAR_1;
 }





 FUNC_5(&VAR_8->dev, VAR_8->dev.parent);

 VAR_9->tz_device = FUNC_8(&VAR_8->dev, 0,
    VAR_9, &VAR_7);
 if (FUNC_0(VAR_9->tz_device)) {
  VAR_10 = FUNC_1(VAR_9->tz_device);
  FUNC_2(&VAR_8->dev, "Failed to register thermal zone: %d\n",
   VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_7(&VAR_8->dev, VAR_9->irq_tjalarm1, ((void*)0),
     VAR_6,
     VAR_4 | VAR_5,
     FUNC_4(&VAR_8->dev), VAR_9);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_8->dev, "Failed to request irq1: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_7(&VAR_8->dev, VAR_9->irq_tjalarm2, ((void*)0),
     VAR_6,
     VAR_4 | VAR_5,
     FUNC_4(&VAR_8->dev), VAR_9);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_8->dev, "Failed to request irq2: %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_10(VAR_8, VAR_9);

 return 0;
}
