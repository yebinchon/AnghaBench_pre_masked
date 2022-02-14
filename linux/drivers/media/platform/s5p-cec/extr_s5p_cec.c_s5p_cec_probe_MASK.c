
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_cec_dev {scalar_t__ irq; int adap; int notifier; struct device* reg; struct device* pmu; struct device* clk; struct device* dev; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct s5p_cec_dev*,int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,int *,int ) ;
 int FUNC_6 (int ) ;
 struct device* FUNC_7 (struct device*) ;
 int FUNC_8 (int ,struct device*) ;
 int FUNC_9 (struct device*,char*) ;
 struct device* FUNC_10 (struct device*,char*) ;
 struct device* FUNC_11 (struct device*,struct resource*) ;
 struct s5p_cec_dev* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,int,int ,int ,int ,int ,struct s5p_cec_dev*) ;
 int FUNC_14 (int ,char*) ;
 scalar_t__ FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct s5p_cec_dev*) ;
 int FUNC_18 (struct device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct device* FUNC_19 (int ,char*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct device *VAR_13;
 struct resource *VAR_14;
 struct s5p_cec_dev *VAR_15;
 bool VAR_16 = FUNC_14(VAR_11->dev.of_node, "needs-hpd");
 int VAR_17;

 VAR_13 = FUNC_7(VAR_12);

 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 VAR_15 = FUNC_12(&VAR_11->dev, sizeof(*VAR_15), VAR_6);
 if (!VAR_15)
  return -VAR_4;

 VAR_15->dev = VAR_12;

 VAR_15->irq = FUNC_15(VAR_11, 0);
 if (VAR_15->irq < 0)
  return VAR_15->irq;

 VAR_17 = FUNC_13(VAR_12, VAR_15->irq, VAR_9,
  VAR_10, 0, VAR_11->name, VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_15->clk = FUNC_10(VAR_12, "hdmicec");
 if (FUNC_0(VAR_15->clk))
  return FUNC_1(VAR_15->clk);

 VAR_15->pmu = FUNC_19(VAR_12->of_node,
       "samsung,syscon-phandle");
 if (FUNC_0(VAR_15->pmu))
  return -VAR_5;

 VAR_14 = FUNC_16(VAR_11, VAR_7, 0);
 VAR_15->reg = FUNC_11(VAR_12, VAR_14);
 if (FUNC_0(VAR_15->reg))
  return FUNC_1(VAR_15->reg);

 VAR_15->adap = FUNC_3(&VAR_8, VAR_15, VAR_3,
  VAR_1 | (VAR_16 ? VAR_2 : 0) |
  VAR_0, 1);
 VAR_17 = FUNC_2(VAR_15->adap);
 if (VAR_17)
  return VAR_17;

 VAR_15->notifier = FUNC_5(VAR_13, ((void*)0),
             VAR_15->adap);
 if (!VAR_15->notifier) {
  VAR_17 = -VAR_4;
  goto err_delete_adapter;
 }

 VAR_17 = FUNC_8(VAR_15->adap, &VAR_11->dev);
 if (VAR_17)
  goto err_notifier;

 FUNC_17(VAR_11, VAR_15);
 FUNC_18(VAR_12);

 FUNC_9(VAR_12, "successfully probed\n");
 return 0;

err_notifier:
 FUNC_6(VAR_15->notifier);

err_delete_adapter:
 FUNC_4(VAR_15->adap);
 return VAR_17;
}
