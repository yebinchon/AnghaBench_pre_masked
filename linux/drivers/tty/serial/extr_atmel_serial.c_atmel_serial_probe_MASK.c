
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_17__ {struct device_node* of_node; TYPE_1__* parent; } ;
struct platform_device {TYPE_6__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_16__ {int line; TYPE_2__ rs485; } ;
struct TYPE_15__ {int * buf; } ;
struct atmel_uart_port {TYPE_4__ uart; int * clk; TYPE_3__ rx_ring; int gpios; int lock_suspended; int tasklet_shutdown; scalar_t__ backup_imr; } ;
struct atmel_uart_char {int dummy; } ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct TYPE_12__ {int flags; } ;


 TYPE_11__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct atmel_uart_port*,struct platform_device*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 struct atmel_uart_port* VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct atmel_uart_port*,struct platform_device*) ;
 int VAR_15 ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_6__*,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int *) ;
 void* FUNC_17 (int,int,int ) ;
 int FUNC_18 (TYPE_4__*,int ) ;
 int FUNC_19 (struct device_node*,char*) ;
 int FUNC_20 (struct platform_device*,struct atmel_uart_port*) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int,int ) ;
 int FUNC_23 (int *,TYPE_4__*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_16)
{
 struct atmel_uart_port *VAR_17;
 struct device_node *VAR_18 = VAR_16->dev.parent->of_node;
 void *VAR_19;
 int VAR_20;
 bool VAR_21;

 FUNC_0(VAR_2 & (VAR_2 - 1));
 VAR_16->dev.of_node = VAR_18;

 VAR_20 = FUNC_19(VAR_18, "serial");
 if (VAR_20 < 0)


  VAR_20 = FUNC_15(VAR_14, VAR_1);

 if (VAR_20 >= VAR_1) {
  VAR_20 = -VAR_9;
  goto err;
 }

 if (FUNC_22(VAR_20, VAR_14)) {

  VAR_20 = -VAR_8;
  goto err;
 }

 VAR_17 = &VAR_13[VAR_20];
 VAR_17->backup_imr = 0;
 VAR_17->uart.line = VAR_20;
 FUNC_6(VAR_17, VAR_16);

 FUNC_9(&VAR_17->tasklet_shutdown, 0);
 FUNC_21(&VAR_17->lock_suspended);

 VAR_20 = FUNC_4(VAR_17, VAR_16);
 if (VAR_20)
  goto err_clear_bit;

 VAR_17->gpios = FUNC_18(&VAR_17->uart, 0);
 if (FUNC_1(VAR_17->gpios)) {
  VAR_20 = FUNC_2(VAR_17->gpios);
  goto err_clear_bit;
 }

 if (!FUNC_8(&VAR_17->uart)) {
  VAR_20 = -VAR_10;
  VAR_19 = FUNC_17(VAR_2,
         sizeof(struct atmel_uart_char),
         VAR_11);
  if (!VAR_19)
   goto err_alloc_ring;
  VAR_17->rx_ring.buf = VAR_19;
 }

 VAR_21 = VAR_17->uart.rs485.flags & VAR_12;

 VAR_20 = FUNC_23(&VAR_15, &VAR_17->uart);
 if (VAR_20)
  goto err_add_port;
 FUNC_14(&VAR_16->dev, 1);
 FUNC_20(VAR_16, VAR_17);





 FUNC_12(VAR_17->clk);

 if (VAR_21) {
  FUNC_7(&VAR_17->uart, VAR_4,
      VAR_6);
  FUNC_7(&VAR_17->uart, VAR_3,
      VAR_5);
 }




 FUNC_3(&VAR_17->uart);





 FUNC_11(VAR_17->clk);

 return 0;

err_add_port:
 FUNC_16(VAR_17->rx_ring.buf);
 VAR_17->rx_ring.buf = ((void*)0);
err_alloc_ring:
 if (!FUNC_5(&VAR_17->uart)) {
  FUNC_13(VAR_17->clk);
  VAR_17->clk = ((void*)0);
 }
err_clear_bit:
 FUNC_10(VAR_17->uart.line, VAR_14);
err:
 return VAR_20;
}
