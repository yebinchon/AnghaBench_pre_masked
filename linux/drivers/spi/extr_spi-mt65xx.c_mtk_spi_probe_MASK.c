
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_16__ {int of_node; } ;
struct spi_master {int auto_runtime_pm; int mode_bits; int num_chipselect; int * cs_gpios; int flags; int setup; int can_dma; int transfer_one; int prepare_message; int set_cs; TYPE_1__ dev; } ;
struct resource {int dummy; } ;
struct TYPE_18__ {int coherent_dma_mask; int * dma_mask; int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {TYPE_2__* data; } ;
struct mtk_spi {int pad_num; scalar_t__* pad_sel; TYPE_2__* dev_comp; void* spi_clk; void* parent_clk; void* sel_clk; void* base; } ;
struct TYPE_17__ {scalar_t__ dma_ext; scalar_t__ need_pad_sel; scalar_t__ must_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,void*) ;
 int FUNC_6 (TYPE_3__*,char*,...) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,char*,int,int) ;
 void* FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (TYPE_3__*,int ,int ) ;
 void* FUNC_11 (TYPE_3__*,struct resource*) ;
 scalar_t__* FUNC_12 (TYPE_3__*,int,int,int ) ;
 int FUNC_13 (TYPE_3__*,int,int ,int ,int ,struct spi_master*) ;
 int FUNC_14 (TYPE_3__*,struct spi_master*) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct of_device_id* FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,char*,int,scalar_t__*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct spi_master*) ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*) ;
 struct spi_master* FUNC_24 (TYPE_3__*,int) ;
 struct mtk_spi* FUNC_25 (struct spi_master*) ;
 int FUNC_26 (struct spi_master*) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_20)
{
 struct spi_master *VAR_21;
 struct mtk_spi *VAR_22;
 const struct of_device_id *VAR_23;
 struct resource *VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;

 VAR_21 = FUNC_24(&VAR_20->dev, sizeof(*VAR_22));
 if (!VAR_21) {
  FUNC_6(&VAR_20->dev, "failed to alloc spi master\n");
  return -VAR_4;
 }

 VAR_21->auto_runtime_pm = 1;
 VAR_21->dev.of_node = VAR_20->dev.of_node;
 VAR_21->mode_bits = VAR_10 | VAR_9 | VAR_11;

 VAR_21->set_cs = VAR_17;
 VAR_21->prepare_message = VAR_16;
 VAR_21->transfer_one = VAR_19;
 VAR_21->can_dma = VAR_13;
 VAR_21->setup = VAR_18;

 VAR_23 = FUNC_16(VAR_15, VAR_20->dev.of_node);
 if (!VAR_23) {
  FUNC_6(&VAR_20->dev, "failed to probe of_node\n");
  VAR_27 = -VAR_2;
  goto err_put_master;
 }

 VAR_22 = FUNC_25(VAR_21);
 VAR_22->dev_comp = VAR_23->data;
 if (VAR_22->dev_comp->must_tx)
  VAR_21->flags = VAR_12;

 if (VAR_22->dev_comp->need_pad_sel) {
  VAR_22->pad_num = FUNC_17(
   VAR_20->dev.of_node,
   "mediatek,pad-select");
  if (VAR_22->pad_num < 0) {
   FUNC_6(&VAR_20->dev,
    "No 'mediatek,pad-select' property\n");
   VAR_27 = -VAR_2;
   goto err_put_master;
  }

  VAR_22->pad_sel = FUNC_12(&VAR_20->dev, VAR_22->pad_num,
          sizeof(u32), VAR_5);
  if (!VAR_22->pad_sel) {
   VAR_27 = -VAR_4;
   goto err_put_master;
  }

  for (VAR_25 = 0; VAR_25 < VAR_22->pad_num; VAR_25++) {
   FUNC_18(VAR_20->dev.of_node,
         "mediatek,pad-select",
         VAR_25, &VAR_22->pad_sel[VAR_25]);
   if (VAR_22->pad_sel[VAR_25] > VAR_8) {
    FUNC_6(&VAR_20->dev, "wrong pad-sel[%d]: %u\n",
     VAR_25, VAR_22->pad_sel[VAR_25]);
    VAR_27 = -VAR_2;
    goto err_put_master;
   }
  }
 }

 FUNC_21(VAR_20, VAR_21);

 VAR_24 = FUNC_20(VAR_20, VAR_6, 0);
 if (!VAR_24) {
  VAR_27 = -VAR_3;
  FUNC_6(&VAR_20->dev, "failed to determine base address\n");
  goto err_put_master;
 }

 VAR_22->base = FUNC_11(&VAR_20->dev, VAR_24);
 if (FUNC_1(VAR_22->base)) {
  VAR_27 = FUNC_2(VAR_22->base);
  goto err_put_master;
 }

 VAR_26 = FUNC_19(VAR_20, 0);
 if (VAR_26 < 0) {
  VAR_27 = VAR_26;
  goto err_put_master;
 }

 if (!VAR_20->dev.dma_mask)
  VAR_20->dev.dma_mask = &VAR_20->dev.coherent_dma_mask;

 VAR_27 = FUNC_13(&VAR_20->dev, VAR_26, VAR_14,
          VAR_7, FUNC_7(&VAR_20->dev), VAR_21);
 if (VAR_27) {
  FUNC_6(&VAR_20->dev, "failed to register irq (%d)\n", VAR_27);
  goto err_put_master;
 }

 VAR_22->parent_clk = FUNC_9(&VAR_20->dev, "parent-clk");
 if (FUNC_1(VAR_22->parent_clk)) {
  VAR_27 = FUNC_2(VAR_22->parent_clk);
  FUNC_6(&VAR_20->dev, "failed to get parent-clk: %d\n", VAR_27);
  goto err_put_master;
 }

 VAR_22->sel_clk = FUNC_9(&VAR_20->dev, "sel-clk");
 if (FUNC_1(VAR_22->sel_clk)) {
  VAR_27 = FUNC_2(VAR_22->sel_clk);
  FUNC_6(&VAR_20->dev, "failed to get sel-clk: %d\n", VAR_27);
  goto err_put_master;
 }

 VAR_22->spi_clk = FUNC_9(&VAR_20->dev, "spi-clk");
 if (FUNC_1(VAR_22->spi_clk)) {
  VAR_27 = FUNC_2(VAR_22->spi_clk);
  FUNC_6(&VAR_20->dev, "failed to get spi-clk: %d\n", VAR_27);
  goto err_put_master;
 }

 VAR_27 = FUNC_4(VAR_22->spi_clk);
 if (VAR_27 < 0) {
  FUNC_6(&VAR_20->dev, "failed to enable spi_clk (%d)\n", VAR_27);
  goto err_put_master;
 }

 VAR_27 = FUNC_5(VAR_22->sel_clk, VAR_22->parent_clk);
 if (VAR_27 < 0) {
  FUNC_6(&VAR_20->dev, "failed to clk_set_parent (%d)\n", VAR_27);
  FUNC_3(VAR_22->spi_clk);
  goto err_put_master;
 }

 FUNC_3(VAR_22->spi_clk);

 FUNC_23(&VAR_20->dev);

 VAR_27 = FUNC_14(&VAR_20->dev, VAR_21);
 if (VAR_27) {
  FUNC_6(&VAR_20->dev, "failed to register master (%d)\n", VAR_27);
  goto err_disable_runtime_pm;
 }

 if (VAR_22->dev_comp->need_pad_sel) {
  if (VAR_22->pad_num != VAR_21->num_chipselect) {
   FUNC_6(&VAR_20->dev,
    "pad_num does not match num_chipselect(%d != %d)\n",
    VAR_22->pad_num, VAR_21->num_chipselect);
   VAR_27 = -VAR_2;
   goto err_disable_runtime_pm;
  }

  if (!VAR_21->cs_gpios && VAR_21->num_chipselect > 1) {
   FUNC_6(&VAR_20->dev,
    "cs_gpios not specified and num_chipselect > 1\n");
   VAR_27 = -VAR_2;
   goto err_disable_runtime_pm;
  }

  if (VAR_21->cs_gpios) {
   for (VAR_25 = 0; VAR_25 < VAR_21->num_chipselect; VAR_25++) {
    VAR_27 = FUNC_10(&VAR_20->dev,
       VAR_21->cs_gpios[VAR_25],
       FUNC_7(&VAR_20->dev));
    if (VAR_27) {
     FUNC_6(&VAR_20->dev,
      "can't get CS GPIO %i\n", VAR_25);
     goto err_disable_runtime_pm;
    }
   }
  }
 }

 if (VAR_22->dev_comp->dma_ext)
  VAR_28 = VAR_1;
 else
  VAR_28 = VAR_0;
 VAR_27 = FUNC_15(&VAR_20->dev, FUNC_0(VAR_28));
 if (VAR_27)
  FUNC_8(&VAR_20->dev, "SPI dma_set_mask(%d) failed, ret:%d\n",
      VAR_28, VAR_27);

 return 0;

err_disable_runtime_pm:
 FUNC_22(&VAR_20->dev);
err_put_master:
 FUNC_26(VAR_21);

 return VAR_27;
}
