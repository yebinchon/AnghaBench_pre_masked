
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct spi_master {int num_chipselect; int mode_bits; int bus_num; TYPE_1__ dev; int set_cs; int transfer_one; } ;
struct resource {int start; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; int name; int id; } ;
struct jcore_spi {int clock_freq; int cs_reg; int base; struct spi_master* master; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 scalar_t__ FUNC_3 (struct clk*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 struct clk* FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*,struct spi_master*) ;
 int FUNC_9 (struct jcore_spi*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct jcore_spi*) ;
 int FUNC_12 (struct resource*) ;
 struct spi_master* FUNC_13 (TYPE_2__*,int) ;
 struct jcore_spi* FUNC_14 (struct spi_master*) ;
 int FUNC_15 (struct spi_master*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev.of_node;
 struct jcore_spi *VAR_11;
 struct spi_master *VAR_12;
 struct resource *VAR_13;
 u32 VAR_14;
 struct clk *VAR_15;
 int VAR_16 = -VAR_1;

 VAR_12 = FUNC_13(&VAR_9->dev, sizeof(struct jcore_spi));
 if (!VAR_12)
  return VAR_16;


 VAR_12->num_chipselect = 3;
 VAR_12->mode_bits = VAR_5 | VAR_4 | VAR_6;
 VAR_12->transfer_one = VAR_8;
 VAR_12->set_cs = VAR_7;
 VAR_12->dev.of_node = VAR_10;
 VAR_12->bus_num = VAR_9->id;

 VAR_11 = FUNC_14(VAR_12);
 VAR_11->master = VAR_12;
 FUNC_11(VAR_9, VAR_11);


 VAR_13 = FUNC_10(VAR_9, VAR_2, 0);
 if (!VAR_13)
  goto exit_busy;
 if (!FUNC_7(&VAR_9->dev, VAR_13->start,
         FUNC_12(VAR_13), VAR_9->name))
  goto exit_busy;
 VAR_11->base = FUNC_6(&VAR_9->dev, VAR_13->start,
     FUNC_12(VAR_13));
 if (!VAR_11->base)
  goto exit_busy;
 VAR_14 = 50000000;
 VAR_15 = FUNC_5(&VAR_9->dev, "ref_clk");
 if (!FUNC_0(VAR_15)) {
  if (FUNC_3(VAR_15) == 0) {
   VAR_14 = FUNC_2(VAR_15);
   FUNC_1(VAR_15);
  } else
   FUNC_4(&VAR_9->dev, "could not enable ref_clk\n");
 }
 VAR_11->clock_freq = VAR_14;


 VAR_11->cs_reg = VAR_3;
 FUNC_9(VAR_11, 400000);


 VAR_16 = FUNC_8(&VAR_9->dev, VAR_12);
 if (VAR_16)
  goto exit;

 return 0;

exit_busy:
 VAR_16 = -VAR_0;
exit:
 FUNC_15(VAR_12);
 return VAR_16;
}
