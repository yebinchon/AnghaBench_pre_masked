
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spi_master {int mode_bits; int setup; int bits_per_word_mask; int bus_num; int num_chipselect; } ;
struct TYPE_3__ {int txrx_bufs; int chipselect; int setup_transfer; struct spi_master* master; } ;
struct s3c24xx_spi {scalar_t__ irq; struct spi_master* master; int clk; TYPE_1__ bitbang; scalar_t__ set_cs; int regs; int * dev; struct s3c2410_spi_info* pdata; int done; } ;
struct s3c2410_spi_info {scalar_t__ pin_cs; scalar_t__ set_cs; int bus_num; int num_cs; } ;
struct platform_device {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,TYPE_1__*) ;
 int FUNC_5 (int *,char*) ;
 struct s3c2410_spi_info* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,scalar_t__,int ) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (int *,scalar_t__,int ,int ,int ,struct s3c24xx_spi*) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*,struct s3c24xx_spi*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_16 (struct s3c24xx_spi*) ;
 int FUNC_17 (struct s3c24xx_spi*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct spi_master* FUNC_18 (int *,int) ;
 int FUNC_19 (TYPE_1__*) ;
 struct s3c24xx_spi* FUNC_20 (struct spi_master*) ;
 int FUNC_21 (struct spi_master*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_12)
{
 struct s3c2410_spi_info *VAR_13;
 struct s3c24xx_spi *VAR_14;
 struct spi_master *VAR_15;
 int VAR_16 = 0;

 VAR_15 = FUNC_18(&VAR_12->dev, sizeof(struct s3c24xx_spi));
 if (VAR_15 == ((void*)0)) {
  FUNC_5(&VAR_12->dev, "No memory for spi_master\n");
  return -VAR_2;
 }

 VAR_14 = FUNC_20(VAR_15);

 VAR_14->master = VAR_15;
 VAR_14->pdata = VAR_13 = FUNC_6(&VAR_12->dev);
 VAR_14->dev = &VAR_12->dev;

 if (VAR_13 == ((void*)0)) {
  FUNC_5(&VAR_12->dev, "No platform data supplied\n");
  VAR_16 = -VAR_1;
  goto err_no_pdata;
 }

 FUNC_15(VAR_12, VAR_14);
 FUNC_13(&VAR_14->done);



 FUNC_16(VAR_14);




 VAR_15->mode_bits = VAR_4 | VAR_3 | VAR_5;

 VAR_15->num_chipselect = VAR_14->pdata->num_cs;
 VAR_15->bus_num = VAR_13->bus_num;
 VAR_15->bits_per_word_mask = FUNC_2(8);



 VAR_14->bitbang.master = VAR_14->master;
 VAR_14->bitbang.setup_transfer = VAR_10;
 VAR_14->bitbang.chipselect = VAR_6;
 VAR_14->bitbang.txrx_bufs = VAR_11;

 VAR_14->master->setup = VAR_9;

 FUNC_4(VAR_14->dev, "bitbang at %p\n", &VAR_14->bitbang);


 VAR_14->regs = FUNC_10(VAR_12, 0);
 if (FUNC_0(VAR_14->regs)) {
  VAR_16 = FUNC_1(VAR_14->regs);
  goto err_no_pdata;
 }

 VAR_14->irq = FUNC_14(VAR_12, 0);
 if (VAR_14->irq < 0) {
  VAR_16 = -VAR_1;
  goto err_no_pdata;
 }

 VAR_16 = FUNC_11(&VAR_12->dev, VAR_14->irq, VAR_8, 0,
    VAR_12->name, VAR_14);
 if (VAR_16) {
  FUNC_5(&VAR_12->dev, "Cannot claim IRQ\n");
  goto err_no_pdata;
 }

 VAR_14->clk = FUNC_8(&VAR_12->dev, "spi");
 if (FUNC_0(VAR_14->clk)) {
  FUNC_5(&VAR_12->dev, "No clock for device\n");
  VAR_16 = FUNC_1(VAR_14->clk);
  goto err_no_pdata;
 }



 if (!VAR_13->set_cs) {
  if (VAR_13->pin_cs < 0) {
   FUNC_5(&VAR_12->dev, "No chipselect pin\n");
   VAR_16 = -VAR_0;
   goto err_register;
  }

  VAR_16 = FUNC_9(&VAR_12->dev, VAR_13->pin_cs,
     FUNC_7(&VAR_12->dev));
  if (VAR_16) {
   FUNC_5(&VAR_12->dev, "Failed to get gpio for cs\n");
   goto err_register;
  }

  VAR_14->set_cs = VAR_7;
  FUNC_12(VAR_13->pin_cs, 1);
 } else
  VAR_14->set_cs = VAR_13->set_cs;

 FUNC_17(VAR_14);



 VAR_16 = FUNC_19(&VAR_14->bitbang);
 if (VAR_16) {
  FUNC_5(&VAR_12->dev, "Failed to register SPI master\n");
  goto err_register;
 }

 return 0;

 err_register:
 FUNC_3(VAR_14->clk);

 err_no_pdata:
 FUNC_21(VAR_14->master);
 return VAR_16;
}
