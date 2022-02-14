
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct rtd119x_rtc {int base_year; scalar_t__ rtcdev; scalar_t__ clk; scalar_t__ base; } ;
struct resource {int dummy; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,struct resource*) ;
 struct rtd119x_rtc* FUNC_7 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char*,int *,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct rtd119x_rtc*) ;
 int FUNC_12 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_11)
{
 struct rtd119x_rtc *VAR_12;
 struct resource *VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_12 = FUNC_7(&VAR_11->dev, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 FUNC_11(VAR_11, VAR_12);
 VAR_12->base_year = 2014;

 VAR_13 = FUNC_10(VAR_11, VAR_2, 0);
 VAR_12->base = FUNC_6(&VAR_11->dev, VAR_13);
 if (FUNC_0(VAR_12->base))
  return FUNC_1(VAR_12->base);

 VAR_12->clk = FUNC_9(VAR_11->dev.of_node, 0);
 if (FUNC_0(VAR_12->clk))
  return FUNC_1(VAR_12->clk);

 VAR_15 = FUNC_3(VAR_12->clk);
 if (VAR_15) {
  FUNC_4(VAR_12->clk);
  return VAR_15;
 }

 VAR_14 = FUNC_12(VAR_12->base + VAR_3);
 if (!(VAR_14 & VAR_4)) {
  FUNC_15(VAR_4, VAR_12->base + VAR_3);

  FUNC_13(&VAR_11->dev);

  FUNC_15(0, VAR_12->base + VAR_8);
  FUNC_15(0, VAR_12->base + VAR_7);
  FUNC_15(0, VAR_12->base + VAR_5);
  FUNC_15(0, VAR_12->base + VAR_6);
 }

 FUNC_14(&VAR_11->dev, 1);

 VAR_12->rtcdev = FUNC_8(&VAR_11->dev, "rtc",
      &VAR_10, VAR_9);
 if (FUNC_0(VAR_12->rtcdev)) {
  FUNC_5(&VAR_11->dev, "failed to register rtc device");
  FUNC_2(VAR_12->clk);
  FUNC_4(VAR_12->clk);
  return FUNC_1(VAR_12->rtcdev);
 }

 return 0;
}
