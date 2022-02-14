
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct lpc24xx_rtc {void* clk_rtc; void* clk_reg; void* rtc; void* rtc_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (void*) ;
 int VAR_9 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 void* FUNC_6 (int *,char*) ;
 void* FUNC_7 (int *,struct resource*) ;
 struct lpc24xx_rtc* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int,int ,int ,int ,struct lpc24xx_rtc*) ;
 void* FUNC_10 (int *,char*,int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct lpc24xx_rtc*) ;
 int FUNC_14 (struct lpc24xx_rtc*,int ,int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_12)
{
 struct lpc24xx_rtc *VAR_13;
 struct resource *VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = FUNC_8(&VAR_12->dev, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_12(VAR_12, VAR_2, 0);
 VAR_13->rtc_base = FUNC_7(&VAR_12->dev, VAR_14);
 if (FUNC_0(VAR_13->rtc_base))
  return FUNC_1(VAR_13->rtc_base);

 VAR_15 = FUNC_11(VAR_12, 0);
 if (VAR_15 < 0) {
  FUNC_5(&VAR_12->dev, "can't get interrupt resource\n");
  return VAR_15;
 }

 VAR_13->clk_rtc = FUNC_6(&VAR_12->dev, "rtc");
 if (FUNC_0(VAR_13->clk_rtc)) {
  FUNC_4(&VAR_12->dev, "error getting rtc clock\n");
  return FUNC_1(VAR_13->clk_rtc);
 }

 VAR_13->clk_reg = FUNC_6(&VAR_12->dev, "reg");
 if (FUNC_0(VAR_13->clk_reg)) {
  FUNC_4(&VAR_12->dev, "error getting reg clock\n");
  return FUNC_1(VAR_13->clk_reg);
 }

 VAR_16 = FUNC_3(VAR_13->clk_rtc);
 if (VAR_16) {
  FUNC_4(&VAR_12->dev, "unable to enable rtc clock\n");
  return VAR_16;
 }

 VAR_16 = FUNC_3(VAR_13->clk_reg);
 if (VAR_16) {
  FUNC_4(&VAR_12->dev, "unable to enable reg clock\n");
  goto disable_rtc_clk;
 }

 FUNC_13(VAR_12, VAR_13);


 FUNC_14(VAR_13, VAR_6, VAR_8 | VAR_7);


 FUNC_14(VAR_13, VAR_4, VAR_5 | VAR_3);

 VAR_16 = FUNC_9(&VAR_12->dev, VAR_15, VAR_10, 0,
          VAR_12->name, VAR_13);
 if (VAR_16 < 0) {
  FUNC_5(&VAR_12->dev, "can't request interrupt\n");
  goto disable_clks;
 }

 VAR_13->rtc = FUNC_10(&VAR_12->dev, "lpc24xx-rtc",
         &VAR_11, VAR_9);
 if (FUNC_0(VAR_13->rtc)) {
  FUNC_4(&VAR_12->dev, "can't register rtc device\n");
  VAR_16 = FUNC_1(VAR_13->rtc);
  goto disable_clks;
 }

 return 0;

disable_clks:
 FUNC_2(VAR_13->clk_reg);
disable_rtc_clk:
 FUNC_2(VAR_13->clk_rtc);
 return VAR_16;
}
