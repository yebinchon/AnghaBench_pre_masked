
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tiny_spi_platform_data {unsigned int gpio_cs_count; int baudwidth; int freq; int * gpio_cs; } ;
struct TYPE_2__ {struct spi_master* master; int txrx_bufs; int chipselect; int setup_transfer; } ;
struct tiny_spi {scalar_t__ irq; unsigned int gpio_cs_count; int * gpio_cs; int base; TYPE_1__ bitbang; int baudwidth; int freq; int done; } ;
struct spi_master {int num_chipselect; int mode_bits; int setup; int bus_num; } ;
struct platform_device {int dev; int name; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tiny_spi_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (int *,scalar_t__,int ,int ,int ,struct tiny_spi*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,unsigned int) ;
 scalar_t__ FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct tiny_spi*) ;
 struct spi_master* FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_1__*) ;
 struct tiny_spi* FUNC_16 (struct spi_master*) ;
 int FUNC_17 (struct spi_master*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_18 (struct platform_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_10)
{
 struct tiny_spi_platform_data *VAR_11 = FUNC_2(&VAR_10->dev);
 struct tiny_spi *VAR_12;
 struct spi_master *VAR_13;
 unsigned int VAR_14;
 int VAR_15 = -VAR_1;

 VAR_13 = FUNC_14(&VAR_10->dev, sizeof(struct tiny_spi));
 if (!VAR_13)
  return VAR_15;


 VAR_13->bus_num = VAR_10->id;
 VAR_13->num_chipselect = 255;
 VAR_13->mode_bits = VAR_3 | VAR_2 | VAR_4;
 VAR_13->setup = VAR_7;

 VAR_12 = FUNC_16(VAR_13);
 FUNC_13(VAR_10, VAR_12);


 VAR_12->bitbang.master = VAR_13;
 VAR_12->bitbang.setup_transfer = VAR_8;
 VAR_12->bitbang.chipselect = VAR_5;
 VAR_12->bitbang.txrx_bufs = VAR_9;


 VAR_12->base = FUNC_5(VAR_10, 0);
 if (FUNC_0(VAR_12->base)) {
  VAR_15 = FUNC_1(VAR_12->base);
  goto exit;
 }

 VAR_12->irq = FUNC_12(VAR_10, 0);
 if (VAR_12->irq >= 0) {
  FUNC_10(&VAR_12->done);
  VAR_15 = FUNC_6(&VAR_10->dev, VAR_12->irq, VAR_6, 0,
           VAR_10->name, VAR_12);
  if (VAR_15)
   goto exit;
 }

 if (VAR_11) {
  VAR_12->gpio_cs_count = VAR_11->gpio_cs_count;
  VAR_12->gpio_cs = VAR_11->gpio_cs;
  if (VAR_11->gpio_cs_count && !VAR_11->gpio_cs) {
   VAR_15 = -VAR_0;
   goto exit;
  }
  VAR_12->freq = VAR_11->freq;
  VAR_12->baudwidth = VAR_11->baudwidth;
 } else {
  VAR_15 = FUNC_18(VAR_10);
  if (VAR_15)
   goto exit;
 }
 for (VAR_14 = 0; VAR_14 < VAR_12->gpio_cs_count; VAR_14++) {
  VAR_15 = FUNC_9(VAR_12->gpio_cs[VAR_14], FUNC_4(&VAR_10->dev));
  if (VAR_15)
   goto exit_gpio;
  FUNC_7(VAR_12->gpio_cs[VAR_14], 1);
 }
 VAR_12->bitbang.master->num_chipselect = FUNC_11(1, VAR_12->gpio_cs_count);


 VAR_15 = FUNC_15(&VAR_12->bitbang);
 if (VAR_15)
  goto exit;
 FUNC_3(&VAR_10->dev, "base %p, irq %d\n", VAR_12->base, VAR_12->irq);

 return 0;

exit_gpio:
 while (VAR_14-- > 0)
  FUNC_8(VAR_12->gpio_cs[VAR_14]);
exit:
 FUNC_17(VAR_13);
 return VAR_15;
}
