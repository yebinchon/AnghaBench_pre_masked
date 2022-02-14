
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct secocec_data {struct device* cec_adap; int notifier; int irq; struct device* dev; struct platform_device* pdev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct device* FUNC_2 (int *,struct secocec_data*,int ,int,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char const*,struct device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,struct device*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,char*,...) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*,struct secocec_data*) ;
 struct secocec_data* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,int ,int *,int ,int,int ,struct secocec_data*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct platform_device*,struct secocec_data*) ;
 int FUNC_15 (int ,int,char*) ;
 int FUNC_16 (struct secocec_data*) ;
 int VAR_14 ;
 struct device* FUNC_17 (struct device*,char const**) ;
 int FUNC_18 (struct secocec_data*) ;
 int VAR_15 ;
 int FUNC_19 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_16)
{
 struct secocec_data *VAR_17;
 struct device *VAR_18 = &VAR_16->dev;
 struct device *VAR_19;
 const char *VAR_20 = ((void*)0);
 int VAR_21;
 u16 VAR_22;

 VAR_19 = FUNC_17(&VAR_16->dev, &VAR_20);
 if (FUNC_0(VAR_19))
  return FUNC_1(VAR_19);

 VAR_17 = FUNC_11(VAR_18, sizeof(*VAR_17), VAR_8);
 if (!VAR_17)
  return -VAR_6;

 FUNC_10(VAR_18, VAR_17);


 if (!FUNC_15(VAR_0, 7, "CEC00001")) {
  FUNC_8(VAR_18, "Request memory region failed");
  return -VAR_7;
 }

 VAR_17->pdev = VAR_16;
 VAR_17->dev = VAR_18;

 if (!FUNC_13(VAR_18)) {
  FUNC_7(VAR_18, "Cannot find any ACPI companion");
  VAR_21 = -VAR_5;
  goto err;
 }

 VAR_21 = FUNC_16(VAR_17);
 if (VAR_21) {
  FUNC_8(VAR_18, "Cannot assign gpio to IRQ");
  VAR_21 = -VAR_5;
  goto err;
 }


 VAR_21 = FUNC_19(VAR_13, &VAR_22);
 if (VAR_21) {
  FUNC_8(VAR_18, "Cannot check fw version");
  goto err;
 }
 if (VAR_22 < VAR_11) {
  FUNC_8(VAR_18, "CEC Firmware not supported (v.%04x). Use ver > v.%04x",
   VAR_22, VAR_11);
  VAR_21 = -VAR_3;
  goto err;
 }

 VAR_21 = FUNC_12(VAR_18,
     VAR_17->irq,
     ((void*)0),
     VAR_15,
     VAR_10 | VAR_9,
     FUNC_9(&VAR_16->dev), VAR_17);

 if (VAR_21) {
  FUNC_8(VAR_18, "Cannot request IRQ %d", VAR_17->irq);
  VAR_21 = -VAR_4;
  goto err;
 }


 VAR_17->cec_adap = FUNC_2(&VAR_14,
       VAR_17,
       FUNC_9(VAR_18),
       VAR_2 |
       VAR_1,
       VAR_12);

 if (FUNC_0(VAR_17->cec_adap)) {
  VAR_21 = FUNC_1(VAR_17->cec_adap);
  goto err;
 }

 VAR_17->notifier = FUNC_4(VAR_19, VAR_20,
          VAR_17->cec_adap);
 if (!VAR_17->notifier) {
  VAR_21 = -VAR_6;
  goto err_delete_adapter;
 }

 VAR_21 = FUNC_6(VAR_17->cec_adap, VAR_18);
 if (VAR_21)
  goto err_notifier;

 VAR_21 = FUNC_18(VAR_17);
 if (VAR_21)
  goto err_notifier;

 FUNC_14(VAR_16, VAR_17);

 FUNC_7(VAR_18, "Device registered");

 return VAR_21;

err_notifier:
 FUNC_5(VAR_17->notifier);
err_delete_adapter:
 FUNC_3(VAR_17->cec_adap);
err:
 FUNC_8(VAR_18, "%s device probe failed\n", FUNC_9(VAR_18));

 return VAR_21;
}
