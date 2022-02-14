
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_ppc4xx_regs {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct spi_master {int mode_bits; int num_chipselect; int bits_per_word_mask; int cleanup; int setup; TYPE_1__ dev; } ;
struct spi_bitbang {struct spi_master* master; scalar_t__ use_dma; int txrx_bufs; int chipselect; int setup_transfer; } ;
struct resource {int start; } ;
struct ppc4xx_spi {int* gpios; unsigned int opb_freq; int mapsize; int irqnum; int mapbase; int regs; struct spi_master* master; struct spi_bitbang bitbang; int done; struct device* dev; } ;
struct device {scalar_t__ dma_mask; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int name; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct ppc4xx_spi*) ;
 int FUNC_4 (int ,struct ppc4xx_spi*) ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct device_node*,int ) ;
 int* FUNC_12 (int,int,int ) ;
 int FUNC_13 (struct device_node*,int ,struct resource*) ;
 struct device_node* FUNC_14 (int *,int *,char*) ;
 int FUNC_15 (struct device_node*,int,int*) ;
 unsigned int* FUNC_16 (struct device_node*,char*,int *) ;
 int FUNC_17 (struct device_node*) ;
 int FUNC_18 (struct device_node*) ;
 int FUNC_19 (struct platform_device*,struct spi_master*) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ,int ,int ,char*,void*) ;
 int FUNC_22 (int ,int,int ) ;
 int FUNC_23 (struct resource*) ;
 struct spi_master* FUNC_24 (struct device*,int) ;
 int FUNC_25 (struct spi_bitbang*) ;
 struct ppc4xx_spi* FUNC_26 (struct spi_master*) ;
 int FUNC_27 (struct spi_master*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_28 (struct ppc4xx_spi*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_19)
{
 struct ppc4xx_spi *VAR_20;
 struct spi_master *VAR_21;
 struct spi_bitbang *VAR_22;
 struct resource VAR_23;
 struct device_node *VAR_24 = VAR_19->dev.of_node;
 struct device *VAR_25 = &VAR_19->dev;
 struct device_node *VAR_26;
 int VAR_27;
 int VAR_28;
 const unsigned int *VAR_29;

 VAR_21 = FUNC_24(VAR_25, sizeof *VAR_20);
 if (VAR_21 == ((void*)0))
  return -VAR_5;
 VAR_21->dev.of_node = VAR_24;
 FUNC_19(VAR_19, VAR_21);
 VAR_20 = FUNC_26(VAR_21);
 VAR_20->master = VAR_21;
 VAR_20->dev = VAR_25;

 FUNC_8(&VAR_20->done);






 VAR_28 = FUNC_17(VAR_24);
 if (VAR_28 > 0) {
  int VAR_30;

  VAR_20->gpios = FUNC_12(VAR_28, sizeof(*VAR_20->gpios), VAR_7);
  if (!VAR_20->gpios) {
   VAR_27 = -VAR_5;
   goto free_master;
  }

  for (VAR_30 = 0; VAR_30 < VAR_28; VAR_30++) {
   int VAR_31;
   enum of_gpio_flags VAR_32;

   VAR_31 = FUNC_15(VAR_24, VAR_30, &VAR_32);
   VAR_20->gpios[VAR_30] = VAR_31;

   if (FUNC_6(VAR_31)) {

    VAR_27 = FUNC_7(VAR_31, VAR_24->name);
    if (VAR_27 < 0) {
     FUNC_1(VAR_25,
      "can't request gpio #%d: %d\n",
      VAR_30, VAR_27);
     goto free_gpios;
    }

    FUNC_5(VAR_31,
      !!(VAR_32 & VAR_8));
   } else if (VAR_31 == -VAR_2) {
    ;
   } else {
    FUNC_1(VAR_25, "invalid gpio #%d: %d\n", VAR_30, VAR_31);
    VAR_27 = -VAR_3;
    goto free_gpios;
   }
  }
 }


 VAR_22 = &VAR_20->bitbang;
 VAR_22->master = VAR_20->master;
 VAR_22->setup_transfer = VAR_17;
 VAR_22->chipselect = VAR_13;
 VAR_22->txrx_bufs = VAR_18;
 VAR_22->use_dma = 0;
 VAR_22->master->setup = VAR_16;
 VAR_22->master->cleanup = VAR_14;
 VAR_22->master->bits_per_word_mask = FUNC_0(8);


 VAR_22->master->mode_bits =
  VAR_9 | VAR_10 | VAR_11 | VAR_12;


 VAR_22->master->num_chipselect = VAR_28 > 0 ? VAR_28 : 0;


 VAR_26 = FUNC_14(((void*)0), ((void*)0), "ibm,opb");
 if (VAR_26 == ((void*)0)) {
  FUNC_1(VAR_25, "OPB: cannot find node\n");
  VAR_27 = -VAR_4;
  goto free_gpios;
 }

 VAR_29 = FUNC_16(VAR_26, "clock-frequency", ((void*)0));
 if (VAR_29 == ((void*)0)) {
  FUNC_1(VAR_25, "OPB: no clock-frequency property set\n");
  FUNC_18(VAR_26);
  VAR_27 = -VAR_4;
  goto free_gpios;
 }
 VAR_20->opb_freq = *VAR_29;
 VAR_20->opb_freq >>= 2;
 FUNC_18(VAR_26);

 VAR_27 = FUNC_13(VAR_24, 0, &VAR_23);
 if (VAR_27) {
  FUNC_1(VAR_25, "error while parsing device node resource\n");
  goto free_gpios;
 }
 VAR_20->mapbase = VAR_23.start;
 VAR_20->mapsize = FUNC_23(&VAR_23);


 if (VAR_20->mapsize < sizeof(struct spi_ppc4xx_regs)) {
  FUNC_1(VAR_25, "too small to map registers\n");
  VAR_27 = -VAR_3;
  goto free_gpios;
 }


 VAR_20->irqnum = FUNC_11(VAR_24, 0);
 VAR_27 = FUNC_21(VAR_20->irqnum, VAR_15,
     0, "spi_ppc4xx_of", (void *)VAR_20);
 if (VAR_27) {
  FUNC_1(VAR_25, "unable to allocate interrupt\n");
  goto free_gpios;
 }

 if (!FUNC_22(VAR_20->mapbase, VAR_20->mapsize, VAR_0)) {
  FUNC_1(VAR_25, "resource unavailable\n");
  VAR_27 = -VAR_1;
  goto request_mem_error;
 }

 VAR_20->regs = FUNC_9(VAR_20->mapbase, sizeof(struct spi_ppc4xx_regs));

 if (!VAR_20->regs) {
  FUNC_1(VAR_25, "unable to memory map registers\n");
  VAR_27 = -VAR_6;
  goto map_io_error;
 }

 FUNC_28(VAR_20);


 VAR_25->dma_mask = 0;
 VAR_27 = FUNC_25(VAR_22);
 if (VAR_27) {
  FUNC_1(VAR_25, "failed to register SPI master\n");
  goto unmap_regs;
 }

 FUNC_2(VAR_25, "driver initialized\n");

 return 0;

unmap_regs:
 FUNC_10(VAR_20->regs);
map_io_error:
 FUNC_20(VAR_20->mapbase, VAR_20->mapsize);
request_mem_error:
 FUNC_4(VAR_20->irqnum, VAR_20);
free_gpios:
 FUNC_3(VAR_20);
free_master:
 FUNC_27(VAR_21);

 FUNC_1(VAR_25, "initialization failed\n");
 return VAR_27;
}
