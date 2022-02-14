
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct spi_master {int mode_bits; int num_chipselect; int bus_num; TYPE_1__ dev; } ;
struct resource {int dummy; } ;
struct mpc8xxx_spi {unsigned int irq; int done; scalar_t__ tx_shift; scalar_t__ rx_shift; int spibrg; int flags; int get_tx; int get_rx; struct device* dev; } ;
struct fsl_spi_platform_data {int max_chipselect; int bus_num; int sysclk; int flags; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct spi_master* FUNC_0 (struct device*) ;
 struct fsl_spi_platform_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 struct mpc8xxx_spi* FUNC_3 (struct spi_master*) ;

void FUNC_4(struct device *VAR_7, struct resource *VAR_8,
   unsigned int VAR_9)
{
 struct fsl_spi_platform_data *VAR_10 = FUNC_1(VAR_7);
 struct spi_master *VAR_11;
 struct mpc8xxx_spi *VAR_12;

 VAR_11 = FUNC_0(VAR_7);


 VAR_11->mode_bits = VAR_1 | VAR_0 | VAR_2
   | VAR_4 | VAR_3;

 VAR_11->dev.of_node = VAR_7->of_node;

 VAR_12 = FUNC_3(VAR_11);
 VAR_12->dev = VAR_7;
 VAR_12->get_rx = VAR_5;
 VAR_12->get_tx = VAR_6;
 VAR_12->flags = VAR_10->flags;
 VAR_12->spibrg = VAR_10->sysclk;
 VAR_12->irq = VAR_9;

 VAR_12->rx_shift = 0;
 VAR_12->tx_shift = 0;

 VAR_11->bus_num = VAR_10->bus_num;
 VAR_11->num_chipselect = VAR_10->max_chipselect;

 FUNC_2(&VAR_12->done);
}
