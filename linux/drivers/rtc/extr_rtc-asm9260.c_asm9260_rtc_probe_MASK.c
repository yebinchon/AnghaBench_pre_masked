
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct asm9260_rtc_priv {int clk; scalar_t__ rtc; scalar_t__ iobase; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,char*) ;
 scalar_t__ FUNC_7 (struct device*,struct resource*) ;
 struct asm9260_rtc_priv* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int,int *,int ,int ,int ,struct asm9260_rtc_priv*) ;
 scalar_t__ FUNC_10 (struct device*,int ,int *,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct asm9260_rtc_priv*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_13)
{
 struct asm9260_rtc_priv *VAR_14;
 struct device *VAR_15 = &VAR_13->dev;
 struct resource *VAR_16;
 int VAR_17, VAR_18;
 u32 VAR_19;

 VAR_14 = FUNC_8(VAR_15, sizeof(struct asm9260_rtc_priv), VAR_4);
 if (!VAR_14)
  return -VAR_3;

 VAR_14->dev = &VAR_13->dev;
 FUNC_15(VAR_13, VAR_14);

 VAR_17 = FUNC_13(VAR_13, 0);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_16 = FUNC_14(VAR_13, VAR_8, 0);
 VAR_14->iobase = FUNC_7(VAR_15, VAR_16);
 if (FUNC_0(VAR_14->iobase))
  return FUNC_1(VAR_14->iobase);

 VAR_14->clk = FUNC_6(VAR_15, "ahb");
 VAR_18 = FUNC_3(VAR_14->clk);
 if (VAR_18) {
  FUNC_4(VAR_15, "Failed to enable clk!\n");
  return VAR_18;
 }

 VAR_19 = FUNC_11(VAR_14->iobase + VAR_6);

 if ((VAR_19 & (VAR_1 | VAR_2)) != VAR_1) {
  FUNC_12(VAR_2, VAR_14->iobase + VAR_6);
  VAR_19 = 0;
 }

 FUNC_12(VAR_1 | VAR_19, VAR_14->iobase + VAR_6);
 FUNC_12(0, VAR_14->iobase + VAR_7);
 FUNC_12(VAR_0, VAR_14->iobase + VAR_5);

 VAR_14->rtc = FUNC_10(VAR_15, FUNC_5(VAR_15),
          &VAR_12, VAR_10);
 if (FUNC_0(VAR_14->rtc)) {
  VAR_18 = FUNC_1(VAR_14->rtc);
  FUNC_4(VAR_15, "Failed to register RTC device: %d\n", VAR_18);
  goto err_return;
 }

 VAR_18 = FUNC_9(VAR_15, VAR_17, ((void*)0),
     VAR_11, VAR_9,
     FUNC_5(VAR_15), VAR_14);
 if (VAR_18 < 0) {
  FUNC_4(VAR_15, "can't get irq %i, err %d\n",
   VAR_17, VAR_18);
  goto err_return;
 }

 return 0;

err_return:
 FUNC_2(VAR_14->clk);
 return VAR_18;
}
