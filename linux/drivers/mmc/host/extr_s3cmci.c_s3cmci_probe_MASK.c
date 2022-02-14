
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct s3cmci_host {int clk_div; scalar_t__ irq; int irq_state; int clk_rate; TYPE_2__* mem; int base; int dma; int * clk; int irq_cd; scalar_t__ is2440; TYPE_1__* pdata; int pio_active; int complete_what; int sdidata; int sdiimsk; int pio_tasklet; int complete_lock; struct platform_device* pdev; struct mmc_host* mmc; } ;
struct TYPE_12__ {scalar_t__ of_node; TYPE_1__* platform_data; } ;
struct platform_device {TYPE_5__ dev; int name; } ;
struct mmc_host {int ocr_avail; int caps; int f_min; int f_max; int max_blk_count; int max_blk_size; int max_req_size; int max_seg_size; int max_segs; int * ops; } ;
struct TYPE_11__ {int start; } ;
struct TYPE_10__ {int ocr_avail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_5__*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct s3cmci_host*,int ,char*,char*,int ,scalar_t__,int ,int ) ;
 int VAR_15 ;
 int FUNC_10 (TYPE_5__*,char*) ;
 int FUNC_11 (TYPE_5__*,char*,int ,char*,char*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_5__*,char*) ;
 int FUNC_15 (scalar_t__,struct s3cmci_host*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct mmc_host*) ;
 struct mmc_host* FUNC_20 (int,TYPE_5__*) ;
 int FUNC_21 (struct mmc_host*) ;
 int FUNC_22 (struct mmc_host*) ;
 struct s3cmci_host* FUNC_23 (struct mmc_host*) ;
 int VAR_16 ;
 scalar_t__ FUNC_24 (struct platform_device*,int ) ;
 TYPE_2__* FUNC_25 (struct platform_device*,int ,int ) ;
 int FUNC_26 (struct platform_device*,struct mmc_host*) ;
 int FUNC_27 (int ,int ) ;
 scalar_t__ FUNC_28 (scalar_t__,int ,int ,int ,struct s3cmci_host*) ;
 TYPE_2__* FUNC_29 (int ,int ,int ) ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (struct s3cmci_host*) ;
 int FUNC_32 (struct s3cmci_host*) ;
 int FUNC_33 (struct s3cmci_host*) ;
 scalar_t__ FUNC_34 (struct s3cmci_host*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_35 (struct s3cmci_host*) ;
 int FUNC_36 (struct s3cmci_host*) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_39(struct platform_device *VAR_19)
{
 struct s3cmci_host *VAR_20;
 struct mmc_host *VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_21 = FUNC_20(sizeof(struct s3cmci_host), &VAR_19->dev);
 if (!VAR_21) {
  VAR_22 = -VAR_4;
  goto probe_out;
 }

 VAR_20 = FUNC_23(VAR_21);
 VAR_20->mmc = VAR_21;
 VAR_20->pdev = VAR_19;

 if (VAR_19->dev.of_node)
  VAR_22 = FUNC_35(VAR_20);
 else
  VAR_22 = FUNC_36(VAR_20);

 if (VAR_22)
  goto probe_free_host;

 VAR_20->pdata = VAR_19->dev.platform_data;

 FUNC_37(&VAR_20->complete_lock);
 FUNC_38(&VAR_20->pio_tasklet, VAR_16, (unsigned long) VAR_20);

 if (VAR_20->is2440) {
  VAR_20->sdiimsk = VAR_13;
  VAR_20->sdidata = VAR_12;
  VAR_20->clk_div = 1;
 } else {
  VAR_20->sdiimsk = VAR_11;
  VAR_20->sdidata = VAR_10;
  VAR_20->clk_div = 2;
 }

 VAR_20->complete_what = VAR_0;
 VAR_20->pio_active = VAR_14;

 VAR_20->mem = FUNC_25(VAR_19, VAR_5, 0);
 if (!VAR_20->mem) {
  FUNC_10(&VAR_19->dev,
   "failed to get io memory region resource.\n");

  VAR_22 = -VAR_3;
  goto probe_free_gpio;
 }

 VAR_20->mem = FUNC_29(VAR_20->mem->start,
           FUNC_30(VAR_20->mem), VAR_19->name);

 if (!VAR_20->mem) {
  FUNC_10(&VAR_19->dev, "failed to request io memory region.\n");
  VAR_22 = -VAR_3;
  goto probe_free_gpio;
 }

 VAR_20->base = FUNC_17(VAR_20->mem->start, FUNC_30(VAR_20->mem));
 if (!VAR_20->base) {
  FUNC_10(&VAR_19->dev, "failed to ioremap() io memory region.\n");
  VAR_22 = -VAR_2;
  goto probe_free_mem_region;
 }

 VAR_20->irq = FUNC_24(VAR_19, 0);
 if (VAR_20->irq <= 0) {
  VAR_22 = -VAR_2;
  goto probe_iounmap;
 }

 if (FUNC_28(VAR_20->irq, VAR_17, 0, VAR_1, VAR_20)) {
  FUNC_10(&VAR_19->dev, "failed to request mci interrupt.\n");
  VAR_22 = -VAR_3;
  goto probe_iounmap;
 }





 FUNC_12(VAR_20->irq);
 VAR_20->irq_state = 0;



 if (FUNC_34(VAR_20)) {
  VAR_20->dma = FUNC_14(&VAR_19->dev, "rx-tx");
  VAR_22 = FUNC_2(VAR_20->dma);
  if (VAR_22) {
   FUNC_10(&VAR_19->dev, "cannot get DMA channel.\n");
   goto probe_free_irq;
  }
 }

 VAR_20->clk = FUNC_5(&VAR_19->dev, "sdi");
 if (FUNC_0(VAR_20->clk)) {
  FUNC_10(&VAR_19->dev, "failed to find clock source.\n");
  VAR_22 = FUNC_1(VAR_20->clk);
  VAR_20->clk = ((void*)0);
  goto probe_free_dma;
 }

 VAR_22 = FUNC_7(VAR_20->clk);
 if (VAR_22) {
  FUNC_10(&VAR_19->dev, "failed to enable clock source.\n");
  goto clk_free;
 }

 VAR_20->clk_rate = FUNC_6(VAR_20->clk);

 VAR_21->ops = &VAR_18;
 VAR_21->ocr_avail = VAR_8 | VAR_9;



 VAR_21->caps = VAR_6;

 VAR_21->f_min = VAR_20->clk_rate / (VAR_20->clk_div * 256);
 VAR_21->f_max = VAR_20->clk_rate / VAR_20->clk_div;

 if (VAR_20->pdata->ocr_avail)
  VAR_21->ocr_avail = VAR_20->pdata->ocr_avail;

 VAR_21->max_blk_count = 4095;
 VAR_21->max_blk_size = 4095;
 VAR_21->max_req_size = 4095 * 512;
 VAR_21->max_seg_size = VAR_21->max_req_size;

 VAR_21->max_segs = 128;

 FUNC_9(VAR_20, VAR_15,
     "probe: mode:%s mapped mci_base:%p irq:%u irq_cd:%u dma:%p.\n",
     (VAR_20->is2440?"2440":""),
     VAR_20->base, VAR_20->irq, VAR_20->irq_cd, VAR_20->dma);

 VAR_22 = FUNC_32(VAR_20);
 if (VAR_22) {
  FUNC_10(&VAR_19->dev, "failed to register cpufreq\n");
  goto free_dmabuf;
 }

 VAR_22 = FUNC_19(VAR_21);
 if (VAR_22) {
  FUNC_10(&VAR_19->dev, "failed to add mmc host.\n");
  goto free_cpufreq;
 }

 FUNC_33(VAR_20);

 FUNC_26(VAR_19, VAR_21);
 FUNC_11(&VAR_19->dev, "%s - using %s, %s SDIO IRQ\n", FUNC_22(VAR_21),
   FUNC_34(VAR_20) ? "dma" : "pio",
   VAR_21->caps & VAR_7 ? "hw" : "sw");

 return 0;

 free_cpufreq:
 FUNC_31(VAR_20);

 free_dmabuf:
 FUNC_4(VAR_20->clk);

 clk_free:
 FUNC_8(VAR_20->clk);

 probe_free_dma:
 if (FUNC_34(VAR_20))
  FUNC_13(VAR_20->dma);

 probe_free_irq:
 FUNC_15(VAR_20->irq, VAR_20);

 probe_iounmap:
 FUNC_18(VAR_20->base);

 probe_free_mem_region:
 FUNC_27(VAR_20->mem->start, FUNC_30(VAR_20->mem));

 probe_free_gpio:
 if (!VAR_19->dev.of_node)
  for (VAR_23 = FUNC_3(5); VAR_23 <= FUNC_3(10); VAR_23++)
   FUNC_16(VAR_23);

 probe_free_host:
 FUNC_21(VAR_21);

 probe_out:
 return VAR_22;
}
