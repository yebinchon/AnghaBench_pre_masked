
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct meson_ao_cec_device {struct device* adap; int notify; struct device* core; struct device* base; struct platform_device* pdev; int cec_reg_lock; } ;
struct device {int owner; } ;


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
 int VAR_8 ;
 struct device* FUNC_2 (int *,struct meson_ao_cec_device*,char*,int,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int *,struct device*) ;
 int FUNC_5 (int ) ;
 struct device* FUNC_6 (int *) ;
 int FUNC_7 (struct device*,int *) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*,int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;
 struct device* FUNC_13 (int *,char*) ;
 struct device* FUNC_14 (int *,struct resource*) ;
 struct meson_ao_cec_device* FUNC_15 (int *,int,int ) ;
 int FUNC_16 (int *,int,int ,int ,int ,int *,struct meson_ao_cec_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct meson_ao_cec_device*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,struct device*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_12)
{
 struct meson_ao_cec_device *VAR_13;
 struct device *VAR_14;
 struct resource *VAR_15;
 int VAR_16, VAR_17;

 VAR_14 = FUNC_6(&VAR_12->dev);

 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_13 = FUNC_15(&VAR_12->dev, sizeof(*VAR_13), VAR_6);
 if (!VAR_13)
  return -VAR_5;

 FUNC_20(&VAR_13->cec_reg_lock);

 VAR_13->adap = FUNC_2(&VAR_11, VAR_13,
         "meson_ao_cec",
         VAR_1 |
         VAR_0,
         1);
 if (FUNC_0(VAR_13->adap))
  return FUNC_1(VAR_13->adap);

 VAR_13->notify = FUNC_4(VAR_14, ((void*)0),
       VAR_13->adap);
 if (!VAR_13->notify) {
  VAR_16 = -VAR_5;
  goto out_probe_adapter;
 }

 VAR_13->adap->owner = VAR_8;

 VAR_15 = FUNC_18(VAR_12, VAR_7, 0);
 VAR_13->base = FUNC_14(&VAR_12->dev, VAR_15);
 if (FUNC_0(VAR_13->base)) {
  VAR_16 = FUNC_1(VAR_13->base);
  goto out_probe_notify;
 }

 VAR_17 = FUNC_17(VAR_12, 0);
 VAR_16 = FUNC_16(&VAR_12->dev, VAR_17,
     VAR_9,
     VAR_10,
     0, ((void*)0), VAR_13);
 if (VAR_16) {
  FUNC_11(&VAR_12->dev, "irq request failed\n");
  goto out_probe_notify;
 }

 VAR_13->core = FUNC_13(&VAR_12->dev, "core");
 if (FUNC_0(VAR_13->core)) {
  FUNC_11(&VAR_12->dev, "core clock request failed\n");
  VAR_16 = FUNC_1(VAR_13->core);
  goto out_probe_notify;
 }

 VAR_16 = FUNC_9(VAR_13->core);
 if (VAR_16) {
  FUNC_11(&VAR_12->dev, "core clock enable failed\n");
  goto out_probe_notify;
 }

 VAR_16 = FUNC_10(VAR_13->core, VAR_2);
 if (VAR_16) {
  FUNC_11(&VAR_12->dev, "core clock set rate failed\n");
  goto out_probe_clk;
 }

 FUNC_12(&VAR_12->dev);

 VAR_13->pdev = VAR_12;
 FUNC_19(VAR_12, VAR_13);

 VAR_16 = FUNC_7(VAR_13->adap, &VAR_12->dev);
 if (VAR_16 < 0)
  goto out_probe_clk;


 FUNC_21(VAR_4,
         VAR_13->base + VAR_3);

 return 0;

out_probe_clk:
 FUNC_8(VAR_13->core);

out_probe_notify:
 FUNC_5(VAR_13->notify);

out_probe_adapter:
 FUNC_3(VAR_13->adap);

 FUNC_11(&VAR_12->dev, "CEC controller registration failed\n");

 return VAR_16;
}
