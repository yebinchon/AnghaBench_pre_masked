
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int of_node; } ;
struct spi_controller {int mode_bits; int flags; void* min_speed_hz; void* max_speed_hz; int cleanup; int can_dma; int unprepare_message; int prepare_message; int transfer_one; int setup; int bits_per_word_mask; TYPE_1__ dev; } ;
struct resource {int start; } ;
struct TYPE_12__ {TYPE_2__* parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct clk {int dummy; } ;
struct at91_usart_spi {int irq; int xfer_completion; int lock; int mpdev; int phybase; int spi_clk; struct clk* clk; struct clk* regs; TYPE_3__* dev; } ;
struct TYPE_11__ {int of_node; } ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct platform_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct spi_controller*,struct at91_usart_spi*) ;
 int FUNC_6 (struct at91_usart_spi*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (struct at91_usart_spi*,int ) ;
 int FUNC_8 (struct spi_controller*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct clk*) ;
 int FUNC_10 (struct clk*) ;
 int FUNC_11 (struct clk*) ;
 int FUNC_12 (TYPE_3__*,char*,int ,int *,int) ;
 int FUNC_13 (TYPE_3__*) ;
 struct clk* FUNC_14 (TYPE_2__*,char*) ;
 struct clk* FUNC_15 (TYPE_3__*,struct resource*) ;
 int FUNC_16 (TYPE_3__*,int,int ,int ,int ,struct spi_controller*) ;
 int FUNC_17 (TYPE_3__*,struct spi_controller*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int ) ;
 struct resource* FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct spi_controller*) ;
 struct spi_controller* FUNC_22 (TYPE_3__*,int) ;
 struct at91_usart_spi* FUNC_23 (struct spi_controller*) ;
 int FUNC_24 (struct spi_controller*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_19)
{
 struct resource *VAR_20;
 struct spi_controller *VAR_21;
 struct at91_usart_spi *VAR_22;
 struct clk *VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_20 = FUNC_20(FUNC_26(VAR_19->dev.parent),
         VAR_2, 0);
 if (!VAR_20)
  return -VAR_0;

 VAR_24 = FUNC_19(FUNC_26(VAR_19->dev.parent), 0);
 if (VAR_24 < 0)
  return VAR_24;

 VAR_23 = FUNC_14(VAR_19->dev.parent, "usart");
 if (FUNC_1(VAR_23))
  return FUNC_2(VAR_23);

 VAR_25 = -VAR_1;
 VAR_21 = FUNC_22(&VAR_19->dev, sizeof(*VAR_22));
 if (!VAR_21)
  goto at91_usart_spi_probe_fail;

 VAR_25 = FUNC_4(VAR_19);
 if (VAR_25)
  goto at91_usart_spi_probe_fail;

 VAR_21->mode_bits = VAR_4 | VAR_3 | VAR_6 | VAR_5;
 VAR_21->dev.of_node = VAR_19->dev.parent->of_node;
 VAR_21->bits_per_word_mask = FUNC_3(8);
 VAR_21->setup = VAR_16;
 VAR_21->flags = VAR_7 | VAR_8;
 VAR_21->transfer_one = VAR_17;
 VAR_21->prepare_message = VAR_15;
 VAR_21->unprepare_message = VAR_18;
 VAR_21->can_dma = VAR_12;
 VAR_21->cleanup = VAR_13;
 VAR_21->max_speed_hz = FUNC_0(FUNC_10(VAR_23),
      VAR_10);
 VAR_21->min_speed_hz = FUNC_0(FUNC_10(VAR_23),
      VAR_9);
 FUNC_21(VAR_19, VAR_21);

 VAR_22 = FUNC_23(VAR_21);

 VAR_22->dev = &VAR_19->dev;
 VAR_22->regs = FUNC_15(&VAR_19->dev, VAR_20);
 if (FUNC_1(VAR_22->regs)) {
  VAR_25 = FUNC_2(VAR_22->regs);
  goto at91_usart_spi_probe_fail;
 }

 VAR_22->irq = VAR_24;
 VAR_22->clk = VAR_23;

 VAR_25 = FUNC_16(&VAR_19->dev, VAR_24, VAR_14, 0,
          FUNC_13(&VAR_19->dev), VAR_21);
 if (VAR_25)
  goto at91_usart_spi_probe_fail;

 VAR_25 = FUNC_11(VAR_23);
 if (VAR_25)
  goto at91_usart_spi_probe_fail;

 VAR_22->spi_clk = FUNC_10(VAR_23);
 FUNC_6(VAR_22);

 VAR_22->phybase = VAR_20->start;

 VAR_22->mpdev = FUNC_26(VAR_19->dev.parent);

 VAR_25 = FUNC_5(VAR_21, VAR_22);
 if (VAR_25)
  goto at91_usart_fail_dma;

 FUNC_25(&VAR_22->lock);
 FUNC_18(&VAR_22->xfer_completion);

 VAR_25 = FUNC_17(&VAR_19->dev, VAR_21);
 if (VAR_25)
  goto at91_usart_fail_register_master;

 FUNC_12(&VAR_19->dev,
   "AT91 USART SPI Controller version 0x%x at %pa (irq %d)\n",
   FUNC_7(VAR_22, VAR_11),
   &VAR_20->start, VAR_24);

 return 0;

at91_usart_fail_register_master:
 FUNC_8(VAR_21);
at91_usart_fail_dma:
 FUNC_9(VAR_23);
at91_usart_spi_probe_fail:
 FUNC_24(VAR_21);
 return VAR_25;
}
