
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int bootstatus; int timeout; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct pic32_wdt {int clk; int rst_base; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct device*,int ,int ) ;
 int FUNC_6 (struct device*,int *) ;
 int FUNC_7 (struct device*,int ,int) ;
 struct pic32_wdt* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct device*,struct watchdog_device*) ;
 int VAR_7 ;
 struct watchdog_device VAR_8 ;
 scalar_t__ FUNC_11 (struct pic32_wdt*) ;
 int FUNC_12 (struct pic32_wdt*,struct device*) ;
 scalar_t__ FUNC_13 (struct pic32_wdt*) ;
 int FUNC_14 (struct platform_device*,struct watchdog_device*) ;
 int FUNC_15 (struct watchdog_device*,struct pic32_wdt*) ;
 int FUNC_16 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 int VAR_11;
 struct watchdog_device *VAR_12 = &VAR_8;
 struct pic32_wdt *VAR_13;

 VAR_13 = FUNC_8(VAR_10, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->regs = FUNC_9(VAR_9, 0);
 if (FUNC_0(VAR_13->regs))
  return FUNC_1(VAR_13->regs);

 VAR_13->rst_base = FUNC_7(VAR_10, VAR_4, 0x10);
 if (!VAR_13->rst_base)
  return -VAR_2;

 VAR_13->clk = FUNC_6(VAR_10, ((void*)0));
 if (FUNC_0(VAR_13->clk)) {
  FUNC_3(VAR_10, "clk not found\n");
  return FUNC_1(VAR_13->clk);
 }

 VAR_11 = FUNC_2(VAR_13->clk);
 if (VAR_11) {
  FUNC_3(VAR_10, "clk enable failed\n");
  return VAR_11;
 }
 VAR_11 = FUNC_5(VAR_10, VAR_7,
           VAR_13->clk);
 if (VAR_11)
  return VAR_11;

 if (FUNC_13(VAR_13)) {
  FUNC_3(VAR_10, "windowed-clear mode is not supported.\n");
  return -VAR_1;
 }

 VAR_12->timeout = FUNC_12(VAR_13, VAR_10);
 if (!VAR_12->timeout) {
  FUNC_3(VAR_10, "failed to read watchdog register timeout\n");
  return -VAR_0;
 }

 FUNC_4(VAR_10, "timeout %d\n", VAR_12->timeout);

 VAR_12->bootstatus = FUNC_11(VAR_13) ? VAR_6 : 0;

 FUNC_16(VAR_12, VAR_5);
 FUNC_15(VAR_12, VAR_13);

 VAR_11 = FUNC_10(VAR_10, VAR_12);
 if (VAR_11)
  return VAR_11;

 FUNC_14(VAR_9, VAR_12);

 return 0;
}
