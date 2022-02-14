
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {struct device* parent; } ;
struct TYPE_9__ {TYPE_1__ dev; TYPE_2__* priv; } ;
struct TYPE_8__ {int version_id; scalar_t__ base; int write_bufferram; int read_bufferram; int wait; } ;
struct omap2_onenand {scalar_t__ dma_chan; TYPE_3__ mtd; int gpmc_cs; TYPE_2__ onenand; int phys_base; struct platform_device* pdev; scalar_t__ int_gpiod; int dma_done; int irq_done; } ;
struct gpmc_onenand_info {scalar_t__ sync_write; scalar_t__ sync_read; int burst_len; } ;
struct device_node {int dummy; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int,...) ;
 scalar_t__ FUNC_4 (struct device*,char*,int ) ;
 scalar_t__ FUNC_5 (struct device*,struct resource*) ;
 struct omap2_onenand* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int ,int ,int ,char*,struct omap2_onenand*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int *,int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct device*,int ,int,int,struct gpmc_onenand_info*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_3__*,int *,int ) ;
 int FUNC_16 (TYPE_3__*,struct device_node*) ;
 int FUNC_17 (struct device_node*,char*,int *) ;
 int FUNC_18 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_19 (struct omap2_onenand*,scalar_t__,scalar_t__,int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*,int) ;
 struct resource* FUNC_22 (struct platform_device*,int ,int ) ;
 int FUNC_23 (struct platform_device*,struct omap2_onenand*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_12)
{
 u32 VAR_13;
 dma_cap_mask_t VAR_14;
 int VAR_15, VAR_16, VAR_17;
 struct resource *VAR_18;
 struct omap2_onenand *VAR_19;
 struct gpmc_onenand_info VAR_20;
 struct device *VAR_21 = &VAR_12->dev;
 struct device_node *VAR_22 = VAR_21->of_node;

 VAR_18 = FUNC_22(VAR_12, VAR_6, 0);
 if (!VAR_18) {
  FUNC_2(VAR_21, "error getting memory resource\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_17(VAR_22, "reg", &VAR_13);
 if (VAR_17) {
  FUNC_2(VAR_21, "reg not found in DT\n");
  return VAR_17;
 }

 VAR_19 = FUNC_6(VAR_21, sizeof(struct omap2_onenand), VAR_4);
 if (!VAR_19)
  return -VAR_2;

 FUNC_14(&VAR_19->irq_done);
 FUNC_14(&VAR_19->dma_done);
 VAR_19->gpmc_cs = VAR_13;
 VAR_19->phys_base = VAR_18->start;

 VAR_19->onenand.base = FUNC_5(VAR_21, VAR_18);
 if (FUNC_0(VAR_19->onenand.base))
  return FUNC_1(VAR_19->onenand.base);

 VAR_19->int_gpiod = FUNC_4(VAR_21, "int", VAR_5);
 if (FUNC_0(VAR_19->int_gpiod)) {
  VAR_17 = FUNC_1(VAR_19->int_gpiod);

  if (VAR_17 != -VAR_3)
   FUNC_2(VAR_21, "error getting gpio: %d\n", VAR_17);
  return VAR_17;
 }

 if (VAR_19->int_gpiod) {
  VAR_17 = FUNC_7(VAR_21, FUNC_12(VAR_19->int_gpiod),
         VAR_8,
         VAR_7, "onenand", VAR_19);
  if (VAR_17)
   return VAR_17;

  VAR_19->onenand.wait = VAR_10;
 }

 FUNC_9(VAR_14);
 FUNC_8(VAR_0, VAR_14);

 VAR_19->dma_chan = FUNC_11(VAR_14, ((void*)0), ((void*)0));
 if (VAR_19->dma_chan) {
  VAR_19->onenand.read_bufferram = VAR_9;
  VAR_19->onenand.write_bufferram = VAR_11;
 }

 VAR_19->pdev = VAR_12;
 VAR_19->mtd.priv = &VAR_19->onenand;
 VAR_19->mtd.dev.parent = VAR_21;
 FUNC_16(&VAR_19->mtd, VAR_21->of_node);

 FUNC_3(VAR_21, "initializing on CS%d (0x%08lx), va %p, %s mode\n",
   VAR_19->gpmc_cs, VAR_19->phys_base, VAR_19->onenand.base,
   VAR_19->dma_chan ? "DMA" : "PIO");

 if ((VAR_17 = FUNC_21(&VAR_19->mtd, 1)) < 0)
  goto err_release_dma;

 VAR_15 = FUNC_18(VAR_19->onenand.version_id);
 if (VAR_15 > 0) {
  switch (VAR_15) {
  case 104:
   VAR_16 = 7;
   break;
  case 83:
   VAR_16 = 6;
   break;
  case 66:
   VAR_16 = 5;
   break;
  case 56:
   VAR_16 = 4;
   break;
  default:
   VAR_16 = 3;
   break;
  }

  VAR_17 = FUNC_13(VAR_21, VAR_19->gpmc_cs,
        VAR_15, VAR_16, &VAR_20);
  if (VAR_17)
   goto err_release_onenand;

  VAR_17 = FUNC_19(VAR_19, VAR_20.sync_read, VAR_20.sync_write,
       VAR_16, VAR_20.burst_len);
  if (VAR_17)
   goto err_release_onenand;

  if (VAR_20.sync_read || VAR_20.sync_write)
   FUNC_3(VAR_21, "optimized timings for %d MHz\n", VAR_15);
 }

 VAR_17 = FUNC_15(&VAR_19->mtd, ((void*)0), 0);
 if (VAR_17)
  goto err_release_onenand;

 FUNC_23(VAR_12, VAR_19);

 return 0;

err_release_onenand:
 FUNC_20(&VAR_19->mtd);
err_release_dma:
 if (VAR_19->dma_chan)
  FUNC_10(VAR_19->dma_chan);

 return VAR_17;
}
