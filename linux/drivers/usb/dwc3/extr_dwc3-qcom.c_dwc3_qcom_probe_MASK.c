
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct dwc3_qcom {scalar_t__ mode; int is_suspended; int num_clocks; int resets; int * clks; TYPE_1__* dwc3; int qscratch_base; TYPE_2__* acpi_pdata; struct device* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {scalar_t__ qscratch_base_size; scalar_t__ qscratch_base_offset; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,struct resource*) ;
 struct dwc3_qcom* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct dwc3_qcom*,int ) ;
 int FUNC_13 (struct platform_device*) ;
 int FUNC_14 (struct dwc3_qcom*) ;
 int FUNC_15 (struct dwc3_qcom*) ;
 int FUNC_16 (struct platform_device*) ;
 int FUNC_17 (struct dwc3_qcom*,int) ;
 scalar_t__ FUNC_18 (struct device*) ;
 struct resource* FUNC_19 (struct resource*,int,int ) ;
 int FUNC_20 (struct device_node*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct platform_device*) ;
 struct resource* FUNC_23 (struct platform_device*,int ,int ) ;
 int FUNC_24 (struct platform_device*,struct dwc3_qcom*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 scalar_t__ FUNC_30 (int *) ;
 int FUNC_31 (int,int) ;

__attribute__((used)) static int FUNC_32(struct platform_device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev.of_node;
 struct device *VAR_7 = &VAR_5->dev;
 struct dwc3_qcom *VAR_8;
 struct resource *VAR_9, *VAR_10 = ((void*)0);
 int VAR_11, VAR_12;
 bool VAR_13;

 VAR_8 = FUNC_9(&VAR_5->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_24(VAR_5, VAR_8);
 VAR_8->dev = &VAR_5->dev;

 if (FUNC_18(VAR_7)) {
  VAR_8->acpi_pdata = FUNC_2(VAR_7);
  if (!VAR_8->acpi_pdata) {
   FUNC_5(&VAR_5->dev, "no supporting ACPI device data\n");
   return -VAR_0;
  }
 }

 VAR_8->resets = FUNC_10(VAR_7);
 if (FUNC_0(VAR_8->resets)) {
  VAR_11 = FUNC_1(VAR_8->resets);
  FUNC_5(&VAR_5->dev, "failed to get resets, err=%d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_28(VAR_8->resets);
 if (VAR_11) {
  FUNC_5(&VAR_5->dev, "failed to assert resets, err=%d\n", VAR_11);
  return VAR_11;
 }

 FUNC_31(10, 1000);

 VAR_11 = FUNC_29(VAR_8->resets);
 if (VAR_11) {
  FUNC_5(&VAR_5->dev, "failed to deassert resets, err=%d\n", VAR_11);
  goto reset_assert;
 }

 VAR_11 = FUNC_12(VAR_8, FUNC_20(VAR_6));
 if (VAR_11) {
  FUNC_5(VAR_7, "failed to get clocks\n");
  goto reset_assert;
 }

 VAR_9 = FUNC_23(VAR_5, VAR_3, 0);

 if (VAR_6) {
  VAR_10 = VAR_9;
 } else {
  VAR_10 = FUNC_19(VAR_9, sizeof(struct resource), VAR_2);
  if (!VAR_10)
   return -VAR_1;

  VAR_10->start = VAR_9->start +
   VAR_8->acpi_pdata->qscratch_base_offset;
  VAR_10->end = VAR_10->start +
   VAR_8->acpi_pdata->qscratch_base_size;
 }

 VAR_8->qscratch_base = FUNC_8(VAR_7, VAR_10);
 if (FUNC_0(VAR_8->qscratch_base)) {
  FUNC_5(VAR_7, "failed to map qscratch, err=%d\n", VAR_11);
  VAR_11 = FUNC_1(VAR_8->qscratch_base);
  goto clk_disable;
 }

 VAR_11 = FUNC_16(VAR_5);
 if (VAR_11) {
  FUNC_5(VAR_7, "failed to setup IRQs, err=%d\n", VAR_11);
  goto clk_disable;
 }





 VAR_13 = FUNC_7(VAR_7,
    "qcom,select-utmi-as-pipe-clk");
 if (VAR_13)
  FUNC_15(VAR_8);

 if (VAR_6)
  VAR_11 = FUNC_13(VAR_5);
 else
  VAR_11 = FUNC_11(VAR_5);

 if (VAR_11) {
  FUNC_5(VAR_7, "failed to register DWC3 Core, err=%d\n", VAR_11);
  goto depopulate;
 }

 VAR_8->mode = FUNC_30(&VAR_8->dwc3->dev);


 if (VAR_8->mode == VAR_4)
  FUNC_17(VAR_8, 1);


 VAR_11 = FUNC_14(VAR_8);
 if (VAR_11)
  goto depopulate;

 FUNC_6(&VAR_5->dev, 1);
 VAR_8->is_suspended = 0;
 FUNC_27(VAR_7);
 FUNC_25(VAR_7);
 FUNC_26(VAR_7);

 return 0;

depopulate:
 if (VAR_6)
  FUNC_21(&VAR_5->dev);
 else
  FUNC_22(VAR_5);
clk_disable:
 for (VAR_12 = VAR_8->num_clocks - 1; VAR_12 >= 0; VAR_12--) {
  FUNC_3(VAR_8->clks[VAR_12]);
  FUNC_4(VAR_8->clks[VAR_12]);
 }
reset_assert:
 FUNC_28(VAR_8->resets);

 return VAR_11;
}
