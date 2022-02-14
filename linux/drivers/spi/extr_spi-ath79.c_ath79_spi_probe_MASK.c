
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int of_node; } ;
struct spi_master {int use_gpio_descriptors; int num_chipselect; int bus_num; int cleanup; int setup; int bits_per_word_mask; TYPE_1__ dev; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct ath79_spi_platform_data {int num_chipselect; int bus_num; } ;
struct TYPE_9__ {struct spi_master* master; int flags; int * txrx_word; int chipselect; } ;
struct ath79_spi {unsigned long rrw_delay; TYPE_2__ bitbang; int clk; int base; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ath79_spi*) ;
 int FUNC_5 (struct ath79_spi*) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,char*,unsigned long) ;
 int FUNC_10 (TYPE_3__*,char*) ;
 struct ath79_spi_platform_data* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,char*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct ath79_spi*) ;
 struct spi_master* FUNC_15 (TYPE_3__*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (TYPE_2__*) ;
 struct ath79_spi* FUNC_17 (struct spi_master*) ;
 int FUNC_18 (struct spi_master*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_10)
{
 struct spi_master *VAR_11;
 struct ath79_spi *VAR_12;
 struct ath79_spi_platform_data *VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 VAR_11 = FUNC_15(&VAR_10->dev, sizeof(*VAR_12));
 if (VAR_11 == ((void*)0)) {
  FUNC_10(&VAR_10->dev, "failed to allocate spi master\n");
  return -VAR_2;
 }

 VAR_12 = FUNC_17(VAR_11);
 VAR_11->dev.of_node = VAR_10->dev.of_node;
 FUNC_14(VAR_10, VAR_12);

 VAR_13 = FUNC_11(&VAR_10->dev);

 VAR_11->use_gpio_descriptors = 1;
 VAR_11->bits_per_word_mask = FUNC_3(1, 32);
 VAR_11->setup = VAR_9;
 VAR_11->cleanup = VAR_8;
 if (VAR_13) {
  VAR_11->bus_num = VAR_13->bus_num;
  VAR_11->num_chipselect = VAR_13->num_chipselect;
 }

 VAR_12->bitbang.master = VAR_11;
 VAR_12->bitbang.chipselect = VAR_6;
 VAR_12->bitbang.txrx_word[VAR_5] = VAR_7;
 VAR_12->bitbang.flags = VAR_4;

 VAR_12->base = FUNC_13(VAR_10, 0);
 if (FUNC_1(VAR_12->base)) {
  VAR_15 = FUNC_2(VAR_12->base);
  goto err_put_master;
 }

 VAR_12->clk = FUNC_12(&VAR_10->dev, "ahb");
 if (FUNC_1(VAR_12->clk)) {
  VAR_15 = FUNC_2(VAR_12->clk);
  goto err_put_master;
 }

 VAR_15 = FUNC_8(VAR_12->clk);
 if (VAR_15)
  goto err_put_master;

 VAR_14 = FUNC_0(FUNC_7(VAR_12->clk), VAR_3);
 if (!VAR_14) {
  VAR_15 = -VAR_1;
  goto err_clk_disable;
 }

 VAR_12->rrw_delay = VAR_0 / VAR_14;
 FUNC_9(&VAR_10->dev, "register read/write delay is %u nsecs\n",
  VAR_12->rrw_delay);

 FUNC_5(VAR_12);
 VAR_15 = FUNC_16(&VAR_12->bitbang);
 if (VAR_15)
  goto err_disable;

 return 0;

err_disable:
 FUNC_4(VAR_12);
err_clk_disable:
 FUNC_6(VAR_12->clk);
err_put_master:
 FUNC_18(VAR_12->bitbang.master);

 return VAR_15;
}
