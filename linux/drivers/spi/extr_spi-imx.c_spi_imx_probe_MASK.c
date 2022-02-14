
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_20__ {struct device_node* of_node; } ;
struct spi_master {int bus_num; int num_chipselect; int* cs_gpios; int mode_bits; TYPE_9__ dev; int slave_abort; int unprepare_message; int prepare_message; int cleanup; int setup; int bits_per_word_mask; } ;
struct spi_imx_master {int num_chipselect; int* chipselect; } ;
struct spi_imx_devtype_data {int (* intctrl ) (struct spi_imx_data*,int ) ;int (* reset ) (struct spi_imx_data*) ;scalar_t__ has_dmamode; scalar_t__ has_slavemode; } ;
struct TYPE_19__ {struct spi_master* master; int txrx_bufs; int setup_transfer; int chipselect; } ;
struct spi_imx_data {int slave_mode; int spi_drctl; void* clk_per; void* clk_ipg; TYPE_3__ bitbang; struct spi_imx_devtype_data const* devtype_data; int spi_clk; int base_phys; void* base; int xfer_done; TYPE_2__* dev; } ;
struct resource {int start; } ;
struct TYPE_18__ {struct device_node* of_node; } ;
struct platform_device {int id; TYPE_2__ dev; TYPE_1__* id_entry; } ;
struct of_device_id {struct spi_imx_devtype_data* data; } ;
struct device_node {int dummy; } ;
struct TYPE_17__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (TYPE_2__*,char*,...) ;
 struct spi_imx_master* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*) ;
 void* FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (TYPE_2__*,int,int ) ;
 void* FUNC_13 (TYPE_2__*,struct resource*) ;
 int* FUNC_14 (TYPE_9__*,int,int,int ) ;
 int FUNC_15 (TYPE_2__*,int,int ,int ,int ,struct spi_imx_data*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (struct spi_imx_data*) ;
 scalar_t__ FUNC_19 (struct spi_imx_data*) ;
 scalar_t__ FUNC_20 (struct spi_imx_data*) ;
 struct of_device_id* FUNC_21 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_22 (struct device_node*,char*) ;
 int FUNC_23 (struct device_node*,char*,int*) ;
 int FUNC_24 (struct platform_device*,int ) ;
 struct resource* FUNC_25 (struct platform_device*,int ,int ) ;
 int FUNC_26 (struct platform_device*,struct spi_master*) ;
 struct spi_master* FUNC_27 (TYPE_2__*,int) ;
 struct spi_master* FUNC_28 (TYPE_2__*,int) ;
 int FUNC_29 (TYPE_3__*) ;
 int FUNC_30 (TYPE_3__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_31 (TYPE_2__*,struct spi_imx_data*,struct spi_master*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct spi_imx_data* FUNC_32 (struct spi_master*) ;
 int FUNC_33 (struct spi_master*) ;
 int FUNC_34 (struct spi_imx_data*) ;
 int FUNC_35 (struct spi_imx_data*,int ) ;

__attribute__((used)) static int FUNC_36(struct platform_device *VAR_22)
{
 struct device_node *VAR_23 = VAR_22->dev.of_node;
 const struct of_device_id *VAR_24 =
   FUNC_21(VAR_14, &VAR_22->dev);
 struct spi_imx_master *VAR_25 =
   FUNC_8(&VAR_22->dev);
 struct spi_master *VAR_26;
 struct spi_imx_data *VAR_27;
 struct resource *VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32;
 const struct spi_imx_devtype_data *VAR_33 = VAR_24 ? VAR_24->data :
  (struct spi_imx_devtype_data *)VAR_22->id_entry->driver_data;
 bool VAR_34;

 if (!VAR_23 && !VAR_25) {
  FUNC_7(&VAR_22->dev, "can't get the platform data\n");
  return -VAR_1;
 }

 VAR_34 = VAR_33->has_slavemode &&
   FUNC_22(VAR_23, "spi-slave");
 if (VAR_34)
  VAR_26 = FUNC_28(&VAR_22->dev,
      sizeof(struct spi_imx_data));
 else
  VAR_26 = FUNC_27(&VAR_22->dev,
       sizeof(struct spi_imx_data));
 if (!VAR_26)
  return -VAR_2;

 VAR_30 = FUNC_23(VAR_23, "fsl,spi-rdy-drctl", &VAR_32);
 if ((VAR_30 < 0) || (VAR_32 >= 0x3)) {

  VAR_32 = 0;
 }

 FUNC_26(VAR_22, VAR_26);

 VAR_26->bits_per_word_mask = FUNC_2(1, 32);
 VAR_26->bus_num = VAR_23 ? -1 : VAR_22->id;

 VAR_27 = FUNC_32(VAR_26);
 VAR_27->bitbang.master = VAR_26;
 VAR_27->dev = &VAR_22->dev;
 VAR_27->slave_mode = VAR_34;

 VAR_27->devtype_data = VAR_33;


 if (VAR_25) {
  VAR_26->num_chipselect = VAR_25->num_chipselect;
  if (VAR_25->chipselect) {
   VAR_26->cs_gpios = FUNC_14(&VAR_26->dev,
    VAR_26->num_chipselect, sizeof(int),
    VAR_4);
   if (!VAR_26->cs_gpios)
    return -VAR_2;

   for (VAR_29 = 0; VAR_29 < VAR_26->num_chipselect; VAR_29++)
    VAR_26->cs_gpios[VAR_29] = VAR_25->chipselect[VAR_29];
  }
 } else {
  u32 VAR_35;

  if (!FUNC_23(VAR_23, "num-cs", &VAR_35))
   VAR_26->num_chipselect = VAR_35;

 }

 VAR_27->bitbang.chipselect = VAR_12;
 VAR_27->bitbang.setup_transfer = VAR_18;
 VAR_27->bitbang.txrx_bufs = VAR_20;
 VAR_27->bitbang.master->setup = VAR_17;
 VAR_27->bitbang.master->cleanup = VAR_13;
 VAR_27->bitbang.master->prepare_message = VAR_16;
 VAR_27->bitbang.master->unprepare_message = VAR_21;
 VAR_27->bitbang.master->slave_abort = VAR_19;
 VAR_27->bitbang.master->mode_bits = VAR_7 | VAR_6 | VAR_8 | VAR_10;

 if (FUNC_18(VAR_27) || FUNC_19(VAR_27) ||
     FUNC_20(VAR_27))
  VAR_27->bitbang.master->mode_bits |= VAR_9 | VAR_11;

 VAR_27->spi_drctl = VAR_32;

 FUNC_17(&VAR_27->xfer_done);

 VAR_28 = FUNC_25(VAR_22, VAR_5, 0);
 VAR_27->base = FUNC_13(&VAR_22->dev, VAR_28);
 if (FUNC_0(VAR_27->base)) {
  VAR_30 = FUNC_1(VAR_27->base);
  goto out_master_put;
 }
 VAR_27->base_phys = VAR_28->start;

 VAR_31 = FUNC_24(VAR_22, 0);
 if (VAR_31 < 0) {
  VAR_30 = VAR_31;
  goto out_master_put;
 }

 VAR_30 = FUNC_15(&VAR_22->dev, VAR_31, VAR_15, 0,
          FUNC_10(&VAR_22->dev), VAR_27);
 if (VAR_30) {
  FUNC_7(&VAR_22->dev, "can't get irq%d: %d\n", VAR_31, VAR_30);
  goto out_master_put;
 }

 VAR_27->clk_ipg = FUNC_11(&VAR_22->dev, "ipg");
 if (FUNC_0(VAR_27->clk_ipg)) {
  VAR_30 = FUNC_1(VAR_27->clk_ipg);
  goto out_master_put;
 }

 VAR_27->clk_per = FUNC_11(&VAR_22->dev, "per");
 if (FUNC_0(VAR_27->clk_per)) {
  VAR_30 = FUNC_1(VAR_27->clk_per);
  goto out_master_put;
 }

 VAR_30 = FUNC_6(VAR_27->clk_per);
 if (VAR_30)
  goto out_master_put;

 VAR_30 = FUNC_6(VAR_27->clk_ipg);
 if (VAR_30)
  goto out_put_per;

 VAR_27->spi_clk = FUNC_5(VAR_27->clk_per);




 if (VAR_27->devtype_data->has_dmamode) {
  VAR_30 = FUNC_31(&VAR_22->dev, VAR_27, VAR_26);
  if (VAR_30 == -VAR_3)
   goto out_clk_put;

  if (VAR_30 < 0)
   FUNC_7(&VAR_22->dev, "dma setup error %d, use pio\n",
    VAR_30);
 }

 VAR_27->devtype_data->reset(VAR_27);

 VAR_27->devtype_data->intctrl(VAR_27, 0);

 VAR_26->dev.of_node = VAR_22->dev.of_node;
 VAR_30 = FUNC_29(&VAR_27->bitbang);
 if (VAR_30) {
  FUNC_7(&VAR_22->dev, "bitbang start failed with %d\n", VAR_30);
  goto out_clk_put;
 }


 if (!VAR_27->slave_mode && VAR_26->cs_gpios) {
  for (VAR_29 = 0; VAR_29 < VAR_26->num_chipselect; VAR_29++) {
   if (!FUNC_16(VAR_26->cs_gpios[VAR_29]))
    continue;

   VAR_30 = FUNC_12(&VAR_22->dev,
      VAR_26->cs_gpios[VAR_29],
      VAR_0);
   if (VAR_30) {
    FUNC_7(&VAR_22->dev, "Can't get CS GPIO %i\n",
     VAR_26->cs_gpios[VAR_29]);
    goto out_spi_bitbang;
   }
  }
 }

 FUNC_9(&VAR_22->dev, "probed\n");

 FUNC_3(VAR_27->clk_ipg);
 FUNC_3(VAR_27->clk_per);
 return VAR_30;

out_spi_bitbang:
 FUNC_30(&VAR_27->bitbang);
out_clk_put:
 FUNC_4(VAR_27->clk_ipg);
out_put_per:
 FUNC_4(VAR_27->clk_per);
out_master_put:
 FUNC_33(VAR_26);

 return VAR_30;
}
