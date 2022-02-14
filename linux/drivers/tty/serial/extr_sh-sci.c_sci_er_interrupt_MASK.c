
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; } ;
struct sci_port {scalar_t__* irqs; int chan_tx; int chan_rx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 unsigned short FUNC_0 (struct uart_port*) ;
 unsigned short FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (int,void*) ;
 int FUNC_5 (struct uart_port*,int ) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*) ;
 int FUNC_9 (int,void*) ;
 unsigned short FUNC_10 (struct uart_port*,int ) ;
 struct sci_port* FUNC_11 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_5, void *VAR_6)
{
 struct uart_port *VAR_7 = VAR_6;
 struct sci_port *VAR_8 = FUNC_11(VAR_7);

 if (VAR_8->irqs[VAR_3] == VAR_8->irqs[VAR_2]) {

  unsigned short VAR_9 = FUNC_10(VAR_7, VAR_4);


  if (VAR_9 & FUNC_0(VAR_7))
   FUNC_4(VAR_5, VAR_6);


  if (!(VAR_9 & FUNC_1(VAR_7)))
   return VAR_0;
 }


 if (VAR_7->type == VAR_1) {
  if (FUNC_6(VAR_7)) {

   FUNC_10(VAR_7, VAR_4);
   FUNC_5(VAR_7, FUNC_3(VAR_7));
  }
 } else {
  FUNC_7(VAR_7);
  if (!VAR_8->chan_rx)
   FUNC_8(VAR_7);
 }

 FUNC_5(VAR_7, FUNC_2(VAR_7));


 if (!VAR_8->chan_tx)
  FUNC_9(VAR_5, VAR_6);

 return VAR_0;
}
