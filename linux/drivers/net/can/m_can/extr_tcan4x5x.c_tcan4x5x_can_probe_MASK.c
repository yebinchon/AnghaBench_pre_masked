
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcan4x5x_priv {int power; int regmap; struct m_can_classdev* mcan_dev; struct spi_device* spi; int mram_start; int reg_offset; } ;
struct spi_device {int bits_per_word; int dev; int irq; } ;
struct TYPE_4__ {int freq; } ;
struct TYPE_5__ {TYPE_1__ clock; } ;
struct m_can_classdev {int is_peripheral; int hclk; int cclk; TYPE_3__* net; int * data_timing; int * bit_timing; int * ops; int * dev; TYPE_2__ can; scalar_t__ pm_clock_support; struct tcan4x5x_priv* device_data; } ;
struct TYPE_6__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 struct tcan4x5x_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 struct m_can_classdev* FUNC_6 (int *) ;
 int FUNC_7 (struct m_can_classdev*) ;
 int FUNC_8 (struct m_can_classdev*) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (struct spi_device*,struct tcan4x5x_priv*) ;
 int FUNC_11 (struct spi_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (struct m_can_classdev*) ;
 int FUNC_13 (int ,int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_14(struct spi_device *VAR_11)
{
 struct tcan4x5x_priv *VAR_12;
 struct m_can_classdev *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_6(&VAR_11->dev);
 if (!VAR_13)
  return -VAR_0;

 VAR_12 = FUNC_4(&VAR_11->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_0;

 VAR_13->device_data = VAR_12;

 FUNC_7(VAR_13);
 if (FUNC_0(VAR_13->cclk)) {
  FUNC_3(&VAR_11->dev, "no CAN clock source defined\n");
  VAR_14 = VAR_3;
 } else {
  VAR_14 = FUNC_2(VAR_13->cclk);
 }


 if (VAR_14 < 20000000 || VAR_14 > VAR_3)
  return -VAR_1;

 VAR_12->reg_offset = VAR_4;
 VAR_12->mram_start = VAR_5;
 VAR_12->spi = VAR_11;
 VAR_12->mcan_dev = VAR_13;

 VAR_13->pm_clock_support = 0;
 VAR_13->can.clock.freq = VAR_14;
 VAR_13->dev = &VAR_11->dev;
 VAR_13->ops = &VAR_9;
 VAR_13->is_peripheral = 1;
 VAR_13->bit_timing = &VAR_6;
 VAR_13->data_timing = &VAR_8;
 VAR_13->net->irq = VAR_11->irq;

 FUNC_10(VAR_11, VAR_12);

 VAR_15 = FUNC_12(VAR_13);
 if (VAR_15)
  goto out_clk;


 VAR_11->bits_per_word = 32;
 VAR_15 = FUNC_11(VAR_11);
 if (VAR_15)
  goto out_clk;

 VAR_12->regmap = FUNC_5(&VAR_11->dev, &VAR_7,
     &VAR_11->dev, &VAR_10);

 FUNC_13(VAR_12->power, 1);

 VAR_15 = FUNC_8(VAR_13);
 if (VAR_15)
  goto out_power;

 FUNC_9(VAR_13->net, "TCAN4X5X successfully initialized.\n");
 return 0;

out_power:
 FUNC_13(VAR_12->power, 0);
out_clk:
 if (!FUNC_0(VAR_13->cclk)) {
  FUNC_1(VAR_13->cclk);
  FUNC_1(VAR_13->hclk);
 }

 FUNC_3(&VAR_11->dev, "Probe failed, err=%d\n", VAR_15);
 return VAR_15;
}
