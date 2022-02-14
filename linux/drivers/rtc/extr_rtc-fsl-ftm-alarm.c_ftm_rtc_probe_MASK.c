
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_14__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct ftm_rtc {int alarm_freq; TYPE_1__* rtc_dev; int big_endian; TYPE_1__* base; } ;
struct device_node {int dummy; } ;
struct TYPE_13__ {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 TYPE_1__* FUNC_5 (TYPE_3__*,struct resource*) ;
 struct ftm_rtc* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int,int ,int ,int ,struct ftm_rtc*) ;
 TYPE_1__* FUNC_8 (TYPE_3__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (struct device_node*,int ) ;
 int FUNC_10 (struct device_node*,char*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct ftm_rtc*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_10)
{
 struct device_node *VAR_11 = VAR_10->dev.of_node;
 struct resource *VAR_12;
 int VAR_13;
 int VAR_14;
 struct ftm_rtc *VAR_15;

 VAR_15 = FUNC_6(&VAR_10->dev, sizeof(*VAR_15), VAR_4);
 if (FUNC_14(!VAR_15)) {
  FUNC_2(&VAR_10->dev, "cannot alloc memory for rtc\n");
  return -VAR_2;
 }

 FUNC_12(VAR_10, VAR_15);

 VAR_15->rtc_dev = FUNC_8(&VAR_10->dev);
 if (FUNC_0(VAR_15->rtc_dev))
  return FUNC_1(VAR_15->rtc_dev);

 VAR_12 = FUNC_11(VAR_10, VAR_5, 0);
 if (!VAR_12) {
  FUNC_2(&VAR_10->dev, "cannot get resource for rtc\n");
  return -VAR_1;
 }

 VAR_15->base = FUNC_5(&VAR_10->dev, VAR_12);
 if (FUNC_0(VAR_15->base)) {
  FUNC_2(&VAR_10->dev, "cannot ioremap resource for rtc\n");
  return FUNC_1(VAR_15->base);
 }

 VAR_13 = FUNC_9(VAR_11, 0);
 if (VAR_13 <= 0) {
  FUNC_2(&VAR_10->dev, "unable to get IRQ from DT, %d\n", VAR_13);
  return -VAR_0;
 }

 VAR_14 = FUNC_7(&VAR_10->dev, VAR_13, VAR_8,
          VAR_6, FUNC_3(&VAR_10->dev), VAR_15);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_10->dev, "failed to request irq\n");
  return VAR_14;
 }

 VAR_15->big_endian = FUNC_10(VAR_11, "big-endian");
 VAR_15->alarm_freq = (u32)VAR_3 / (u32)VAR_7;
 VAR_15->rtc_dev->ops = &VAR_9;

 FUNC_4(&VAR_10->dev, 1);

 VAR_14 = FUNC_13(VAR_15->rtc_dev);
 if (VAR_14) {
  FUNC_2(&VAR_10->dev, "can't register rtc device\n");
  return VAR_14;
 }

 return 0;
}
