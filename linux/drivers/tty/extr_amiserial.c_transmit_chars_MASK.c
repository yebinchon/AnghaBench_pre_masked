
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int head; int tail; int* buf; } ;
struct TYPE_7__ {TYPE_4__* tty; } ;
struct TYPE_6__ {int tx; } ;
struct serial_state {int x_char; int IER; TYPE_3__ xmit; TYPE_2__ tport; TYPE_1__ icount; } ;
struct TYPE_10__ {int serdat; void* intena; void* intreq; } ;
struct TYPE_9__ {scalar_t__ hw_stopped; scalar_t__ stopped; } ;


 scalar_t__ FUNC_0 (int,int,int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(struct serial_state *VAR_5)
{
 VAR_4.intreq = VAR_0;
 FUNC_1();
 if (VAR_5->x_char) {
         VAR_4.serdat = VAR_5->x_char | 0x100;
  FUNC_1();
  VAR_5->icount.tx++;
  VAR_5->x_char = 0;
  return;
 }
 if (VAR_5->xmit.head == VAR_5->xmit.tail
     || VAR_5->tport.tty->stopped
     || VAR_5->tport.tty->hw_stopped) {
  VAR_5->IER &= ~VAR_2;
         VAR_4.intena = VAR_0;
  FUNC_1();
  return;
 }

 VAR_4.serdat = VAR_5->xmit.buf[VAR_5->xmit.tail++] | 0x100;
 FUNC_1();
 VAR_5->xmit.tail = VAR_5->xmit.tail & (VAR_1-1);
 VAR_5->icount.tx++;

 if (FUNC_0(VAR_5->xmit.head,
       VAR_5->xmit.tail,
       VAR_1) < VAR_3)
  FUNC_3(VAR_5->tport.tty);




 if (VAR_5->xmit.head == VAR_5->xmit.tail) {
         VAR_4.intena = VAR_0;
  FUNC_1();
  VAR_5->IER &= ~VAR_2;
 }
}
