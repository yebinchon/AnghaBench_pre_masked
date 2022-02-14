
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ type; } ;
struct uart_8250_port {int bugs; unsigned char lsr_saved_flags; int acr; TYPE_1__* dma; } ;
struct TYPE_2__ {int (* tx_dma ) (struct uart_8250_port*) ;} ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*,int ,int) ;
 unsigned char FUNC_3 (struct uart_8250_port*,int ) ;
 int FUNC_4 (struct uart_8250_port*) ;
 struct uart_8250_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static inline void FUNC_6(struct uart_port *VAR_7)
{
 struct uart_8250_port *VAR_8 = FUNC_5(VAR_7);

 if (VAR_8->dma && !VAR_8->dma->tx_dma(VAR_8))
  return;

 if (FUNC_0(VAR_8)) {
  if (VAR_8->bugs & VAR_4) {
   unsigned char VAR_9;

   VAR_9 = FUNC_3(VAR_8, VAR_5);
   VAR_8->lsr_saved_flags |= VAR_9 & VAR_0;
   if (VAR_9 & VAR_6)
    FUNC_1(VAR_8);
  }
 }




 if (VAR_7->type == VAR_1 && VAR_8->acr & VAR_3) {
  VAR_8->acr &= ~VAR_3;
  FUNC_2(VAR_8, VAR_2, VAR_8->acr);
 }
}
