
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int parent; } ;
struct platform_device {TYPE_2__ dev; TYPE_1__* id_entry; } ;
struct max8998_rtc_info {int lp3974_bug_workaround; int irq; int rtc_dev; int rtc; struct max8998_dev* max8998; TYPE_2__* dev; } ;
struct max8998_platform_data {scalar_t__ rtc_delay; } ;
struct max8998_dev {int irq_domain; int rtc; struct max8998_platform_data* pdata; } ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,char*,int,...) ;
 struct max8998_dev* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 struct max8998_rtc_info* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int *,int ,int ,char*,struct max8998_rtc_info*) ;
 int FUNC_8 (TYPE_2__*,char*,int *,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct platform_device*,struct max8998_rtc_info*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct max8998_dev *VAR_7 = FUNC_3(VAR_6->dev.parent);
 struct max8998_platform_data *VAR_8 = VAR_7->pdata;
 struct max8998_rtc_info *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(&VAR_6->dev, sizeof(struct max8998_rtc_info),
   VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->dev = &VAR_6->dev;
 VAR_9->max8998 = VAR_7;
 VAR_9->rtc = VAR_7->rtc;

 FUNC_10(VAR_6, VAR_9);

 VAR_9->rtc_dev = FUNC_8(&VAR_6->dev, "max8998-rtc",
   &VAR_5, VAR_3);

 if (FUNC_0(VAR_9->rtc_dev)) {
  VAR_10 = FUNC_1(VAR_9->rtc_dev);
  FUNC_2(&VAR_6->dev, "Failed to register RTC device: %d\n", VAR_10);
  return VAR_10;
 }

 if (!VAR_7->irq_domain)
  goto no_irq;

 VAR_9->irq = FUNC_9(VAR_7->irq_domain, VAR_2);
 if (!VAR_9->irq) {
  FUNC_5(&VAR_6->dev, "Failed to map alarm IRQ\n");
  goto no_irq;
 }

 VAR_10 = FUNC_7(&VAR_6->dev, VAR_9->irq, ((void*)0),
    VAR_4, 0, "rtc-alarm0", VAR_9);

 if (VAR_10 < 0)
  FUNC_2(&VAR_6->dev, "Failed to request alarm IRQ: %d: %d\n",
   VAR_9->irq, VAR_10);

no_irq:
 FUNC_4(&VAR_6->dev, "RTC CHIP NAME: %s\n", VAR_6->id_entry->name);
 if (VAR_8 && VAR_8->rtc_delay) {
  VAR_9->lp3974_bug_workaround = 1;
  FUNC_5(&VAR_6->dev, "LP3974 with RTC REGERR option."
    " RTC updates will be extremely slow.\n");
 }

 return 0;
}
