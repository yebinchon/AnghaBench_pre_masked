
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct txx9spi {int baseclk; int last_chipselect; int * clk; int * membase; int waitq; int queue; int lock; int work; } ;
struct spi_master {int max_speed_hz; int mode_bits; int bits_per_word_mask; scalar_t__ num_chipselect; int transfer; int setup; int bus_num; int min_speed_hz; } ;
struct resource {scalar_t__ start; } ;
struct platform_device {int dev; int id; } ;


 int FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,unsigned long long,int,int) ;
 int * FUNC_10 (int *,char*) ;
 int * FUNC_11 (int *,struct resource*) ;
 int FUNC_12 (int *,int,int ,int ,char*,struct txx9spi*) ;
 int FUNC_13 (int *,struct spi_master*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct spi_master*) ;
 struct spi_master* FUNC_18 (int *,int) ;
 struct txx9spi* FUNC_19 (struct spi_master*) ;
 int FUNC_20 (struct spi_master*) ;
 int FUNC_21 (int *) ;
 int VAR_14 ;
 int FUNC_22 (struct txx9spi*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_23 (struct txx9spi*,int,int ) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_18)
{
 struct spi_master *VAR_19;
 struct txx9spi *VAR_20;
 struct resource *VAR_21;
 int VAR_22 = -VAR_1;
 u32 VAR_23;
 int VAR_24;

 VAR_19 = FUNC_18(&VAR_18->dev, sizeof(*VAR_20));
 if (!VAR_19)
  return VAR_22;
 VAR_20 = FUNC_19(VAR_19);
 FUNC_17(VAR_18, VAR_19);

 FUNC_2(&VAR_20->work, VAR_17);
 FUNC_21(&VAR_20->lock);
 FUNC_1(&VAR_20->queue);
 FUNC_14(&VAR_20->waitq);

 VAR_20->clk = FUNC_10(&VAR_18->dev, "spi-baseclk");
 if (FUNC_3(VAR_20->clk)) {
  VAR_22 = FUNC_4(VAR_20->clk);
  VAR_20->clk = ((void*)0);
  goto exit;
 }
 VAR_22 = FUNC_8(VAR_20->clk);
 if (VAR_22) {
  VAR_20->clk = ((void*)0);
  goto exit;
 }
 VAR_20->baseclk = FUNC_7(VAR_20->clk);
 VAR_19->min_speed_hz = FUNC_0(VAR_20->baseclk, VAR_6 + 1);
 VAR_19->max_speed_hz = VAR_20->baseclk / (VAR_7 + 1);

 VAR_21 = FUNC_16(VAR_18, VAR_2, 0);
 VAR_20->membase = FUNC_11(&VAR_18->dev, VAR_21);
 if (FUNC_3(VAR_20->membase))
  goto exit_busy;


 VAR_23 = FUNC_22(VAR_20, VAR_8);
 VAR_23 &= ~(VAR_11 | VAR_12 | VAR_9);
 FUNC_23(VAR_20, VAR_23 | VAR_10 | VAR_9, VAR_8);

 VAR_24 = FUNC_15(VAR_18, 0);
 if (VAR_24 < 0)
  goto exit_busy;
 VAR_22 = FUNC_12(&VAR_18->dev, VAR_24, VAR_14, 0,
          "spi_txx9", VAR_20);
 if (VAR_22)
  goto exit;

 VAR_20->last_chipselect = -1;

 FUNC_9(&VAR_18->dev, "at %#llx, irq %d, %dMHz\n",
   (unsigned long long)VAR_21->start, VAR_24,
   (VAR_20->baseclk + 500000) / 1000000);


 VAR_19->mode_bits = VAR_5 | VAR_4 | VAR_3;

 VAR_19->bus_num = VAR_18->id;
 VAR_19->setup = VAR_15;
 VAR_19->transfer = VAR_16;
 VAR_19->num_chipselect = (u16)VAR_13;
 VAR_19->bits_per_word_mask = FUNC_5(8) | FUNC_5(16);

 VAR_22 = FUNC_13(&VAR_18->dev, VAR_19);
 if (VAR_22)
  goto exit;
 return 0;
exit_busy:
 VAR_22 = -VAR_0;
exit:
 FUNC_6(VAR_20->clk);
 FUNC_20(VAR_19);
 return VAR_22;
}
