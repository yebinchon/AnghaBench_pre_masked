
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct cpcap_rtc {void* update_irq; void* alarm_irq; int vendor; int regmap; int rtc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct device*,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct device*,int) ;
 struct cpcap_rtc* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,void*,int *,int ,int ,char*,struct cpcap_rtc*) ;
 int FUNC_8 (struct device*,char*,int *,int ) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (struct platform_device*,int) ;
 int FUNC_11 (struct platform_device*,struct cpcap_rtc*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct cpcap_rtc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(VAR_9, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->regmap = FUNC_4(VAR_9->parent, ((void*)0));
 if (!VAR_10->regmap)
  return -VAR_0;

 FUNC_11(VAR_8, VAR_10);
 VAR_10->rtc_dev = FUNC_8(VAR_9, "cpcap_rtc",
      &VAR_6, VAR_4);

 if (FUNC_0(VAR_10->rtc_dev))
  return FUNC_1(VAR_10->rtc_dev);

 VAR_11 = FUNC_2(VAR_9, VAR_10->regmap, &VAR_10->vendor);
 if (VAR_11)
  return VAR_11;

 VAR_10->alarm_irq = FUNC_10(VAR_8, 0);
 VAR_11 = FUNC_7(VAR_9, VAR_10->alarm_irq, ((void*)0),
     VAR_5, VAR_3,
     "rtc_alarm", VAR_10);
 if (VAR_11) {
  FUNC_3(VAR_9, "Could not request alarm irq: %d\n", VAR_11);
  return VAR_11;
 }
 FUNC_9(VAR_10->alarm_irq);







 VAR_10->update_irq = FUNC_10(VAR_8, 1);
 VAR_11 = FUNC_7(VAR_9, VAR_10->update_irq, ((void*)0),
     VAR_7, VAR_3,
     "rtc_1hz", VAR_10);
 if (VAR_11) {
  FUNC_3(VAR_9, "Could not request update irq: %d\n", VAR_11);
  return VAR_11;
 }
 FUNC_9(VAR_10->update_irq);

 VAR_11 = FUNC_5(VAR_9, 1);
 if (VAR_11) {
  FUNC_3(VAR_9, "wakeup initialization failed (%d)\n", VAR_11);

 }

 return 0;
}
