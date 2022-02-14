
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uart_port {scalar_t__ type; int dev; } ;
struct sci_port {int rx_trigger; int rx_fifo_timeout; int rx_frame; int rx_fifo_timer; int rx_timeout; int rx_timer; scalar_t__ chan_rx; } ;
typedef int irqreturn_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int ,char*,scalar_t__,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sci_port*,int) ;
 int FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*,int) ;
 int FUNC_9 (struct uart_port*,int ) ;
 int FUNC_10 (struct uart_port*,int ,int) ;
 int FUNC_11 (int *,int ) ;
 struct sci_port* FUNC_12 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_10, void *VAR_11)
{
 struct uart_port *VAR_12 = VAR_11;
 struct sci_port *VAR_13 = FUNC_12(VAR_12);
 if (VAR_13->rx_trigger > 1 && VAR_13->rx_fifo_timeout > 0) {
  if (!FUNC_7(VAR_12))
   FUNC_8(VAR_12, VAR_13->rx_trigger);

  FUNC_4(&VAR_13->rx_fifo_timer, VAR_9 + FUNC_0(
     VAR_13->rx_frame * VAR_0 * VAR_13->rx_fifo_timeout, 1000000));
 }





 FUNC_6(VAR_12);

 return VAR_1;
}
