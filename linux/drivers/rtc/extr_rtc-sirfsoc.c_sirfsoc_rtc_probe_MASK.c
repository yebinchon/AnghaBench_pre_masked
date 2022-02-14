
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct sirfsoc_rtc_drv {int irq; int rtc; int overflow_rtc; int regmap; int rtc_base; int lock; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,int) ;
 struct sirfsoc_rtc_drv* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ,int ,struct sirfsoc_rtc_drv*) ;
 int FUNC_7 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_8 (struct device_node*,char*,int *) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,struct sirfsoc_rtc_drv*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (struct sirfsoc_rtc_drv*,int ) ;
 int FUNC_12 (struct sirfsoc_rtc_drv*,int ,int) ;
 int FUNC_13 (int *) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_14)
{
 int VAR_15;
 unsigned long VAR_16;
 struct sirfsoc_rtc_drv *VAR_17;
 struct device_node *VAR_18 = VAR_14->dev.of_node;

 VAR_17 = FUNC_4(&VAR_14->dev,
  sizeof(struct sirfsoc_rtc_drv), VAR_1);
 if (VAR_17 == ((void*)0))
  return -VAR_0;

 FUNC_13(&VAR_17->lock);

 VAR_15 = FUNC_8(VAR_18, "reg", &VAR_17->rtc_base);
 if (VAR_15) {
  FUNC_2(&VAR_14->dev, "unable to find base address of rtc node in dtb\n");
  return VAR_15;
 }

 FUNC_10(VAR_14, VAR_17);


 FUNC_3(&VAR_14->dev, 1);

 VAR_17->regmap = FUNC_5(&VAR_14->dev,
   &VAR_13);
 if (FUNC_0(VAR_17->regmap)) {
  VAR_15 = FUNC_1(VAR_17->regmap);
  FUNC_2(&VAR_14->dev, "Failed to allocate register map: %d\n",
   VAR_15);
  return VAR_15;
 }






 VAR_16 = ((32768 / VAR_7) / 2) - 1;
 FUNC_12(VAR_17, VAR_6, VAR_16);


 FUNC_12(VAR_17, VAR_5, VAR_9);


 FUNC_12(VAR_17, VAR_3, 0x0);


 FUNC_12(VAR_17, VAR_4, 0x0);


 VAR_17->overflow_rtc =
  FUNC_11(VAR_17, VAR_8);

 VAR_17->rtc = FUNC_7(&VAR_14->dev, VAR_14->name,
   &VAR_12, VAR_10);
 if (FUNC_0(VAR_17->rtc)) {
  VAR_15 = FUNC_1(VAR_17->rtc);
  FUNC_2(&VAR_14->dev, "can't register RTC device\n");
  return VAR_15;
 }

 VAR_17->irq = FUNC_9(VAR_14, 0);
 VAR_15 = FUNC_6(
   &VAR_14->dev,
   VAR_17->irq,
   VAR_11,
   VAR_2,
   VAR_14->name,
   VAR_17);
 if (VAR_15) {
  FUNC_2(&VAR_14->dev, "Unable to register for the SiRF SOC RTC IRQ\n");
  return VAR_15;
 }

 return 0;
}
