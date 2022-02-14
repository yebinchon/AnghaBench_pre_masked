
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct sci_port {TYPE_1__* params; scalar_t__ chan_rx; int chan_tx; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {scalar_t__ size; } ;
struct TYPE_3__ {scalar_t__ overrun_reg; unsigned short overrun_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned short FUNC_0 (struct uart_port*) ;
 unsigned short FUNC_1 (struct uart_port*) ;
 unsigned short FUNC_2 (struct uart_port*) ;
 unsigned short FUNC_3 (struct uart_port*) ;
 unsigned short FUNC_4 (struct uart_port*) ;
 int FUNC_5 (int,void*) ;
 int FUNC_6 (int,void*) ;
 TYPE_2__* FUNC_7 (struct uart_port*,scalar_t__) ;
 int FUNC_8 (struct uart_port*) ;
 int FUNC_9 (int,void*) ;
 int FUNC_10 (int,void*) ;
 unsigned short FUNC_11 (struct uart_port*,scalar_t__) ;
 struct sci_port* FUNC_12 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_6, void *VAR_7)
{
 unsigned short VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 struct uart_port *VAR_12 = VAR_7;
 struct sci_port *VAR_13 = FUNC_12(VAR_12);
 irqreturn_t VAR_14 = VAR_1;

 VAR_8 = FUNC_11(VAR_12, VAR_5);
 VAR_9 = FUNC_11(VAR_12, VAR_2);
 if (VAR_13->params->overrun_reg == VAR_5)
  VAR_11 = VAR_8;
 else if (FUNC_7(VAR_12, VAR_13->params->overrun_reg)->size)
  VAR_11 = FUNC_11(VAR_12, VAR_13->params->overrun_reg);

 VAR_10 = VAR_9 & FUNC_4(VAR_12);


 if ((VAR_8 & FUNC_3(VAR_12)) && (VAR_9 & VAR_4) &&
     !VAR_13->chan_tx)
  VAR_14 = FUNC_10(VAR_6, VAR_7);





 if (((VAR_8 & FUNC_2(VAR_12)) || VAR_13->chan_rx) &&
     (VAR_9 & VAR_3))
  VAR_14 = FUNC_9(VAR_6, VAR_7);


 if ((VAR_8 & FUNC_1(VAR_12)) && VAR_10)
  VAR_14 = FUNC_6(VAR_6, VAR_7);


 if ((VAR_8 & FUNC_0(VAR_12)) && VAR_10)
  VAR_14 = FUNC_5(VAR_6, VAR_7);


 if (VAR_11 & VAR_13->params->overrun_mask) {
  FUNC_8(VAR_12);
  VAR_14 = VAR_0;
 }

 return VAR_14;
}
