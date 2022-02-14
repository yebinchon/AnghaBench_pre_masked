
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct qcom_nand_controller {void* core_clk; void* aon_clk; int base_dma; int base_phys; void* base; void const* props; struct device* dev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 struct qcom_nand_controller* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int ,int ,int ,int ) ;
 int FUNC_9 (struct device*,int ,int ,int ,int ) ;
 void* FUNC_10 (struct device*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct qcom_nand_controller*) ;
 int FUNC_13 (struct qcom_nand_controller*) ;
 int FUNC_14 (struct platform_device*) ;
 int FUNC_15 (struct qcom_nand_controller*) ;
 int FUNC_16 (struct qcom_nand_controller*) ;
 int FUNC_17 (struct qcom_nand_controller*) ;
 int FUNC_18 (struct resource*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_6)
{
 struct qcom_nand_controller *VAR_7;
 const void *VAR_8;
 struct device *VAR_9 = &VAR_6->dev;
 struct resource *VAR_10;
 int VAR_11;

 VAR_7 = FUNC_7(&VAR_6->dev, sizeof(*VAR_7), VAR_4);
 if (!VAR_7)
  return -VAR_2;

 FUNC_12(VAR_6, VAR_7);
 VAR_7->dev = VAR_9;

 VAR_8 = FUNC_10(VAR_9);
 if (!VAR_8) {
  FUNC_4(&VAR_6->dev, "failed to get device data\n");
  return -VAR_1;
 }

 VAR_7->props = VAR_8;

 VAR_7->core_clk = FUNC_5(VAR_9, "core");
 if (FUNC_0(VAR_7->core_clk))
  return FUNC_1(VAR_7->core_clk);

 VAR_7->aon_clk = FUNC_5(VAR_9, "aon");
 if (FUNC_0(VAR_7->aon_clk))
  return FUNC_1(VAR_7->aon_clk);

 VAR_11 = FUNC_14(VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_11(VAR_6, VAR_5, 0);
 VAR_7->base = FUNC_6(VAR_9, VAR_10);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->base_phys = VAR_10->start;
 VAR_7->base_dma = FUNC_8(VAR_9, VAR_10->start,
        FUNC_18(VAR_10),
        VAR_0, 0);
 if (!VAR_7->base_dma)
  return -VAR_3;

 VAR_11 = FUNC_13(VAR_7);
 if (VAR_11)
  goto err_nandc_alloc;

 VAR_11 = FUNC_3(VAR_7->core_clk);
 if (VAR_11)
  goto err_core_clk;

 VAR_11 = FUNC_3(VAR_7->aon_clk);
 if (VAR_11)
  goto err_aon_clk;

 VAR_11 = FUNC_15(VAR_7);
 if (VAR_11)
  goto err_setup;

 VAR_11 = FUNC_17(VAR_7);
 if (VAR_11)
  goto err_setup;

 return 0;

err_setup:
 FUNC_2(VAR_7->aon_clk);
err_aon_clk:
 FUNC_2(VAR_7->core_clk);
err_core_clk:
 FUNC_16(VAR_7);
err_nandc_alloc:
 FUNC_9(VAR_9, VAR_10->start, FUNC_18(VAR_10),
      VAR_0, 0);

 return VAR_11;
}
