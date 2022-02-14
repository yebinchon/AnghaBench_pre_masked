
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_icount {scalar_t__ rng; scalar_t__ dsr; scalar_t__ dcd; } ;
struct hso_tiocmget {int waitq; int icount; } ;
struct hso_serial {int serial_lock; struct hso_tiocmget* tiocmget; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_7 ;
 int FUNC_3 (struct uart_icount*,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_10(struct hso_serial *VAR_9, unsigned long VAR_10)
{
 FUNC_0(VAR_8, VAR_7);
 struct uart_icount VAR_11, VAR_12;
 struct hso_tiocmget *VAR_13;
 int VAR_14;

 VAR_13 = VAR_9->tiocmget;
 if (!VAR_13)
  return -VAR_0;



 FUNC_8(&VAR_9->serial_lock);
 FUNC_3(&VAR_11, &VAR_13->icount, sizeof(struct uart_icount));
 FUNC_9(&VAR_9->serial_lock);
 FUNC_2(&VAR_13->waitq, &VAR_8);
 for (;;) {
  FUNC_8(&VAR_9->serial_lock);
  FUNC_3(&VAR_12, &VAR_13->icount, sizeof(struct uart_icount));
  FUNC_9(&VAR_9->serial_lock);
  FUNC_6(VAR_2);
  if (((VAR_10 & VAR_6) && (VAR_12.rng != VAR_11.rng)) ||
      ((VAR_10 & VAR_5) && (VAR_12.dsr != VAR_11.dsr)) ||
      ((VAR_10 & VAR_4) && (VAR_12.dcd != VAR_11.dcd))) {
   VAR_14 = 0;
   break;
  }
  FUNC_5();

  if (FUNC_7(VAR_7)) {
   VAR_14 = -VAR_1;
   break;
  }
  VAR_11 = VAR_12;
 }
 FUNC_1(VAR_3);
 FUNC_4(&VAR_13->waitq, &VAR_8);

 return VAR_14;
}
