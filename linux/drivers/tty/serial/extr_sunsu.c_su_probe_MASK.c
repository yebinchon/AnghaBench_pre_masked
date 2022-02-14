
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t line; scalar_t__ type; int uartclk; int membase; int * ops; int flags; TYPE_2__* dev; int irq; int mapbase; int lock; } ;
struct uart_sunsu_port {int su_type; int reg_size; TYPE_3__ port; } ;
struct resource {int start; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct TYPE_4__ {int * irqs; } ;
struct platform_device {struct resource* resource; TYPE_2__ dev; TYPE_1__ archdata; } ;
struct device_node {int dummy; } ;
typedef enum su_type { ____Placeholder_su_type } su_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct uart_sunsu_port*) ;
 struct uart_sunsu_port* FUNC_2 (int,int ) ;
 size_t VAR_11 ;
 int FUNC_3 (struct resource*,int ,int ,char*) ;
 int FUNC_4 (struct resource*,int ,int ) ;
 scalar_t__ FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct platform_device*,struct uart_sunsu_port*) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device_node*) ;
 int FUNC_10 (int ,struct device_node*,int *,size_t,int) ;
 int FUNC_11 (struct uart_sunsu_port*) ;
 int FUNC_12 (struct uart_sunsu_port*) ;
 int VAR_12 ;
 struct uart_sunsu_port* VAR_13 ;
 int VAR_14 ;
 int FUNC_13 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_15)
{
 struct device_node *VAR_16 = VAR_15->dev.of_node;
 struct uart_sunsu_port *VAR_17;
 struct resource *VAR_18;
 enum su_type VAR_19;
 bool VAR_20;
 int VAR_21;

 VAR_19 = FUNC_9(VAR_16);
 if (VAR_19 == VAR_8) {
  if (VAR_11 >= VAR_9)
   return -VAR_0;
  VAR_17 = &VAR_13[VAR_11];
 } else {
  VAR_17 = FUNC_2(sizeof(*VAR_17), VAR_3);
  if (!VAR_17)
   return -VAR_2;
 }

 VAR_17->port.line = VAR_11;

 FUNC_8(&VAR_17->port.lock);

 VAR_17->su_type = VAR_19;

 VAR_18 = &VAR_15->resource[0];
 VAR_17->port.mapbase = VAR_18->start;
 VAR_17->reg_size = FUNC_7(VAR_18);
 VAR_17->port.membase = FUNC_3(VAR_18, 0, VAR_17->reg_size, "su");
 if (!VAR_17->port.membase) {
  if (VAR_19 != VAR_8)
   FUNC_1(VAR_17);
  return -VAR_2;
 }

 VAR_17->port.irq = VAR_15->archdata.irqs[0];

 VAR_17->port.dev = &VAR_15->dev;

 VAR_17->port.type = VAR_4;
 VAR_17->port.uartclk = (VAR_5 * 16);

 VAR_21 = 0;
 if (VAR_17->su_type == VAR_6 || VAR_17->su_type == VAR_7) {
  VAR_21 = FUNC_12(VAR_17);
  if (VAR_21) {
   FUNC_4(&VAR_15->resource[0],
       VAR_17->port.membase, VAR_17->reg_size);
   FUNC_1(VAR_17);
   return VAR_21;
  }
  FUNC_6(VAR_15, VAR_17);

  VAR_11++;

  return 0;
 }

 VAR_17->port.flags |= VAR_10;

 FUNC_11(VAR_17);

 VAR_21 = -VAR_1;
 if (VAR_17->port.type == VAR_4)
  goto out_unmap;

 VAR_17->port.ops = &VAR_12;

 VAR_20 = 0;
 if (FUNC_5(VAR_16, "rsc-console") ||
     FUNC_5(VAR_16, "lom-console"))
  VAR_20 = 1;

 FUNC_10(FUNC_0(), VAR_16,
    &VAR_14, VAR_17->port.line,
    VAR_20);
 VAR_21 = FUNC_13(&VAR_14, &VAR_17->port);
 if (VAR_21)
  goto out_unmap;

 FUNC_6(VAR_15, VAR_17);

 VAR_11++;

 return 0;

out_unmap:
 FUNC_4(&VAR_15->resource[0], VAR_17->port.membase, VAR_17->reg_size);
 FUNC_1(VAR_17);
 return VAR_21;
}
