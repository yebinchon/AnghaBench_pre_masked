
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct spi_ops {int flags; int mode_bits; int transfer_one; int set_config_register; } ;
struct TYPE_18__ {int of_node; } ;
struct spi_controller {int num_chipselect; int auto_runtime_pm; TYPE_2__ dev; int flags; int mode_bits; int unprepare_message; int prepare_message; int transfer_one; int bus_num; } ;
struct rspi_plat_data {int num_chipselect; } ;
struct rspi_data {int rx_irq; int tx_irq; int wait; int clk; int addr; struct spi_controller* ctlr; struct spi_ops const* ops; } ;
struct resource {int dummy; } ;
struct TYPE_19__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; int id; TYPE_1__* id_entry; } ;
struct TYPE_17__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 struct rspi_plat_data* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,struct resource*) ;
 int FUNC_8 (TYPE_3__*,struct spi_controller*) ;
 int FUNC_9 (int *) ;
 struct spi_ops* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct platform_device*,char*) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct rspi_data*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_17 (TYPE_3__*,struct spi_controller*) ;
 int VAR_6 ;
 int FUNC_18 (struct spi_controller*) ;
 int FUNC_19 (TYPE_3__*,struct spi_controller*,struct resource*) ;
 int FUNC_20 (TYPE_3__*,int,int ,char*,struct rspi_data*) ;
 int VAR_7 ;
 struct spi_controller* FUNC_21 (TYPE_3__*,int) ;
 struct rspi_data* FUNC_22 (struct spi_controller*) ;
 int FUNC_23 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_8)
{
 struct resource *VAR_9;
 struct spi_controller *VAR_10;
 struct rspi_data *VAR_11;
 int VAR_12;
 const struct rspi_plat_data *VAR_13;
 const struct spi_ops *VAR_14;

 VAR_10 = FUNC_21(&VAR_8->dev, sizeof(struct rspi_data));
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 VAR_14 = FUNC_10(&VAR_8->dev);
 if (VAR_14) {
  VAR_12 = FUNC_17(&VAR_8->dev, VAR_10);
  if (VAR_12)
   goto error1;
 } else {
  VAR_14 = (struct spi_ops *)VAR_8->id_entry->driver_data;
  VAR_13 = FUNC_3(&VAR_8->dev);
  if (VAR_13 && VAR_13->num_chipselect)
   VAR_10->num_chipselect = VAR_13->num_chipselect;
  else
   VAR_10->num_chipselect = 2;
 }


 if (!VAR_14->set_config_register) {
  FUNC_2(&VAR_8->dev, "there is no set_config_register\n");
  VAR_12 = -VAR_0;
  goto error1;
 }

 VAR_11 = FUNC_22(VAR_10);
 FUNC_14(VAR_8, VAR_11);
 VAR_11->ops = VAR_14;
 VAR_11->ctlr = VAR_10;

 VAR_9 = FUNC_13(VAR_8, VAR_2, 0);
 VAR_11->addr = FUNC_7(&VAR_8->dev, VAR_9);
 if (FUNC_0(VAR_11->addr)) {
  VAR_12 = FUNC_1(VAR_11->addr);
  goto error1;
 }

 VAR_11->clk = FUNC_6(&VAR_8->dev, ((void*)0));
 if (FUNC_0(VAR_11->clk)) {
  FUNC_2(&VAR_8->dev, "cannot get clock\n");
  VAR_12 = FUNC_1(VAR_11->clk);
  goto error1;
 }

 FUNC_16(&VAR_8->dev);

 FUNC_9(&VAR_11->wait);

 VAR_10->bus_num = VAR_8->id;
 VAR_10->auto_runtime_pm = 1;
 VAR_10->transfer_one = VAR_14->transfer_one;
 VAR_10->prepare_message = VAR_6;
 VAR_10->unprepare_message = VAR_7;
 VAR_10->mode_bits = VAR_14->mode_bits;
 VAR_10->flags = VAR_14->flags;
 VAR_10->dev.of_node = VAR_8->dev.of_node;

 VAR_12 = FUNC_12(VAR_8, "rx");
 if (VAR_12 < 0) {
  VAR_12 = FUNC_12(VAR_8, "mux");
  if (VAR_12 < 0)
   VAR_12 = FUNC_11(VAR_8, 0);
  if (VAR_12 >= 0)
   VAR_11->rx_irq = VAR_11->tx_irq = VAR_12;
 } else {
  VAR_11->rx_irq = VAR_12;
  VAR_12 = FUNC_12(VAR_8, "tx");
  if (VAR_12 >= 0)
   VAR_11->tx_irq = VAR_12;
 }
 if (VAR_12 < 0) {
  FUNC_2(&VAR_8->dev, "platform_get_irq error\n");
  goto error2;
 }

 if (VAR_11->rx_irq == VAR_11->tx_irq) {

  VAR_12 = FUNC_20(&VAR_8->dev, VAR_11->rx_irq, VAR_3,
           "mux", VAR_11);
 } else {

  VAR_12 = FUNC_20(&VAR_8->dev, VAR_11->rx_irq, VAR_4,
           "rx", VAR_11);
  if (!VAR_12)
   VAR_12 = FUNC_20(&VAR_8->dev, VAR_11->tx_irq,
            VAR_5, "tx", VAR_11);
 }
 if (VAR_12 < 0) {
  FUNC_2(&VAR_8->dev, "request_irq error\n");
  goto error2;
 }

 VAR_12 = FUNC_19(&VAR_8->dev, VAR_10, VAR_9);
 if (VAR_12 < 0)
  FUNC_5(&VAR_8->dev, "DMA not available, using PIO\n");

 VAR_12 = FUNC_8(&VAR_8->dev, VAR_10);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_8->dev, "devm_spi_register_controller error.\n");
  goto error3;
 }

 FUNC_4(&VAR_8->dev, "probed\n");

 return 0;

error3:
 FUNC_18(VAR_10);
error2:
 FUNC_15(&VAR_8->dev);
error1:
 FUNC_23(VAR_10);

 return VAR_12;
}
