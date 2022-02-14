
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct rockchip_tsadc_chip {int chn_num; int (* control ) (void*,int) ;int * chn_id; int (* initialize ) (int ,void*,int ) ;} ;
struct rockchip_thermal_data {void* clk; void* pclk; int * sensors; struct rockchip_tsadc_chip const* chip; void* regs; int tshut_polarity; int grf; void* reset; struct platform_device* pdev; } ;
struct resource {int dummy; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;


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
 int FUNC_4 (TYPE_1__*,char*,...) ;
 void* FUNC_5 (TYPE_1__*,char*) ;
 void* FUNC_6 (TYPE_1__*,struct resource*) ;
 struct rockchip_thermal_data* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int,int *,int *,int ,char*,struct rockchip_thermal_data*) ;
 void* FUNC_9 (TYPE_1__*,char*) ;
 struct of_device_id* FUNC_10 (int ,struct device_node*) ;
 int VAR_6 ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct rockchip_thermal_data*) ;
 int FUNC_14 (TYPE_1__*,struct device_node*,struct rockchip_thermal_data*) ;
 int VAR_7 ;
 int FUNC_15 (struct platform_device*,struct rockchip_thermal_data*,int *,int ) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int ,void*,int ) ;
 int FUNC_19 (void*,int) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct rockchip_thermal_data *VAR_10;
 const struct of_device_id *VAR_11;
 struct resource *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_11 = FUNC_10(VAR_6, VAR_9);
 if (!VAR_11)
  return -VAR_2;

 VAR_13 = FUNC_11(VAR_8, 0);
 if (VAR_13 < 0) {
  FUNC_4(&VAR_8->dev, "no irq resource?\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_7(&VAR_8->dev, sizeof(struct rockchip_thermal_data),
          VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->pdev = VAR_8;

 VAR_10->chip = (const struct rockchip_tsadc_chip *)VAR_11->data;
 if (!VAR_10->chip)
  return -VAR_0;

 VAR_12 = FUNC_12(VAR_8, VAR_4, 0);
 VAR_10->regs = FUNC_6(&VAR_8->dev, VAR_12);
 if (FUNC_0(VAR_10->regs))
  return FUNC_1(VAR_10->regs);

 VAR_10->reset = FUNC_9(&VAR_8->dev, "tsadc-apb");
 if (FUNC_0(VAR_10->reset)) {
  VAR_15 = FUNC_1(VAR_10->reset);
  FUNC_4(&VAR_8->dev, "failed to get tsadc reset: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_10->clk = FUNC_5(&VAR_8->dev, "tsadc");
 if (FUNC_0(VAR_10->clk)) {
  VAR_15 = FUNC_1(VAR_10->clk);
  FUNC_4(&VAR_8->dev, "failed to get tsadc clock: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_10->pclk = FUNC_5(&VAR_8->dev, "apb_pclk");
 if (FUNC_0(VAR_10->pclk)) {
  VAR_15 = FUNC_1(VAR_10->pclk);
  FUNC_4(&VAR_8->dev, "failed to get apb_pclk clock: %d\n",
   VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_3(VAR_10->clk);
 if (VAR_15) {
  FUNC_4(&VAR_8->dev, "failed to enable converter clock: %d\n",
   VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_3(VAR_10->pclk);
 if (VAR_15) {
  FUNC_4(&VAR_8->dev, "failed to enable pclk: %d\n", VAR_15);
  goto err_disable_clk;
 }

 FUNC_16(VAR_10->reset);

 VAR_15 = FUNC_14(&VAR_8->dev, VAR_9, VAR_10);
 if (VAR_15) {
  FUNC_4(&VAR_8->dev, "failed to parse device tree data: %d\n",
   VAR_15);
  goto err_disable_pclk;
 }

 VAR_10->chip->initialize(VAR_10->grf, VAR_10->regs,
      VAR_10->tshut_polarity);

 for (VAR_14 = 0; VAR_14 < VAR_10->chip->chn_num; VAR_14++) {
  VAR_15 = FUNC_15(VAR_8, VAR_10,
      &VAR_10->sensors[VAR_14],
      VAR_10->chip->chn_id[VAR_14]);
  if (VAR_15) {
   FUNC_4(&VAR_8->dev,
    "failed to register sensor[%d] : error = %d\n",
    VAR_14, VAR_15);
   goto err_disable_pclk;
  }
 }

 VAR_15 = FUNC_8(&VAR_8->dev, VAR_13, ((void*)0),
       &VAR_7,
       VAR_5,
       "rockchip_thermal", VAR_10);
 if (VAR_15) {
  FUNC_4(&VAR_8->dev,
   "failed to request tsadc irq: %d\n", VAR_15);
  goto err_disable_pclk;
 }

 VAR_10->chip->control(VAR_10->regs, 1);

 for (VAR_14 = 0; VAR_14 < VAR_10->chip->chn_num; VAR_14++)
  FUNC_17(&VAR_10->sensors[VAR_14], 1);

 FUNC_13(VAR_8, VAR_10);

 return 0;

err_disable_pclk:
 FUNC_2(VAR_10->pclk);
err_disable_clk:
 FUNC_2(VAR_10->clk);

 return VAR_15;
}
