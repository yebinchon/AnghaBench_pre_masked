
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {unsigned int line; int type; int flags; int regshift; scalar_t__ irq; int serial_out; int serial_in; scalar_t__ irqflags; int fifosize; int * dev; int mapbase; int iotype; int * ops; } ;
struct sci_port {int reg_size; scalar_t__* irqs; int rx_trigger; TYPE_1__* params; int sampling_rate_mask; scalar_t__ hscif_tot; scalar_t__ rx_fifo_timeout; struct plat_sci_port const* cfg; struct uart_port port; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct plat_sci_port {int type; int flags; scalar_t__ sampling_rate; int regtype; } ;
struct TYPE_2__ {int fifosize; int sampling_rate_mask; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;



 int FUNC_1 (scalar_t__) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct platform_device*,unsigned int) ;
 scalar_t__ FUNC_3 (struct platform_device*,unsigned int) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct resource const*) ;
 int FUNC_7 (struct sci_port*,int *) ;
 TYPE_1__* FUNC_8 (struct plat_sci_port const*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_13,
      struct sci_port *VAR_14, unsigned int VAR_15,
      const struct plat_sci_port *VAR_16, bool VAR_17)
{
 struct uart_port *VAR_18 = &VAR_14->port;
 const struct resource *VAR_19;
 unsigned int VAR_20;
 int VAR_21;

 VAR_14->cfg = VAR_16;

 VAR_18->ops = &VAR_12;
 VAR_18->iotype = VAR_9;
 VAR_18->line = VAR_15;

 VAR_19 = FUNC_4(VAR_13, VAR_3, 0);
 if (VAR_19 == ((void*)0))
  return -VAR_1;

 VAR_18->mapbase = VAR_19->start;
 VAR_14->reg_size = FUNC_6(VAR_19);

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_14->irqs); ++VAR_20) {
  if (VAR_20)
   VAR_14->irqs[VAR_20] = FUNC_3(VAR_13, VAR_20);
  else
   VAR_14->irqs[VAR_20] = FUNC_2(VAR_13, VAR_20);
 }
 if (VAR_14->irqs[0] < 0)
  return -VAR_2;

 if (VAR_14->irqs[1] < 0)
  for (VAR_20 = 1; VAR_20 < FUNC_0(VAR_14->irqs); VAR_20++)
   VAR_14->irqs[VAR_20] = VAR_14->irqs[0];

 VAR_14->params = FUNC_8(VAR_16);
 if (FUNC_9(VAR_14->params == ((void*)0)))
  return -VAR_0;

 switch (VAR_16->type) {
 case 128:
  VAR_14->rx_trigger = 48;
  break;
 case 131:
  VAR_14->rx_trigger = 64;
  break;
 case 129:
  VAR_14->rx_trigger = 32;
  break;
 case 130:
  if (VAR_16->regtype == VAR_6)

   VAR_14->rx_trigger = 1;
  else
   VAR_14->rx_trigger = 8;
  break;
 default:
  VAR_14->rx_trigger = 1;
  break;
 }

 VAR_14->rx_fifo_timeout = 0;
 VAR_14->hscif_tot = 0;





 VAR_14->sampling_rate_mask = VAR_16->sampling_rate
         ? FUNC_1(VAR_16->sampling_rate)
         : VAR_14->params->sampling_rate_mask;

 if (!VAR_17) {
  VAR_21 = FUNC_7(VAR_14, &VAR_13->dev);
  if (VAR_21 < 0)
   return VAR_21;

  VAR_18->dev = &VAR_13->dev;

  FUNC_5(&VAR_13->dev);
 }

 VAR_18->type = VAR_16->type;
 VAR_18->flags = VAR_8 | VAR_7 | VAR_16->flags;
 VAR_18->fifosize = VAR_14->params->fifosize;

 if (VAR_18->type == VAR_4) {
  if (VAR_14->reg_size >= 0x20)
   VAR_18->regshift = 2;
  else
   VAR_18->regshift = 1;
 }
 VAR_18->irq = VAR_14->irqs[VAR_5];
 VAR_18->irqflags = 0;

 VAR_18->serial_in = VAR_10;
 VAR_18->serial_out = VAR_11;

 return 0;
}
