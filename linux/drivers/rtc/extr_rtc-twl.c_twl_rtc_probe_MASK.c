
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct twl_rtc {scalar_t__ class; int* reg_map; int rtc_irq_bits; TYPE_1__* rtc; } ;
struct TYPE_12__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct device_node {int dummy; } ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 struct twl_rtc* FUNC_7 (TYPE_2__*,int,int ) ;
 int FUNC_8 (TYPE_2__*,int,int *,int ,int,int ,struct twl_rtc*) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct platform_device*,struct twl_rtc*) ;
 scalar_t__ VAR_17 ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_15 (struct twl_rtc*,int*,int ) ;
 int FUNC_16 (struct twl_rtc*,int,int ) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_21)
{
 struct twl_rtc *VAR_22;
 struct device_node *VAR_23 = VAR_21->dev.of_node;
 int VAR_24 = -VAR_3;
 int VAR_25 = FUNC_10(VAR_21, 0);
 u8 VAR_26;

 if (!VAR_23) {
  FUNC_2(&VAR_21->dev, "no DT info\n");
  return -VAR_3;
 }

 if (VAR_25 <= 0)
  return VAR_24;

 VAR_22 = FUNC_7(&VAR_21->dev, sizeof(*VAR_22), VAR_5);
 if (!VAR_22)
  return -VAR_4;

 if (FUNC_13()) {
  VAR_22->class = VAR_15;
  VAR_22->reg_map = (u8 *)VAR_17;
 } else if (FUNC_14()) {
  VAR_22->class = VAR_16;
  VAR_22->reg_map = (u8 *)VAR_18;
 } else {
  FUNC_2(&VAR_21->dev, "TWL Class not supported.\n");
  return -VAR_3;
 }

 VAR_24 = FUNC_15(VAR_22, &VAR_26, VAR_12);
 if (VAR_24 < 0)
  return VAR_24;

 if (VAR_26 & VAR_2)
  FUNC_5(&VAR_21->dev, "Power up reset detected.\n");

 if (VAR_26 & VAR_1)
  FUNC_5(&VAR_21->dev, "Pending Alarm interrupt detected.\n");


 VAR_24 = FUNC_16(VAR_22, VAR_26, VAR_12);
 if (VAR_24 < 0)
  return VAR_24;

 if (VAR_22->class == VAR_16) {
  FUNC_12(VAR_14,
   VAR_8);
  FUNC_12(VAR_14,
   VAR_9);
 }

 FUNC_3(&VAR_21->dev, "Enabling TWL-RTC\n");
 VAR_24 = FUNC_16(VAR_22, VAR_0,
          VAR_10);
 if (VAR_24 < 0)
  return VAR_24;


 VAR_24 = FUNC_16(VAR_22, 0, VAR_11);
 if (VAR_24 < 0)
  FUNC_5(&VAR_21->dev, "unable to disable interrupt\n");


 VAR_24 = FUNC_15(VAR_22, &VAR_22->rtc_irq_bits,
         VAR_11);
 if (VAR_24 < 0)
  return VAR_24;

 FUNC_11(VAR_21, VAR_22);
 FUNC_6(&VAR_21->dev, 1);

 VAR_22->rtc = FUNC_9(&VAR_21->dev, VAR_21->name,
     &VAR_20, VAR_13);
 if (FUNC_0(VAR_22->rtc)) {
  FUNC_2(&VAR_21->dev, "can't register RTC device, err %ld\n",
   FUNC_1(VAR_22->rtc));
  return FUNC_1(VAR_22->rtc);
 }

 VAR_24 = FUNC_8(&VAR_21->dev, VAR_25, ((void*)0),
     VAR_19,
     VAR_7 | VAR_6,
     FUNC_4(&VAR_22->rtc->dev), VAR_22);
 if (VAR_24 < 0) {
  FUNC_2(&VAR_21->dev, "IRQ is not free.\n");
  return VAR_24;
 }

 return 0;
}
