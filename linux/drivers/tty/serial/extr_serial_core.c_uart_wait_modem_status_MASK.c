
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int delta_msr_wait; } ;
struct uart_state {struct tty_port port; } ;
struct uart_port {int lock; int icount; } ;
struct uart_icount {scalar_t__ rng; scalar_t__ dsr; scalar_t__ dcd; scalar_t__ cts; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_8 ;
 int FUNC_3 (struct uart_icount*,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct uart_port*) ;
 int FUNC_11 (struct uart_port*) ;
 struct uart_port* FUNC_12 (struct uart_state*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_13(struct uart_state *VAR_10, unsigned long VAR_11)
{
 struct uart_port *VAR_12;
 struct tty_port *VAR_13 = &VAR_10->port;
 FUNC_0(VAR_9, VAR_8);
 struct uart_icount VAR_14, VAR_15;
 int VAR_16;




 VAR_12 = FUNC_12(VAR_10);
 if (!VAR_12)
  return -VAR_0;
 FUNC_8(&VAR_12->lock);
 FUNC_3(&VAR_14, &VAR_12->icount, sizeof(struct uart_icount));
 FUNC_10(VAR_12);
 FUNC_9(&VAR_12->lock);

 FUNC_2(&VAR_13->delta_msr_wait, &VAR_9);
 for (;;) {
  FUNC_8(&VAR_12->lock);
  FUNC_3(&VAR_15, &VAR_12->icount, sizeof(struct uart_icount));
  FUNC_9(&VAR_12->lock);

  FUNC_6(VAR_2);

  if (((VAR_11 & VAR_7) && (VAR_15.rng != VAR_14.rng)) ||
      ((VAR_11 & VAR_6) && (VAR_15.dsr != VAR_14.dsr)) ||
      ((VAR_11 & VAR_4) && (VAR_15.dcd != VAR_14.dcd)) ||
      ((VAR_11 & VAR_5) && (VAR_15.cts != VAR_14.cts))) {
   VAR_16 = 0;
   break;
  }

  FUNC_5();


  if (FUNC_7(VAR_8)) {
   VAR_16 = -VAR_1;
   break;
  }

  VAR_14 = VAR_15;
 }
 FUNC_1(VAR_3);
 FUNC_4(&VAR_13->delta_msr_wait, &VAR_9);
 FUNC_11(VAR_12);

 return VAR_16;
}
