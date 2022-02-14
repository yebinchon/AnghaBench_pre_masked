
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txrx_bufs; int setup_transfer; int chipselect; struct spi_master* master; } ;
struct uwire_spi {TYPE_1__ bitbang; int ck; } ;
struct spi_master {int mode_bits; int bus_num; int num_chipselect; int cleanup; int setup; int flags; int bits_per_word_mask; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct uwire_spi*) ;
 struct spi_master* FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_1__*) ;
 struct uwire_spi* FUNC_11 (struct spi_master*) ;
 int FUNC_12 (struct spi_master*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (struct uwire_spi*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_14 (int ,int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_16)
{
 struct spi_master *VAR_17;
 struct uwire_spi *VAR_18;
 int VAR_19;

 VAR_17 = FUNC_9(&VAR_16->dev, sizeof *VAR_18);
 if (!VAR_17)
  return -VAR_0;

 VAR_18 = FUNC_11(VAR_17);

 VAR_9 = FUNC_7(&VAR_16->dev, VAR_6, VAR_7);
 if (!VAR_9) {
  FUNC_5(&VAR_16->dev, "can't ioremap UWIRE\n");
  FUNC_12(VAR_17);
  return -VAR_1;
 }

 FUNC_8(VAR_16, VAR_18);

 VAR_18->ck = FUNC_6(&VAR_16->dev, "fck");
 if (FUNC_0(VAR_18->ck)) {
  VAR_19 = FUNC_1(VAR_18->ck);
  FUNC_5(&VAR_16->dev, "no functional clock?\n");
  FUNC_12(VAR_17);
  return VAR_19;
 }
 FUNC_3(VAR_18->ck);

 if (FUNC_4())
  VAR_12 = 1;
 else
  VAR_12 = 2;

 FUNC_14(VAR_8, 1);


 VAR_17->mode_bits = VAR_3 | VAR_2 | VAR_4;
 VAR_17->bits_per_word_mask = FUNC_2(1, 16);
 VAR_17->flags = VAR_5;

 VAR_17->bus_num = 2;
 VAR_17->num_chipselect = 4;
 VAR_17->setup = VAR_13;
 VAR_17->cleanup = VAR_11;

 VAR_18->bitbang.master = VAR_17;
 VAR_18->bitbang.chipselect = VAR_10;
 VAR_18->bitbang.setup_transfer = VAR_14;
 VAR_18->bitbang.txrx_bufs = VAR_15;

 VAR_19 = FUNC_10(&VAR_18->bitbang);
 if (VAR_19 < 0) {
  FUNC_13(VAR_18);
 }
 return VAR_19;
}
