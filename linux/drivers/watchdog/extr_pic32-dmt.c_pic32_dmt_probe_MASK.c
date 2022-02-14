
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int bootstatus; int timeout; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct pic32_dmt {int clk; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct device*,int ,int ) ;
 int FUNC_6 (struct device*,int *) ;
 struct pic32_dmt* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct device*,struct watchdog_device*) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (struct pic32_dmt*) ;
 int FUNC_11 (struct pic32_dmt*) ;
 struct watchdog_device VAR_6 ;
 int FUNC_12 (struct platform_device*,struct watchdog_device*) ;
 int FUNC_13 (struct watchdog_device*,struct pic32_dmt*) ;
 int FUNC_14 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 int VAR_9;
 struct pic32_dmt *VAR_10;
 struct watchdog_device *VAR_11 = &VAR_6;

 VAR_10 = FUNC_7(VAR_8, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->regs = FUNC_8(VAR_7, 0);
 if (FUNC_0(VAR_10->regs))
  return FUNC_1(VAR_10->regs);

 VAR_10->clk = FUNC_6(VAR_8, ((void*)0));
 if (FUNC_0(VAR_10->clk)) {
  FUNC_3(VAR_8, "clk not found\n");
  return FUNC_1(VAR_10->clk);
 }

 VAR_9 = FUNC_2(VAR_10->clk);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_5(VAR_8, VAR_5,
           VAR_10->clk);
 if (VAR_9)
  return VAR_9;

 VAR_11->timeout = FUNC_11(VAR_10);
 if (!VAR_11->timeout) {
  FUNC_3(VAR_8, "failed to read watchdog register timeout\n");
  return -VAR_0;
 }

 FUNC_4(VAR_8, "timeout %d\n", VAR_11->timeout);

 VAR_11->bootstatus = FUNC_10(VAR_10) ? VAR_4 : 0;

 FUNC_14(VAR_11, VAR_3);
 FUNC_13(VAR_11, VAR_10);

 VAR_9 = FUNC_9(VAR_8, VAR_11);
 if (VAR_9)
  return VAR_9;

 FUNC_12(VAR_7, VAR_11);
 return 0;
}
