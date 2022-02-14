
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int hw_stopped; } ;
struct TYPE_5__ {int open_wait; } ;
struct TYPE_4__ {int cts; int dcd; int dsr; int rng; } ;
struct sdio_uart_port {TYPE_2__ port; TYPE_1__ icount; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sdio_uart_port*,int ) ;
 int FUNC_2 (struct sdio_uart_port*) ;
 int FUNC_3 (struct sdio_uart_port*) ;
 int FUNC_4 (struct tty_struct*) ;
 struct tty_struct* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct sdio_uart_port *VAR_8)
{
 int VAR_9;
 struct tty_struct *VAR_10;

 VAR_9 = FUNC_1(VAR_8, VAR_0);

 if ((VAR_9 & VAR_1) == 0)
  return;

 if (VAR_9 & VAR_7)
  VAR_8->icount.rng++;
 if (VAR_9 & VAR_6)
  VAR_8->icount.dsr++;
 if (VAR_9 & VAR_5) {
  VAR_8->icount.dcd++;

  if (VAR_9 & VAR_3)
   FUNC_8(&VAR_8->port.open_wait);
  else {

   FUNC_6(&VAR_8->port, 0);
  }
 }
 if (VAR_9 & VAR_4) {
  VAR_8->icount.cts++;
  VAR_10 = FUNC_5(&VAR_8->port);
  if (VAR_10 && FUNC_0(VAR_10)) {
   int VAR_11 = (VAR_9 & VAR_2);
   if (VAR_10->hw_stopped) {
    if (VAR_11) {
     VAR_10->hw_stopped = 0;
     FUNC_2(VAR_8);
     FUNC_7(VAR_10);
    }
   } else {
    if (!VAR_11) {
     VAR_10->hw_stopped = 1;
     FUNC_3(VAR_8);
    }
   }
  }
  FUNC_4(VAR_10);
 }
}
