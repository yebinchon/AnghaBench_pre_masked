
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_8__ {unsigned int ignore_status_mask; unsigned int read_status_mask; int lock; TYPE_2__* state; TYPE_1__ icount; } ;
struct uart_txx9_port {TYPE_3__ port; } ;
struct TYPE_7__ {int port; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (struct uart_txx9_port*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,unsigned char) ;
 int FUNC_6 (TYPE_3__*,unsigned int,unsigned int,unsigned char,char) ;
 scalar_t__ FUNC_7 (unsigned int) ;

__attribute__((used)) static inline void
FUNC_8(struct uart_txx9_port *VAR_12, unsigned int *VAR_13)
{
 unsigned char VAR_14;
 unsigned int VAR_15 = *VAR_13;
 int VAR_16 = 256;
 char VAR_17;
 unsigned int VAR_18;

 do {
  VAR_14 = FUNC_0(VAR_12, VAR_11);
  VAR_17 = VAR_2;
  VAR_12->port.icount.rx++;


  VAR_18 =
   VAR_12->port.ignore_status_mask & ~VAR_5;
  if (FUNC_7(VAR_15 & (VAR_6 | VAR_9 |
         VAR_7 | VAR_8))) {



   if (VAR_15 & VAR_6) {
    VAR_15 &= ~(VAR_7 | VAR_9);
    VAR_12->port.icount.brk++;






    if (FUNC_4(&VAR_12->port))
     goto ignore_char;
   } else if (VAR_15 & VAR_9)
    VAR_12->port.icount.parity++;
   else if (VAR_15 & VAR_7)
    VAR_12->port.icount.frame++;
   if (VAR_15 & VAR_8) {
    VAR_12->port.icount.overrun++;






    VAR_18 |=
     VAR_5;
   }




   VAR_15 &= VAR_12->port.read_status_mask;

   if (VAR_15 & VAR_6) {
    VAR_17 = VAR_0;
   } else if (VAR_15 & VAR_9)
    VAR_17 = VAR_3;
   else if (VAR_15 & VAR_7)
    VAR_17 = VAR_1;
  }
  if (FUNC_5(&VAR_12->port, VAR_14))
   goto ignore_char;

  FUNC_6(&VAR_12->port, VAR_15, VAR_8, VAR_14, VAR_17);

 ignore_char:
  VAR_12->port.ignore_status_mask = VAR_18;
  VAR_15 = FUNC_0(VAR_12, VAR_4);
 } while (!(VAR_15 & VAR_10) && (VAR_16-- > 0));
 FUNC_2(&VAR_12->port.lock);
 FUNC_3(&VAR_12->port.state->port);
 FUNC_1(&VAR_12->port.lock);
 *VAR_13 = VAR_15;
}
