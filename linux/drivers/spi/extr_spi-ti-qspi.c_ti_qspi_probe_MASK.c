
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u32 ;
struct ti_qspi {int spi_max_frequency; int mmap_enabled; int * mmap_base; int * rx_chan; scalar_t__ mmap_phys_base; int transfer_complete; TYPE_2__* dev; int rx_bb_addr; int rx_bb_dma_addr; int * fclk; int ctrl_reg; int * ctrl_base; int * base; int list_lock; int mmap_size; struct spi_master* master; } ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct spi_master {int mode_bits; int auto_runtime_pm; int bits_per_word_mask; int num_chipselect; int * mem_ops; int * dma_rx; TYPE_1__ dev; int transfer_one_message; int setup; int flags; } ;
struct resource {scalar_t__ start; } ;
struct TYPE_14__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
typedef int dma_cap_mask_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int * FUNC_5 (TYPE_2__*,char*) ;
 void* FUNC_6 (TYPE_2__*,struct resource*) ;
 int FUNC_7 (TYPE_2__*,struct spi_master*) ;
 int FUNC_8 (TYPE_2__*,int ,int *,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct device_node*,char*) ;
 int FUNC_16 (struct device_node*,char*,int*) ;
 int FUNC_17 (struct device_node*,char*,int,int *) ;
 int FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int) ;
 struct resource* FUNC_20 (struct platform_device*,int ,char*) ;
 int FUNC_21 (struct platform_device*,struct ti_qspi*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*,int ) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (struct resource*) ;
 struct spi_master* FUNC_27 (TYPE_2__*,int) ;
 struct ti_qspi* FUNC_28 (struct spi_master*) ;
 int FUNC_29 (struct spi_master*) ;
 int * FUNC_30 (struct device_node*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_31(struct platform_device *VAR_16)
{
 struct ti_qspi *VAR_17;
 struct spi_master *VAR_18;
 struct resource *VAR_19, *VAR_20;
 struct device_node *VAR_21 = VAR_16->dev.of_node;
 u32 VAR_22;
 int VAR_23 = 0, VAR_24, VAR_25;
 dma_cap_mask_t VAR_26;

 VAR_18 = FUNC_27(&VAR_16->dev, sizeof(*VAR_17));
 if (!VAR_18)
  return -VAR_2;

 VAR_18->mode_bits = VAR_9 | VAR_8 | VAR_11 | VAR_12;

 VAR_18->flags = VAR_10;
 VAR_18->setup = VAR_14;
 VAR_18->auto_runtime_pm = 1;
 VAR_18->transfer_one_message = VAR_15;
 VAR_18->dev.of_node = VAR_16->dev.of_node;
 VAR_18->bits_per_word_mask = FUNC_2(32) | FUNC_2(16) |
         FUNC_2(8);
 VAR_18->mem_ops = &VAR_13;

 if (!FUNC_16(VAR_21, "num-cs", &VAR_24))
  VAR_18->num_chipselect = VAR_24;

 VAR_17 = FUNC_28(VAR_18);
 VAR_17->master = VAR_18;
 VAR_17->dev = &VAR_16->dev;
 FUNC_21(VAR_16, VAR_17);

 VAR_19 = FUNC_20(VAR_16, VAR_5, "qspi_base");
 if (VAR_19 == ((void*)0)) {
  VAR_19 = FUNC_19(VAR_16, VAR_5, 0);
  if (VAR_19 == ((void*)0)) {
   FUNC_3(&VAR_16->dev, "missing platform data\n");
   VAR_23 = -VAR_1;
   goto free_master;
  }
 }

 VAR_20 = FUNC_20(VAR_16,
   VAR_5, "qspi_mmap");
 if (VAR_20 == ((void*)0)) {
  VAR_20 = FUNC_19(VAR_16, VAR_5, 1);
  if (VAR_20 == ((void*)0)) {
   FUNC_3(&VAR_16->dev,
    "memory mapped resource not required\n");
  }
 }

 if (VAR_20)
  VAR_17->mmap_size = FUNC_26(VAR_20);

 VAR_25 = FUNC_18(VAR_16, 0);
 if (VAR_25 < 0) {
  VAR_23 = VAR_25;
  goto free_master;
 }

 FUNC_14(&VAR_17->list_lock);

 VAR_17->base = FUNC_6(&VAR_16->dev, VAR_19);
 if (FUNC_0(VAR_17->base)) {
  VAR_23 = FUNC_1(VAR_17->base);
  goto free_master;
 }


 if (FUNC_15(VAR_21, "syscon-chipselects")) {
  VAR_17->ctrl_base =
  FUNC_30(VAR_21,
      "syscon-chipselects");
  if (FUNC_0(VAR_17->ctrl_base)) {
   VAR_23 = FUNC_1(VAR_17->ctrl_base);
   goto free_master;
  }
  VAR_23 = FUNC_17(VAR_21,
       "syscon-chipselects",
       1, &VAR_17->ctrl_reg);
  if (VAR_23) {
   FUNC_3(&VAR_16->dev,
    "couldn't get ctrl_mod reg index\n");
   goto free_master;
  }
 }

 VAR_17->fclk = FUNC_5(&VAR_16->dev, "fck");
 if (FUNC_0(VAR_17->fclk)) {
  VAR_23 = FUNC_1(VAR_17->fclk);
  FUNC_3(&VAR_16->dev, "could not get clk: %d\n", VAR_23);
 }

 FUNC_25(&VAR_16->dev);
 FUNC_24(&VAR_16->dev, VAR_6);
 FUNC_23(&VAR_16->dev);

 if (!FUNC_16(VAR_21, "spi-max-frequency", &VAR_22))
  VAR_17->spi_max_frequency = VAR_22;

 FUNC_10(VAR_26);
 FUNC_9(VAR_0, VAR_26);

 VAR_17->rx_chan = FUNC_12(&VAR_26);
 if (FUNC_0(VAR_17->rx_chan)) {
  FUNC_3(VAR_17->dev,
   "No Rx DMA available, trying mmap mode\n");
  VAR_17->rx_chan = ((void*)0);
  VAR_23 = 0;
  goto no_dma;
 }
 VAR_17->rx_bb_addr = FUNC_8(VAR_17->dev,
           VAR_7,
           &VAR_17->rx_bb_dma_addr,
           VAR_4 | VAR_3);
 if (!VAR_17->rx_bb_addr) {
  FUNC_3(VAR_17->dev,
   "dma_alloc_coherent failed, using PIO mode\n");
  FUNC_11(VAR_17->rx_chan);
  goto no_dma;
 }
 VAR_18->dma_rx = VAR_17->rx_chan;
 FUNC_13(&VAR_17->transfer_complete);
 if (VAR_20)
  VAR_17->mmap_phys_base = (dma_addr_t)VAR_20->start;

no_dma:
 if (!VAR_17->rx_chan && VAR_20) {
  VAR_17->mmap_base = FUNC_6(&VAR_16->dev, VAR_20);
  if (FUNC_0(VAR_17->mmap_base)) {
   FUNC_4(&VAR_16->dev,
     "mmap failed with error %ld using PIO mode\n",
     FUNC_1(VAR_17->mmap_base));
   VAR_17->mmap_base = ((void*)0);
   VAR_18->mem_ops = ((void*)0);
  }
 }
 VAR_17->mmap_enabled = 0;

 VAR_23 = FUNC_7(&VAR_16->dev, VAR_18);
 if (!VAR_23)
  return 0;

 FUNC_22(&VAR_16->dev);
free_master:
 FUNC_29(VAR_18);
 return VAR_23;
}
