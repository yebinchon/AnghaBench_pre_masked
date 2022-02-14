
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int u32 ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_14__ {scalar_t__ of_node; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct of_device_id {struct dsi_module_id_data* data; } ;
struct dsi_module_id_data {scalar_t__ address; int id; } ;
struct TYPE_13__ {int last_reset; } ;
struct dsi_data {scalar_t__ irq; int module_id; int num_lanes_supported; int line_buffer_size; TYPE_11__* vc; struct platform_device* pdev; void* pll_base; void* phy_base; void* proto_base; int te_timer; int framedone_timeout_work; int bus_lock; int lock; TYPE_1__ irq_stats; int irq_stats_lock; scalar_t__ errors; int errors_lock; int irq_lock; } ;
struct device {int dummy; } ;
struct TYPE_12__ {scalar_t__ vc_id; int * dssdev; int source; } ;


 int FUNC_0 (TYPE_11__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int,int) ;
 int VAR_12 ;
 int FUNC_3 (int *,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct platform_device*,int ,int,int) ;
 int FUNC_5 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,struct dsi_data*) ;
 void* FUNC_8 (TYPE_2__*,scalar_t__,int ) ;
 struct dsi_data* FUNC_9 (TYPE_2__*,int,int ) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,int ,int ,int ,struct platform_device*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct platform_device*) ;
 int FUNC_13 (struct platform_device*) ;
 int FUNC_14 (struct platform_device*) ;
 int VAR_20 ;
 int FUNC_15 (struct platform_device*) ;
 int FUNC_16 (struct platform_device*,int ) ;
 int FUNC_17 (struct platform_device*) ;
 int FUNC_18 (struct platform_device*) ;
 int VAR_21 ;
 int FUNC_19 (struct platform_device*) ;
 int FUNC_20 (char*,int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int VAR_22 ;
 int FUNC_22 (int *) ;
 struct of_device_id* FUNC_23 (int ,scalar_t__) ;
 int FUNC_24 (scalar_t__,int *,int *,TYPE_2__*) ;
 int VAR_23 ;
 scalar_t__ FUNC_25 (struct platform_device*,int ) ;
 struct resource* FUNC_26 (struct platform_device*,int ,int ) ;
 struct resource* FUNC_27 (struct platform_device*,int ,char*) ;
 int FUNC_28 (TYPE_2__*) ;
 int FUNC_29 (TYPE_2__*) ;
 int FUNC_30 (struct resource*) ;
 int FUNC_31 (int *,int) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *,int ,int ) ;
 struct platform_device* FUNC_34 (struct device*) ;

__attribute__((used)) static int FUNC_35(struct device *VAR_24, struct device *VAR_25, void *VAR_26)
{
 struct platform_device *VAR_27 = FUNC_34(VAR_24);
 u32 VAR_28;
 int VAR_29, VAR_30;
 struct dsi_data *VAR_31;
 struct resource *VAR_32;
 struct resource *VAR_33;
 struct resource VAR_34;

 VAR_31 = FUNC_9(&VAR_27->dev, sizeof(*VAR_31), VAR_12);
 if (!VAR_31)
  return -VAR_10;

 VAR_31->pdev = VAR_27;
 FUNC_7(&VAR_27->dev, VAR_31);

 FUNC_32(&VAR_31->irq_lock);
 FUNC_32(&VAR_31->errors_lock);
 VAR_31->errors = 0;






 FUNC_22(&VAR_31->lock);
 FUNC_31(&VAR_31->bus_lock, 1);

 FUNC_3(&VAR_31->framedone_timeout_work,
        VAR_19);





 VAR_33 = FUNC_27(VAR_27, VAR_13, "proto");
 if (!VAR_33) {
  VAR_33 = FUNC_26(VAR_27, VAR_13, 0);
  if (!VAR_33) {
   FUNC_1("can't get IORESOURCE_MEM DSI\n");
   return -VAR_8;
  }

  VAR_34.start = VAR_33->start;
  VAR_34.end = VAR_34.start + VAR_5 - 1;
  VAR_33 = &VAR_34;
 }

 VAR_32 = VAR_33;

 VAR_31->proto_base = FUNC_8(&VAR_27->dev, VAR_33->start,
  FUNC_30(VAR_33));
 if (!VAR_31->proto_base) {
  FUNC_1("can't ioremap DSI protocol engine\n");
  return -VAR_10;
 }

 VAR_33 = FUNC_27(VAR_27, VAR_13, "phy");
 if (!VAR_33) {
  VAR_33 = FUNC_26(VAR_27, VAR_13, 0);
  if (!VAR_33) {
   FUNC_1("can't get IORESOURCE_MEM DSI\n");
   return -VAR_8;
  }

  VAR_34.start = VAR_33->start + VAR_1;
  VAR_34.end = VAR_34.start + VAR_2 - 1;
  VAR_33 = &VAR_34;
 }

 VAR_31->phy_base = FUNC_8(&VAR_27->dev, VAR_33->start,
  FUNC_30(VAR_33));
 if (!VAR_31->phy_base) {
  FUNC_1("can't ioremap DSI PHY\n");
  return -VAR_10;
 }

 VAR_33 = FUNC_27(VAR_27, VAR_13, "pll");
 if (!VAR_33) {
  VAR_33 = FUNC_26(VAR_27, VAR_13, 0);
  if (!VAR_33) {
   FUNC_1("can't get IORESOURCE_MEM DSI\n");
   return -VAR_8;
  }

  VAR_34.start = VAR_33->start + VAR_3;
  VAR_34.end = VAR_34.start + VAR_4 - 1;
  VAR_33 = &VAR_34;
 }

 VAR_31->pll_base = FUNC_8(&VAR_27->dev, VAR_33->start,
  FUNC_30(VAR_33));
 if (!VAR_31->pll_base) {
  FUNC_1("can't ioremap DSI PLL\n");
  return -VAR_10;
 }

 VAR_31->irq = FUNC_25(VAR_31->pdev, 0);
 if (VAR_31->irq < 0) {
  FUNC_1("platform_get_irq failed\n");
  return -VAR_9;
 }

 VAR_29 = FUNC_10(&VAR_27->dev, VAR_31->irq, VAR_23,
        VAR_14, FUNC_6(&VAR_27->dev), VAR_31->pdev);
 if (VAR_29 < 0) {
  FUNC_1("request_irq failed\n");
  return VAR_29;
 }

 if (VAR_27->dev.of_node) {
  const struct of_device_id *VAR_35;
  const struct dsi_module_id_data *VAR_36;

  VAR_35 = FUNC_23(VAR_20, VAR_27->dev.of_node);
  if (!VAR_35) {
   FUNC_1("unsupported DSI module\n");
   return -VAR_9;
  }

  VAR_36 = VAR_35->data;

  while (VAR_36->address != 0 && VAR_36->address != VAR_32->start)
   VAR_36++;

  if (VAR_36->address == 0) {
   FUNC_1("unsupported DSI module\n");
   return -VAR_9;
  }

  VAR_31->module_id = VAR_36->id;
 } else {
  VAR_31->module_id = VAR_27->id;
 }


 for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_31->vc); VAR_30++) {
  VAR_31->vc[VAR_30].source = VAR_7;
  VAR_31->vc[VAR_30].dssdev = ((void*)0);
  VAR_31->vc[VAR_30].vc_id = 0;
 }

 VAR_29 = FUNC_11(VAR_27);
 if (VAR_29)
  return VAR_29;

 FUNC_14(VAR_27);

 FUNC_29(&VAR_27->dev);

 VAR_29 = FUNC_17(VAR_27);
 if (VAR_29)
  goto err_runtime_get;

 VAR_28 = FUNC_16(VAR_27, VAR_6);
 FUNC_5(&VAR_27->dev, "OMAP DSI rev %d.%d\n",
        FUNC_2(VAR_28, 7, 4), FUNC_2(VAR_28, 3, 0));



 if (FUNC_21(VAR_11))

  VAR_31->num_lanes_supported = 1 + FUNC_4(VAR_27, VAR_0, 11, 9);
 else
  VAR_31->num_lanes_supported = 3;

 VAR_31->line_buffer_size = FUNC_12(VAR_27);

 FUNC_13(VAR_27);

 if (VAR_27->dev.of_node) {
  VAR_29 = FUNC_15(VAR_27);
  if (VAR_29) {
   FUNC_1("Invalid DSI DT data\n");
   goto err_probe_of;
  }

  VAR_29 = FUNC_24(VAR_27->dev.of_node, ((void*)0), ((void*)0),
   &VAR_27->dev);
  if (VAR_29)
   FUNC_1("Failed to populate DSI child devices: %d\n", VAR_29);
 }

 FUNC_18(VAR_27);

 if (VAR_31->module_id == 0)
  FUNC_20("dsi1_regs", VAR_16);
 else if (VAR_31->module_id == 1)
  FUNC_20("dsi2_regs", VAR_18);
 return 0;

err_probe_of:
 FUNC_19(VAR_27);
 FUNC_18(VAR_27);

err_runtime_get:
 FUNC_28(&VAR_27->dev);
 return VAR_29;
}
