
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct spi_master {int num_chipselect; int set_cs; int transfer_one; TYPE_1__ dev; int bits_per_word_mask; int mode_bits; int bus_num; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int name; int id; } ;
struct altera_spi {scalar_t__ irq; scalar_t__ base; scalar_t__ imr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int ,int ,int ,struct spi_master*) ;
 int FUNC_6 (TYPE_2__*,struct spi_master*) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (scalar_t__) ;
 struct spi_master* FUNC_9 (TYPE_2__*,int) ;
 struct altera_spi* FUNC_10 (struct spi_master*) ;
 int FUNC_11 (struct spi_master*) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct altera_spi *VAR_10;
 struct spi_master *VAR_11;
 int VAR_12 = -VAR_4;

 VAR_11 = FUNC_9(&VAR_9->dev, sizeof(struct altera_spi));
 if (!VAR_11)
  return VAR_12;


 VAR_11->bus_num = VAR_9->id;
 VAR_11->num_chipselect = 16;
 VAR_11->mode_bits = VAR_5;
 VAR_11->bits_per_word_mask = FUNC_2(1, 16);
 VAR_11->dev.of_node = VAR_9->dev.of_node;
 VAR_11->transfer_one = VAR_8;
 VAR_11->set_cs = VAR_7;

 VAR_10 = FUNC_10(VAR_11);


 VAR_10->base = FUNC_4(VAR_9, 0);
 if (FUNC_0(VAR_10->base)) {
  VAR_12 = FUNC_1(VAR_10->base);
  goto exit;
 }

 VAR_10->imr = 0;
 FUNC_12(VAR_10->imr, VAR_10->base + VAR_0);
 FUNC_12(0, VAR_10->base + VAR_2);
 if (FUNC_8(VAR_10->base + VAR_2) & VAR_3)
  FUNC_8(VAR_10->base + VAR_1);

 VAR_10->irq = FUNC_7(VAR_9, 0);
 if (VAR_10->irq >= 0) {
  VAR_12 = FUNC_5(&VAR_9->dev, VAR_10->irq, VAR_6, 0,
           VAR_9->name, VAR_11);
  if (VAR_12)
   goto exit;
 }

 VAR_12 = FUNC_6(&VAR_9->dev, VAR_11);
 if (VAR_12)
  goto exit;
 FUNC_3(&VAR_9->dev, "base %p, irq %d\n", VAR_10->base, VAR_10->irq);

 return 0;
exit:
 FUNC_11(VAR_11);
 return VAR_12;
}
