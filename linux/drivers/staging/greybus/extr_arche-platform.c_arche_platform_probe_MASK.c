
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int notifier_call; } ;
struct arche_platform_drvdata {int platform_state_mutex; TYPE_1__ pm_notifier; int wake_detect_irq; void* wake_detect; int wake_lock; struct device* dev; int num_apbs; void* svc_ref_clk; void* svc_refclk_req; void* svc_sysboot; void* svc_reset; scalar_t__ is_reset_act_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_9 ;
 int FUNC_2 (struct arche_platform_drvdata*) ;
 int VAR_10 ;
 int FUNC_3 (struct arche_platform_drvdata*,int ) ;
 int FUNC_4 (struct arche_platform_drvdata*,int ) ;
 int VAR_11 ;
 int FUNC_5 (struct arche_platform_drvdata*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct device*,char*,int ) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*,int *) ;
 int FUNC_11 (struct device*,int *) ;
 void* FUNC_12 (struct device*,char*) ;
 void* FUNC_13 (struct device*,char*,unsigned int) ;
 struct arche_platform_drvdata* FUNC_14 (struct device*,int,int ) ;
 int FUNC_15 (struct device*,int ,int ,int ,int,int ,struct arche_platform_drvdata*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct device_node*) ;
 int FUNC_22 (struct device_node*,int *,int *,struct device*) ;
 scalar_t__ FUNC_23 (struct device_node*,char*) ;
 int FUNC_24 (struct platform_device*,struct arche_platform_drvdata*) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_14)
{
 struct arche_platform_drvdata *VAR_15;
 struct device *VAR_16 = &VAR_14->dev;
 struct device_node *VAR_17 = VAR_16->of_node;
 int VAR_18;
 unsigned int VAR_19;

 VAR_15 = FUNC_14(&VAR_14->dev, sizeof(*VAR_15),
       VAR_2);
 if (!VAR_15)
  return -VAR_1;


 VAR_15->is_reset_act_hi = FUNC_23(VAR_17,
            "svc,reset-active-high");
 if (VAR_15->is_reset_act_hi)
  VAR_19 = VAR_4;
 else
  VAR_19 = VAR_5;

 VAR_15->svc_reset = FUNC_13(VAR_16, "svc,reset", VAR_19);
 if (FUNC_0(VAR_15->svc_reset)) {
  VAR_18 = FUNC_1(VAR_15->svc_reset);
  FUNC_7(VAR_16, "failed to request svc-reset GPIO: %d\n", VAR_18);
  return VAR_18;
 }
 FUNC_3(VAR_15, VAR_0);

 VAR_15->svc_sysboot = FUNC_13(VAR_16, "svc,sysboot",
        VAR_5);
 if (FUNC_0(VAR_15->svc_sysboot)) {
  VAR_18 = FUNC_1(VAR_15->svc_sysboot);
  FUNC_7(VAR_16, "failed to request sysboot0 GPIO: %d\n", VAR_18);
  return VAR_18;
 }


 VAR_15->svc_refclk_req = FUNC_13(VAR_16, "svc,refclk-req",
           VAR_3);
 if (FUNC_0(VAR_15->svc_refclk_req)) {
  VAR_18 = FUNC_1(VAR_15->svc_refclk_req);
  FUNC_7(VAR_16, "failed to request svc-clk-req GPIO: %d\n", VAR_18);
  return VAR_18;
 }


 VAR_15->svc_ref_clk = FUNC_12(VAR_16, "svc_ref_clk");
 if (FUNC_0(VAR_15->svc_ref_clk)) {
  VAR_18 = FUNC_1(VAR_15->svc_ref_clk);
  FUNC_7(VAR_16, "failed to get svc_ref_clk: %d\n", VAR_18);
  return VAR_18;
 }

 FUNC_24(VAR_14, VAR_15);

 VAR_15->num_apbs = FUNC_21(VAR_17);
 FUNC_6(VAR_16, "Number of APB's available - %d\n", VAR_15->num_apbs);

 VAR_15->wake_detect = FUNC_13(VAR_16, "svc,wake-detect",
        VAR_3);
 if (FUNC_0(VAR_15->wake_detect)) {
  VAR_18 = FUNC_1(VAR_15->wake_detect);
  FUNC_7(VAR_16, "Failed requesting wake_detect GPIO: %d\n", VAR_18);
  return VAR_18;
 }

 FUNC_4(VAR_15, VAR_9);

 VAR_15->dev = &VAR_14->dev;

 FUNC_26(&VAR_15->wake_lock);
 FUNC_18(&VAR_15->platform_state_mutex);
 VAR_15->wake_detect_irq =
  FUNC_17(VAR_15->wake_detect);

 VAR_18 = FUNC_15(VAR_16, VAR_15->wake_detect_irq,
     VAR_11,
     VAR_12,
     VAR_7 |
     VAR_8 | VAR_6,
     FUNC_9(VAR_16), VAR_15);
 if (VAR_18) {
  FUNC_7(VAR_16, "failed to request wake detect IRQ %d\n", VAR_18);
  return VAR_18;
 }
 FUNC_16(VAR_15->wake_detect_irq);

 VAR_18 = FUNC_10(VAR_16, &VAR_13);
 if (VAR_18) {
  FUNC_7(VAR_16, "failed to create state file in sysfs\n");
  return VAR_18;
 }

 VAR_18 = FUNC_22(VAR_17, ((void*)0), ((void*)0), VAR_16);
 if (VAR_18) {
  FUNC_7(VAR_16, "failed to populate child nodes %d\n", VAR_18);
  goto err_device_remove;
 }

 VAR_15->pm_notifier.notifier_call = VAR_10;
 VAR_18 = FUNC_25(&VAR_15->pm_notifier);

 if (VAR_18) {
  FUNC_7(VAR_16, "failed to register pm notifier %d\n", VAR_18);
  goto err_device_remove;
 }


 if (!FUNC_23(VAR_14->dev.of_node, "arche,init-off")) {
  FUNC_19(&VAR_15->platform_state_mutex);
  VAR_18 = FUNC_2(VAR_15);
  if (VAR_18) {
   FUNC_7(VAR_16, "Failed to cold boot svc %d\n", VAR_18);
   goto err_coldboot;
  }
  FUNC_5(VAR_15);
  FUNC_20(&VAR_15->platform_state_mutex);
 }

 FUNC_8(VAR_16, "Device registered successfully\n");
 return 0;

err_coldboot:
 FUNC_20(&VAR_15->platform_state_mutex);
err_device_remove:
 FUNC_11(&VAR_14->dev, &VAR_13);
 return VAR_18;
}
