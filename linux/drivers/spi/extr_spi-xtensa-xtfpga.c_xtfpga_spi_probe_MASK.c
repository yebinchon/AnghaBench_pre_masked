
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * txrx_word; int chipselect; struct spi_master* master; } ;
struct xtfpga_spi {TYPE_2__ bitbang; int regs; } ;
struct TYPE_6__ {int of_node; } ;
struct spi_master {TYPE_1__ dev; int bus_num; int bits_per_word_mask; int flags; } ;
struct resource {int dummy; } ;
struct TYPE_8__ {int of_node; int id; } ;
struct platform_device {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,struct resource*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct spi_master*) ;
 struct spi_master* FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 struct xtfpga_spi* FUNC_9 (struct spi_master*) ;
 int FUNC_10 (struct spi_master*) ;
 int FUNC_11 (int,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (struct xtfpga_spi*,int ) ;
 int VAR_9 ;
 int FUNC_13 (struct xtfpga_spi*,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_10)
{
 struct xtfpga_spi *VAR_11;
 struct resource *VAR_12;
 int VAR_13;
 struct spi_master *VAR_14;

 VAR_14 = FUNC_7(&VAR_10->dev, sizeof(struct xtfpga_spi));
 if (!VAR_14)
  return -VAR_2;

 VAR_14->flags = VAR_4;
 VAR_14->bits_per_word_mask = FUNC_2(1, 16);
 VAR_14->bus_num = VAR_10->dev.id;
 VAR_14->dev.of_node = VAR_10->dev.of_node;

 VAR_11 = FUNC_9(VAR_14);
 VAR_11->bitbang.master = VAR_14;
 VAR_11->bitbang.chipselect = VAR_8;
 VAR_11->bitbang.txrx_word[VAR_5] = VAR_9;

 VAR_12 = FUNC_5(VAR_10, VAR_3, 0);
 if (!VAR_12) {
  FUNC_3(&VAR_10->dev, "No memory resource\n");
  VAR_13 = -VAR_1;
  goto err;
 }
 VAR_11->regs = FUNC_4(&VAR_10->dev, VAR_12);
 if (FUNC_0(VAR_11->regs)) {
  VAR_13 = FUNC_1(VAR_11->regs);
  goto err;
 }

 FUNC_13(VAR_11, VAR_7, 0);
 FUNC_11(1000, 2000);
 if (FUNC_12(VAR_11, VAR_6)) {
  FUNC_3(&VAR_10->dev, "Device stuck in busy state\n");
  VAR_13 = -VAR_0;
  goto err;
 }

 VAR_13 = FUNC_8(&VAR_11->bitbang);
 if (VAR_13 < 0) {
  FUNC_3(&VAR_10->dev, "spi_bitbang_start failed\n");
  goto err;
 }

 FUNC_6(VAR_10, VAR_14);
 return 0;
err:
 FUNC_10(VAR_14);
 return VAR_13;
}
