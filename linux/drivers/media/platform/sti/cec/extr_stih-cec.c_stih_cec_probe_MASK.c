
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stih_cec {scalar_t__ irq; int adap; int notifier; struct device* clk; struct device* regs; struct device* dev; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct stih_cec*,int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,int *,int ) ;
 int FUNC_6 (int ) ;
 struct device* FUNC_7 (struct device*) ;
 int FUNC_8 (int ,struct device*) ;
 int FUNC_9 (struct device*,char*) ;
 struct device* FUNC_10 (struct device*,char*) ;
 struct device* FUNC_11 (struct device*,struct resource*) ;
 struct stih_cec* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,int,int ,int ,int ,int ,struct stih_cec*) ;
 scalar_t__ FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct stih_cec*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct resource *VAR_12;
 struct stih_cec *VAR_13;
 struct device *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_7(VAR_11);

 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_13 = FUNC_12(VAR_11, sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return -VAR_4;

 VAR_13->dev = VAR_11;

 VAR_12 = FUNC_15(VAR_10, VAR_6, 0);
 VAR_13->regs = FUNC_11(VAR_11, VAR_12);
 if (FUNC_0(VAR_13->regs))
  return FUNC_1(VAR_13->regs);

 VAR_13->irq = FUNC_14(VAR_10, 0);
 if (VAR_13->irq < 0)
  return VAR_13->irq;

 VAR_15 = FUNC_13(VAR_11, VAR_13->irq, VAR_8,
     VAR_9, 0,
     VAR_10->name, VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_13->clk = FUNC_10(VAR_11, "cec-clk");
 if (FUNC_0(VAR_13->clk)) {
  FUNC_9(VAR_11, "Cannot get cec clock\n");
  return FUNC_1(VAR_13->clk);
 }

 VAR_13->adap = FUNC_3(&VAR_7, VAR_13, VAR_3,
      VAR_1 |
      VAR_0,
      VAR_2);
 VAR_15 = FUNC_2(VAR_13->adap);
 if (VAR_15)
  return VAR_15;

 VAR_13->notifier = FUNC_5(VAR_14, ((void*)0),
             VAR_13->adap);
 if (!VAR_13->notifier) {
  VAR_15 = -VAR_4;
  goto err_delete_adapter;
 }

 VAR_15 = FUNC_8(VAR_13->adap, &VAR_10->dev);
 if (VAR_15)
  goto err_notifier;

 FUNC_16(VAR_10, VAR_13);
 return 0;

err_notifier:
 FUNC_6(VAR_13->notifier);

err_delete_adapter:
 FUNC_4(VAR_13->adap);
 return VAR_15;
}
