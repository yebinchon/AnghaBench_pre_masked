
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; } ;
struct sci_port {unsigned int hscif_tot; int rx_trigger; int rx_fifo_timer; scalar_t__ rx_fifo_timeout; } ;
struct plat_sci_reg {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int VAR_9 ;
 int FUNC_3 (struct uart_port*,int) ;
 struct plat_sci_reg* FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct uart_port*,int) ;
 unsigned int FUNC_6 (struct uart_port*,int ) ;
 int FUNC_7 (struct uart_port*,int ,unsigned int) ;
 int FUNC_8 (int *,int ,int ) ;
 struct sci_port* FUNC_9 (struct uart_port*) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_10)
{
 const struct plat_sci_reg *VAR_11;
 unsigned int VAR_12;
 struct sci_port *VAR_13 = FUNC_9(VAR_10);

 FUNC_7(VAR_10, VAR_8, VAR_13->hscif_tot);

 VAR_11 = FUNC_4(VAR_10, VAR_2);
 if (VAR_11->size)
  FUNC_7(VAR_10, VAR_2, VAR_3 | VAR_4);

 FUNC_3(VAR_10,
   FUNC_2(VAR_10) & FUNC_1(VAR_10) &
   FUNC_0(VAR_10));
 if (FUNC_4(VAR_10, VAR_5)->size) {
  VAR_12 = FUNC_6(VAR_10, VAR_5);
  VAR_12 &= ~(VAR_7 | VAR_6);
  FUNC_7(VAR_10, VAR_5, VAR_12);
 }

 if (VAR_13->rx_trigger > 1) {
  if (VAR_13->rx_fifo_timeout) {
   FUNC_5(VAR_10, 1);
   FUNC_8(&VAR_13->rx_fifo_timer, VAR_9, 0);
  } else {
   if (VAR_10->type == VAR_0 ||
       VAR_10->type == VAR_1)
    FUNC_5(VAR_10, 1);
   else
    FUNC_5(VAR_10, VAR_13->rx_trigger);
  }
 }
}
