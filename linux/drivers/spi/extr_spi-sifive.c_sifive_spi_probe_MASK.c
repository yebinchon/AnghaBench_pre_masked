
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int of_node; } ;
struct spi_master {int num_chipselect; int mode_bits; int flags; int transfer_one; int set_cs; int prepare_message; int bits_per_word_mask; int bus_num; TYPE_1__ dev; } ;
struct sifive_spi {int fifo_depth; int cs_inactive; int clk; int regs; int done; } ;
struct TYPE_10__ {int * dma_mask; int of_node; } ;
struct platform_device {TYPE_2__ dev; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*,int,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (TYPE_2__*,int,int ,int ,int ,struct sifive_spi*) ;
 int FUNC_10 (TYPE_2__*,struct spi_master*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,int*) ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*,struct spi_master*) ;
 int FUNC_16 (struct sifive_spi*) ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_17 (struct sifive_spi*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_18 (struct sifive_spi*,int ,int) ;
 struct spi_master* FUNC_19 (TYPE_2__*,int) ;
 struct sifive_spi* FUNC_20 (struct spi_master*) ;
 int FUNC_21 (struct spi_master*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_19)
{
 struct sifive_spi *VAR_20;
 int VAR_21, VAR_22, VAR_23;
 u32 VAR_24, VAR_25;
 struct spi_master *VAR_26;

 VAR_26 = FUNC_19(&VAR_19->dev, sizeof(struct sifive_spi));
 if (!VAR_26) {
  FUNC_4(&VAR_19->dev, "out of memory\n");
  return -VAR_1;
 }

 VAR_20 = FUNC_20(VAR_26);
 FUNC_12(&VAR_20->done);
 FUNC_15(VAR_19, VAR_26);

 VAR_20->regs = FUNC_8(VAR_19, 0);
 if (FUNC_0(VAR_20->regs)) {
  VAR_21 = FUNC_1(VAR_20->regs);
  goto put_master;
 }

 VAR_20->clk = FUNC_7(&VAR_19->dev, ((void*)0));
 if (FUNC_0(VAR_20->clk)) {
  FUNC_4(&VAR_19->dev, "Unable to find bus clock\n");
  VAR_21 = FUNC_1(VAR_20->clk);
  goto put_master;
 }

 VAR_22 = FUNC_14(VAR_19, 0);
 if (VAR_22 < 0) {
  VAR_21 = VAR_22;
  goto put_master;
 }


 VAR_21 =
   FUNC_13(VAR_19->dev.of_node, "sifive,fifo-depth",
          &VAR_20->fifo_depth);
 if (VAR_21 < 0)
  VAR_20->fifo_depth = VAR_2;

 VAR_21 =
   FUNC_13(VAR_19->dev.of_node, "sifive,max-bits-per-word",
          &VAR_25);

 if (!VAR_21 && VAR_25 < 8) {
  FUNC_4(&VAR_19->dev, "Only 8bit SPI words supported by the driver\n");
  VAR_21 = -VAR_0;
  goto put_master;
 }


 VAR_21 = FUNC_3(VAR_20->clk);
 if (VAR_21) {
  FUNC_4(&VAR_19->dev, "Unable to enable bus clock\n");
  goto put_master;
 }


 VAR_20->cs_inactive = FUNC_17(VAR_20, VAR_4);
 FUNC_18(VAR_20, VAR_4, 0xffffffffU);
 VAR_24 = FUNC_17(VAR_20, VAR_4);
 FUNC_18(VAR_20, VAR_4, VAR_20->cs_inactive);
 if (!VAR_24) {
  FUNC_4(&VAR_19->dev, "Could not auto probe CS lines\n");
  VAR_21 = -VAR_0;
  goto put_master;
 }

 VAR_23 = FUNC_11(VAR_24) + 1;
 if (VAR_23 > VAR_3) {
  FUNC_4(&VAR_19->dev, "Invalid number of spi slaves\n");
  VAR_21 = -VAR_0;
  goto put_master;
 }


 VAR_26->dev.of_node = VAR_19->dev.of_node;
 VAR_26->bus_num = VAR_19->id;
 VAR_26->num_chipselect = VAR_23;
 VAR_26->mode_bits = VAR_6 | VAR_7
     | VAR_8 | VAR_9
     | VAR_13 | VAR_14
     | VAR_11 | VAR_12;



 VAR_26->bits_per_word_mask = FUNC_2(8);
 VAR_26->flags = VAR_5 | VAR_10;
 VAR_26->prepare_message = VAR_16;
 VAR_26->set_cs = VAR_17;
 VAR_26->transfer_one = VAR_18;

 VAR_19->dev.dma_mask = ((void*)0);

 FUNC_16(VAR_20);


 VAR_21 = FUNC_9(&VAR_19->dev, VAR_22, VAR_15, 0,
          FUNC_6(&VAR_19->dev), VAR_20);
 if (VAR_21) {
  FUNC_4(&VAR_19->dev, "Unable to bind to interrupt\n");
  goto put_master;
 }

 FUNC_5(&VAR_19->dev, "mapped; irq=%d, cs=%d\n",
   VAR_22, VAR_26->num_chipselect);

 VAR_21 = FUNC_10(&VAR_19->dev, VAR_26);
 if (VAR_21 < 0) {
  FUNC_4(&VAR_19->dev, "spi_register_master failed\n");
  goto put_master;
 }

 return 0;

put_master:
 FUNC_21(VAR_26);

 return VAR_21;
}
