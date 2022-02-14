
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct ftrtc010_rtc {TYPE_1__* rtc_dev; int rtc_irq; scalar_t__ rtc_base; TYPE_1__* extclk; TYPE_1__* pclk; } ;
struct TYPE_6__ {int range_min; int range_max; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*) ;
 scalar_t__ FUNC_5 (struct device*,int ,int ) ;
 struct ftrtc010_rtc* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int ,int ,int ,int ,struct device*) ;
 TYPE_1__* FUNC_8 (struct device*) ;
 int VAR_11 ;
 int VAR_12 ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct ftrtc010_rtc*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct resource*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16, VAR_17;
 struct ftrtc010_rtc *VAR_18;
 struct device *VAR_19 = &VAR_13->dev;
 struct resource *VAR_20;
 int VAR_21;

 VAR_18 = FUNC_6(&VAR_13->dev, sizeof(*VAR_18), VAR_6);
 if (FUNC_14(!VAR_18))
  return -VAR_1;
 FUNC_10(VAR_13, VAR_18);

 VAR_18->pclk = FUNC_4(VAR_19, "PCLK");
 if (FUNC_0(VAR_18->pclk)) {
  FUNC_3(VAR_19, "could not get PCLK\n");
 } else {
  VAR_21 = FUNC_2(VAR_18->pclk);
  if (VAR_21) {
   FUNC_3(VAR_19, "failed to enable PCLK\n");
   return VAR_21;
  }
 }
 VAR_18->extclk = FUNC_4(VAR_19, "EXTCLK");
 if (FUNC_0(VAR_18->extclk)) {
  FUNC_3(VAR_19, "could not get EXTCLK\n");
 } else {
  VAR_21 = FUNC_2(VAR_18->extclk);
  if (VAR_21) {
   FUNC_3(VAR_19, "failed to enable EXTCLK\n");
   return VAR_21;
  }
 }

 VAR_20 = FUNC_9(VAR_13, VAR_7, 0);
 if (!VAR_20)
  return -VAR_0;

 VAR_18->rtc_irq = VAR_20->start;

 VAR_20 = FUNC_9(VAR_13, VAR_8, 0);
 if (!VAR_20)
  return -VAR_0;

 VAR_18->rtc_base = FUNC_5(VAR_19, VAR_20->start,
         FUNC_12(VAR_20));
 if (!VAR_18->rtc_base)
  return -VAR_1;

 VAR_18->rtc_dev = FUNC_8(VAR_19);
 if (FUNC_0(VAR_18->rtc_dev))
  return FUNC_1(VAR_18->rtc_dev);

 VAR_18->rtc_dev->ops = &VAR_12;

 VAR_17 = FUNC_11(VAR_18->rtc_base + VAR_5);
 VAR_16 = FUNC_11(VAR_18->rtc_base + VAR_4);
 VAR_15 = FUNC_11(VAR_18->rtc_base + VAR_3);
 VAR_14 = FUNC_11(VAR_18->rtc_base + VAR_2);

 VAR_18->rtc_dev->range_min = (u64)VAR_14 * 86400 + VAR_15 * 3600 +
      VAR_16 * 60 + VAR_17;
 VAR_18->rtc_dev->range_max = VAR_10 + VAR_18->rtc_dev->range_min;

 VAR_21 = FUNC_7(VAR_19, VAR_18->rtc_irq, VAR_11,
          VAR_9, VAR_13->name, VAR_19);
 if (FUNC_14(VAR_21))
  return VAR_21;

 return FUNC_13(VAR_18->rtc_dev);
}
