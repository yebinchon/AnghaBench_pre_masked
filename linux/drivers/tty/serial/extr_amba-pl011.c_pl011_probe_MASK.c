
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vendor_data {scalar_t__ access_32b; int (* get_fifosize ) (struct amba_device*) ;int reg_offset; } ;
struct TYPE_2__ {int * ops; int irq; int iotype; } ;
struct uart_amba_port {int type; TYPE_1__ port; int fifosize; struct vendor_data* vendor; int reg_offset; int clk; } ;
struct amba_id {struct vendor_data* data; } ;
struct amba_device {int res; int dev; int * irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct amba_device*) ;
 int FUNC_3 (struct amba_device*,struct uart_amba_port*) ;
 int FUNC_4 (int *,int *) ;
 struct uart_amba_port* FUNC_5 (int *,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct uart_amba_port*) ;
 int FUNC_8 (int *,struct uart_amba_port*,int *,int) ;
 int FUNC_9 (int ,int,char*,int) ;
 int FUNC_10 (struct amba_device*) ;

__attribute__((used)) static int FUNC_11(struct amba_device *VAR_5, const struct amba_id *VAR_6)
{
 struct uart_amba_port *VAR_7;
 struct vendor_data *VAR_8 = VAR_6->data;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_6();
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = FUNC_5(&VAR_5->dev, sizeof(struct uart_amba_port),
      VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->clk = FUNC_4(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_7->clk))
  return FUNC_1(VAR_7->clk);

 VAR_7->reg_offset = VAR_8->reg_offset;
 VAR_7->vendor = VAR_8;
 VAR_7->fifosize = VAR_8->get_fifosize(VAR_5);
 VAR_7->port.iotype = VAR_8->access_32b ? VAR_3 : VAR_2;
 VAR_7->port.irq = VAR_5->irq[0];
 VAR_7->port.ops = &VAR_4;

 FUNC_9(VAR_7->type, sizeof(VAR_7->type), "PL011 rev%u", FUNC_2(VAR_5));

 VAR_10 = FUNC_8(&VAR_5->dev, VAR_7, &VAR_5->res, VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_3(VAR_5, VAR_7);

 return FUNC_7(VAR_7);
}
