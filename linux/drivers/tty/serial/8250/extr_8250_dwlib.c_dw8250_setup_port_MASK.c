
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int fifosize; int flags; int type; int set_divisor; int get_divisor; struct dw8250_port_data* private_data; int dev; } ;
struct uart_8250_port {int capabilities; } ;
struct dw8250_port_data {int dlf_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int VAR_11 ;
 int FUNC_2 (struct uart_port*,int ) ;
 int VAR_12 ;
 int FUNC_3 (struct uart_port*,int ,unsigned int) ;
 int FUNC_4 (int) ;
 struct uart_8250_port* FUNC_5 (struct uart_port*) ;

void FUNC_6(struct uart_port *VAR_13)
{
 struct uart_8250_port *VAR_14 = FUNC_5(VAR_13);
 u32 VAR_15;





 VAR_15 = FUNC_2(VAR_13, VAR_5);
 if (!VAR_15)
  return;

 FUNC_1(VAR_13->dev, "Designware UART version %c.%c%c\n",
  (VAR_15 >> 24) & 0xff, (VAR_15 >> 16) & 0xff, (VAR_15 >> 8) & 0xff);

 FUNC_3(VAR_13, VAR_4, ~0U);
 VAR_15 = FUNC_2(VAR_13, VAR_4);
 FUNC_3(VAR_13, VAR_4, 0);

 if (VAR_15) {
  struct dw8250_port_data *VAR_16 = VAR_13->private_data;

  VAR_16->dlf_size = FUNC_4(VAR_15);
  VAR_13->get_divisor = VAR_11;
  VAR_13->set_divisor = VAR_12;
 }

 VAR_15 = FUNC_2(VAR_13, VAR_0);
 if (!VAR_15)
  return;


 if (VAR_15 & VAR_2) {
  VAR_13->type = VAR_6;
  VAR_13->flags |= VAR_10;
  VAR_13->fifosize = FUNC_0(VAR_15);
  VAR_14->capabilities = VAR_8;
 }

 if (VAR_15 & VAR_1)
  VAR_14->capabilities |= VAR_7;

 if (VAR_15 & VAR_3)
  VAR_14->capabilities |= VAR_9;
}
