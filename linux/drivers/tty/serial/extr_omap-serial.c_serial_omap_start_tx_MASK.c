
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ delay_rts_before_send; } ;
struct uart_port {TYPE_1__ rs485; } ;
struct uart_omap_port {int dev; int rts_gpio; int scr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct uart_omap_port*) ;
 int FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_omap_port*,int ,int ) ;
 struct uart_omap_port* FUNC_9 (struct uart_port*) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_5)
{
 struct uart_omap_port *VAR_6 = FUNC_9(VAR_5);
 int VAR_7;

 FUNC_3(VAR_6->dev);


 if (VAR_5->rs485.flags & VAR_1) {

  VAR_6->scr &= ~VAR_0;
  FUNC_8(VAR_6, VAR_4, VAR_6->scr);


  VAR_7 = (VAR_5->rs485.flags & VAR_2) ? 1 : 0;
  if (FUNC_0(VAR_6->rts_gpio) != VAR_7) {
   FUNC_1(VAR_6->rts_gpio, VAR_7);
   if (VAR_5->rs485.delay_rts_before_send > 0)
    FUNC_2(VAR_5->rs485.delay_rts_before_send);
  }
 }

 if ((VAR_5->rs485.flags & VAR_1) &&
     !(VAR_5->rs485.flags & VAR_3))
  FUNC_7(VAR_5);

 FUNC_6(VAR_6);
 FUNC_4(VAR_6->dev);
 FUNC_5(VAR_6->dev);
}
