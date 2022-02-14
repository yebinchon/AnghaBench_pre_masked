
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_9__ {scalar_t__ line; unsigned char read_status_mask; unsigned char ignore_status_mask; TYPE_3__* cons; TYPE_2__ icount; TYPE_1__* state; } ;
struct uart_sunsu_port {unsigned char lsr_break_flag; TYPE_4__ port; } ;
struct tty_port {int dummy; } ;
struct TYPE_8__ {scalar_t__ index; } ;
struct TYPE_6__ {struct tty_port port; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 unsigned char FUNC_0 (struct uart_sunsu_port*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct tty_port*,unsigned char,unsigned char) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;

__attribute__((used)) static void
FUNC_6(struct uart_sunsu_port *VAR_12, unsigned char *VAR_13)
{
 struct tty_port *VAR_14 = &VAR_12->port.state->port;
 unsigned char VAR_15, VAR_16;
 int VAR_17 = 256;
 int VAR_18 = 0;

 do {
  VAR_15 = FUNC_0(VAR_12, VAR_11);
  VAR_16 = VAR_2;
  VAR_12->port.icount.rx++;

  if (FUNC_5(*VAR_13 & (VAR_6 | VAR_10 |
           VAR_8 | VAR_9))) {



   if (*VAR_13 & VAR_6) {
    *VAR_13 &= ~(VAR_8 | VAR_10);
    VAR_12->port.icount.brk++;
    if (VAR_12->port.cons != ((void*)0) &&
        VAR_12->port.line == VAR_12->port.cons->index)
     VAR_18 = 1;






    if (FUNC_3(&VAR_12->port))
     goto ignore_char;
   } else if (*VAR_13 & VAR_10)
    VAR_12->port.icount.parity++;
   else if (*VAR_13 & VAR_8)
    VAR_12->port.icount.frame++;
   if (*VAR_13 & VAR_9)
    VAR_12->port.icount.overrun++;




   *VAR_13 &= VAR_12->port.read_status_mask;

   if (VAR_12->port.cons != ((void*)0) &&
       VAR_12->port.line == VAR_12->port.cons->index) {

    *VAR_13 |= VAR_12->lsr_break_flag;
    VAR_12->lsr_break_flag = 0;
   }

   if (*VAR_13 & VAR_6) {
    VAR_16 = VAR_0;
   } else if (*VAR_13 & VAR_10)
    VAR_16 = VAR_4;
   else if (*VAR_13 & VAR_8)
    VAR_16 = VAR_1;
  }
  if (FUNC_4(&VAR_12->port, VAR_15))
   goto ignore_char;
  if ((*VAR_13 & VAR_12->port.ignore_status_mask) == 0)
   FUNC_2(VAR_14, VAR_15, VAR_16);
  if (*VAR_13 & VAR_9)





    FUNC_2(VAR_14, 0, VAR_3);
 ignore_char:
  *VAR_13 = FUNC_0(VAR_12, VAR_5);
 } while ((*VAR_13 & VAR_7) && (VAR_17-- > 0));

 if (VAR_18)
  FUNC_1();
}
