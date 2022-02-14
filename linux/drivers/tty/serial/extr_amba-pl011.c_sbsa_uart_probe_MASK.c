
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int irq; int * ops; int iotype; } ;
struct uart_amba_port {int fifosize; int fixed_baud; int type; TYPE_1__ port; TYPE_2__* vendor; int reg_offset; } ;
struct resource {int dummy; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {scalar_t__ access_32b; int reg_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 struct uart_amba_port* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct uart_amba_port*) ;
 int FUNC_5 (TYPE_4__*,struct uart_amba_port*,struct resource*,int) ;
 int FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct uart_amba_port*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int,char*) ;
 TYPE_2__ VAR_7 ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_9)
{
 struct uart_amba_port *VAR_10;
 struct resource *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;





 if (VAR_9->dev.of_node) {
  struct device_node *VAR_15 = VAR_9->dev.of_node;

  VAR_13 = FUNC_2(VAR_15, "current-speed", &VAR_14);
  if (VAR_13)
   return VAR_13;
 } else {
  VAR_14 = 115200;
 }

 VAR_12 = FUNC_3();
 if (VAR_12 < 0)
  return VAR_12;

 VAR_10 = FUNC_1(&VAR_9->dev, sizeof(struct uart_amba_port),
      VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_13 = FUNC_6(VAR_9, 0);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_10->port.irq = VAR_13;







  VAR_10->vendor = &VAR_8;

 VAR_10->reg_offset = VAR_10->vendor->reg_offset;
 VAR_10->fifosize = 32;
 VAR_10->port.iotype = VAR_10->vendor->access_32b ? VAR_4 : VAR_3;
 VAR_10->port.ops = &VAR_6;
 VAR_10->fixed_baud = VAR_14;

 FUNC_9(VAR_10->type, sizeof(VAR_10->type), "SBSA");

 VAR_11 = FUNC_7(VAR_9, VAR_2, 0);

 VAR_13 = FUNC_5(&VAR_9->dev, VAR_10, VAR_11, VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_8(VAR_9, VAR_10);

 return FUNC_4(VAR_10);
}
