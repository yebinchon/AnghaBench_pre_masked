
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ delay_rts_after_send; } ;
struct uart_port {TYPE_1__ rs485; } ;
struct TYPE_4__ {int read_status_mask; } ;
struct uart_omap_port {int scr; int ier; int fcr; int dev; TYPE_2__ port; int rts_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct uart_omap_port*,int ,int) ;
 struct uart_omap_port* FUNC_7 (struct uart_port*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_12)
{
 struct uart_omap_port *VAR_13 = FUNC_7(VAR_12);
 int VAR_14;

 FUNC_3(VAR_13->dev);


 if (VAR_12->rs485.flags & VAR_1) {
  if (VAR_13->scr & VAR_0) {







   VAR_13->scr &= ~VAR_0;
   FUNC_6(VAR_13, VAR_11, VAR_13->scr);
   VAR_14 = (VAR_12->rs485.flags & VAR_2) ?
    1 : 0;
   if (FUNC_0(VAR_13->rts_gpio) != VAR_14) {
    if (VAR_12->rs485.delay_rts_after_send > 0)
     FUNC_2(
     VAR_12->rs485.delay_rts_after_send);
    FUNC_1(VAR_13->rts_gpio, VAR_14);
   }
  } else {
   VAR_13->scr |= VAR_0;
   FUNC_6(VAR_13, VAR_11, VAR_13->scr);
   return;
  }
 }

 if (VAR_13->ier & VAR_9) {
  VAR_13->ier &= ~VAR_9;
  FUNC_6(VAR_13, VAR_6, VAR_13->ier);
 }

 if ((VAR_12->rs485.flags & VAR_1) &&
     !(VAR_12->rs485.flags & VAR_3)) {




  FUNC_6(VAR_13, VAR_4, VAR_13->fcr | VAR_5);

  VAR_13->ier |= VAR_8 | VAR_7;
  VAR_13->port.read_status_mask |= VAR_10;
  FUNC_6(VAR_13, VAR_6, VAR_13->ier);
 }

 FUNC_4(VAR_13->dev);
 FUNC_5(VAR_13->dev);
}
