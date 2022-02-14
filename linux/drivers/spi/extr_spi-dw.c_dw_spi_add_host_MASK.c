
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int fwnode; int of_node; } ;
struct spi_controller {int use_gpio_descriptors; int mode_bits; struct device dev; int can_dma; scalar_t__ set_cs; int flags; int max_speed_hz; int handle_err; int transfer_one; int cleanup; int setup; int num_chipselect; int bus_num; int bits_per_word_mask; } ;
struct dw_spi {int irq; TYPE_1__* dma_ops; scalar_t__ dma_inited; scalar_t__ set_cs; int max_freq; int num_cs; int bus_num; scalar_t__ paddr; scalar_t__ dma_addr; int type; struct spi_controller* master; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int (* dma_init ) (struct dw_spi*) ;int (* dma_exit ) (struct dw_spi*) ;int can_dma; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct spi_controller*) ;
 int VAR_8 ;
 int FUNC_6 (struct dw_spi*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ,struct spi_controller*) ;
 int FUNC_8 (int ,int ,int ,int ,struct spi_controller*) ;
 struct spi_controller* FUNC_9 (struct device*,int ) ;
 int FUNC_10 (struct spi_controller*) ;
 int FUNC_11 (struct spi_controller*,struct dw_spi*) ;
 int FUNC_12 (struct dw_spi*,int ) ;
 int FUNC_13 (struct device*,struct dw_spi*) ;
 int FUNC_14 (struct dw_spi*) ;
 int FUNC_15 (struct dw_spi*) ;

int FUNC_16(struct device *VAR_14, struct dw_spi *VAR_15)
{
 struct spi_controller *VAR_16;
 int VAR_17;

 FUNC_0(VAR_15 == ((void*)0));

 VAR_16 = FUNC_9(VAR_14, 0);
 if (!VAR_16)
  return -VAR_1;

 VAR_15->master = VAR_16;
 VAR_15->type = VAR_7;
 VAR_15->dma_inited = 0;
 VAR_15->dma_addr = (dma_addr_t)(VAR_15->paddr + VAR_0);

 FUNC_11(VAR_16, VAR_15);

 VAR_17 = FUNC_8(VAR_15->irq, VAR_10, VAR_2, FUNC_3(VAR_14),
     VAR_16);
 if (VAR_17 < 0) {
  FUNC_2(VAR_14, "can not get IRQ\n");
  goto err_free_master;
 }

 VAR_16->use_gpio_descriptors = 1;
 VAR_16->mode_bits = VAR_4 | VAR_3 | VAR_5;
 VAR_16->bits_per_word_mask = FUNC_1(4, 16);
 VAR_16->bus_num = VAR_15->bus_num;
 VAR_16->num_chipselect = VAR_15->num_cs;
 VAR_16->setup = VAR_12;
 VAR_16->cleanup = VAR_8;
 VAR_16->set_cs = VAR_11;
 VAR_16->transfer_one = VAR_13;
 VAR_16->handle_err = VAR_9;
 VAR_16->max_speed_hz = VAR_15->max_freq;
 VAR_16->dev.of_node = VAR_14->of_node;
 VAR_16->dev.fwnode = VAR_14->fwnode;
 VAR_16->flags = VAR_6;

 if (VAR_15->set_cs)
  VAR_16->set_cs = VAR_15->set_cs;


 FUNC_13(VAR_14, VAR_15);

 if (VAR_15->dma_ops && VAR_15->dma_ops->dma_init) {
  VAR_17 = VAR_15->dma_ops->dma_init(VAR_15);
  if (VAR_17) {
   FUNC_4(VAR_14, "DMA init failed\n");
   VAR_15->dma_inited = 0;
  } else {
   VAR_16->can_dma = VAR_15->dma_ops->can_dma;
  }
 }

 VAR_17 = FUNC_5(VAR_14, VAR_16);
 if (VAR_17) {
  FUNC_2(&VAR_16->dev, "problem registering spi master\n");
  goto err_dma_exit;
 }

 FUNC_6(VAR_15);
 return 0;

err_dma_exit:
 if (VAR_15->dma_ops && VAR_15->dma_ops->dma_exit)
  VAR_15->dma_ops->dma_exit(VAR_15);
 FUNC_12(VAR_15, 0);
 FUNC_7(VAR_15->irq, VAR_16);
err_free_master:
 FUNC_10(VAR_16);
 return VAR_17;
}
