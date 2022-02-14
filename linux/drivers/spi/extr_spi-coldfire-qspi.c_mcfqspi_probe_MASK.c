
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int mode_bits; int auto_runtime_pm; int transfer_one; int set_cs; int setup; int bits_per_word_mask; int num_chipselect; int bus_num; } ;
struct platform_device {int dev; int name; } ;
struct mcfqspi_platform_data {scalar_t__ cs_control; int num_chipselect; int bus_num; } ;
struct mcfqspi {scalar_t__ irq; int clk; int waitq; scalar_t__ cs_control; int iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 struct mcfqspi_platform_data* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (int *,scalar_t__,int ,int ,int ,struct mcfqspi*) ;
 int FUNC_11 (int *,struct spi_master*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct mcfqspi*) ;
 int FUNC_14 (struct mcfqspi*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_15 (struct platform_device*,int ) ;
 int FUNC_16 (struct platform_device*,struct spi_master*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 struct spi_master* FUNC_19 (int *,int) ;
 struct mcfqspi* FUNC_20 (struct spi_master*) ;
 int FUNC_21 (struct spi_master*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_11)
{
 struct spi_master *VAR_12;
 struct mcfqspi *VAR_13;
 struct mcfqspi_platform_data *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_6(&VAR_11->dev);
 if (!VAR_14) {
  FUNC_5(&VAR_11->dev, "platform data is missing\n");
  return -VAR_1;
 }

 if (!VAR_14->cs_control) {
  FUNC_5(&VAR_11->dev, "pdata->cs_control is NULL\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_19(&VAR_11->dev, sizeof(*VAR_13));
 if (VAR_12 == ((void*)0)) {
  FUNC_5(&VAR_11->dev, "spi_alloc_master failed\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_20(VAR_12);

 VAR_13->iobase = FUNC_9(VAR_11, 0);
 if (FUNC_0(VAR_13->iobase)) {
  VAR_15 = FUNC_1(VAR_13->iobase);
  goto fail0;
 }

 VAR_13->irq = FUNC_15(VAR_11, 0);
 if (VAR_13->irq < 0) {
  FUNC_5(&VAR_11->dev, "platform_get_irq failed\n");
  VAR_15 = -VAR_3;
  goto fail0;
 }

 VAR_15 = FUNC_10(&VAR_11->dev, VAR_13->irq, VAR_7,
    0, VAR_11->name, VAR_13);
 if (VAR_15) {
  FUNC_5(&VAR_11->dev, "request_irq failed\n");
  goto fail0;
 }

 VAR_13->clk = FUNC_8(&VAR_11->dev, "qspi_clk");
 if (FUNC_0(VAR_13->clk)) {
  FUNC_5(&VAR_11->dev, "clk_get failed\n");
  VAR_15 = FUNC_1(VAR_13->clk);
  goto fail0;
 }
 FUNC_4(VAR_13->clk);

 VAR_12->bus_num = VAR_14->bus_num;
 VAR_12->num_chipselect = VAR_14->num_chipselect;

 VAR_13->cs_control = VAR_14->cs_control;
 VAR_15 = FUNC_13(VAR_13);
 if (VAR_15) {
  FUNC_5(&VAR_11->dev, "error initializing cs_control\n");
  goto fail1;
 }

 FUNC_12(&VAR_13->waitq);

 VAR_12->mode_bits = VAR_6 | VAR_5 | VAR_4;
 VAR_12->bits_per_word_mask = FUNC_2(8, 16);
 VAR_12->setup = VAR_9;
 VAR_12->set_cs = VAR_8;
 VAR_12->transfer_one = VAR_10;
 VAR_12->auto_runtime_pm = 1;

 FUNC_16(VAR_11, VAR_12);
 FUNC_18(&VAR_11->dev);

 VAR_15 = FUNC_11(&VAR_11->dev, VAR_12);
 if (VAR_15) {
  FUNC_5(&VAR_11->dev, "spi_register_master failed\n");
  goto fail2;
 }

 FUNC_7(&VAR_11->dev, "Coldfire QSPI bus driver\n");

 return 0;

fail2:
 FUNC_17(&VAR_11->dev);
 FUNC_14(VAR_13);
fail1:
 FUNC_3(VAR_13->clk);
fail0:
 FUNC_21(VAR_12);

 FUNC_5(&VAR_11->dev, "Coldfire QSPI probe failed\n");

 return VAR_15;
}
