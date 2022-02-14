
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int of_node; } ;
struct spi_master {int use_gpio_descriptors; int bus_num; int mode_bits; int transfer_one; int prepare_message; TYPE_1__ dev; int bits_per_word_mask; } ;
struct spi_clps711x_data {int syncio; int syscon; int spi_clk; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (TYPE_2__*,int,int ,int ,int ,struct spi_master*) ;
 int FUNC_7 (TYPE_2__*,struct spi_master*) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 struct spi_master* FUNC_11 (TYPE_2__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct spi_clps711x_data* FUNC_12 (struct spi_master*) ;
 int FUNC_13 (struct spi_master*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8)
{
 struct spi_clps711x_data *VAR_9;
 struct spi_master *VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_8(VAR_8, 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = FUNC_11(&VAR_8->dev, sizeof(*VAR_9));
 if (!VAR_10)
  return -VAR_0;

 VAR_10->use_gpio_descriptors = 1;
 VAR_10->bus_num = -1;
 VAR_10->mode_bits = VAR_1 | VAR_2;
 VAR_10->bits_per_word_mask = FUNC_2(1, 8);
 VAR_10->dev.of_node = VAR_8->dev.of_node;
 VAR_10->prepare_message = VAR_6;
 VAR_10->transfer_one = VAR_7;

 VAR_9 = FUNC_12(VAR_10);

 VAR_9->spi_clk = FUNC_4(&VAR_8->dev, ((void*)0));
 if (FUNC_0(VAR_9->spi_clk)) {
  VAR_12 = FUNC_1(VAR_9->spi_clk);
  goto err_out;
 }

 VAR_9->syscon =
  FUNC_14("cirrus,ep7209-syscon3");
 if (FUNC_0(VAR_9->syscon)) {
  VAR_12 = FUNC_1(VAR_9->syscon);
  goto err_out;
 }

 VAR_9->syncio = FUNC_5(VAR_8, 0);
 if (FUNC_0(VAR_9->syncio)) {
  VAR_12 = FUNC_1(VAR_9->syncio);
  goto err_out;
 }


 FUNC_10(VAR_9->syscon, VAR_4, VAR_3, 0);


 FUNC_9(VAR_9->syncio);

 VAR_12 = FUNC_6(&VAR_8->dev, VAR_11, VAR_5, 0,
          FUNC_3(&VAR_8->dev), VAR_10);
 if (VAR_12)
  goto err_out;

 VAR_12 = FUNC_7(&VAR_8->dev, VAR_10);
 if (!VAR_12)
  return 0;

err_out:
 FUNC_13(VAR_10);

 return VAR_12;
}
