
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int frame; int parity; int brk; int rx; int overrun; } ;
struct uart_port {unsigned int read_status_mask; unsigned int ignore_status_mask; int lock; TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct TYPE_3__ {struct tty_port port; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,unsigned int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty_port*) ;
 int FUNC_6 (struct tty_port*,unsigned int,char) ;
 scalar_t__ FUNC_7 (struct uart_port*) ;
 scalar_t__ FUNC_8 (struct uart_port*,unsigned int) ;
 scalar_t__ FUNC_9 (unsigned int) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_15)
{
 struct tty_port *VAR_16 = &VAR_15->state->port;
 unsigned int VAR_17;




 VAR_17 = 32;
 do {
  unsigned int VAR_18, VAR_19, VAR_20;
  char VAR_21;



  VAR_18 = FUNC_1(VAR_15, VAR_12);

  if (FUNC_9(VAR_18 & FUNC_0(VAR_14))) {
   unsigned int VAR_22;



   VAR_22 = FUNC_1(VAR_15, VAR_5);
   VAR_22 |= VAR_6;
   FUNC_2(VAR_15, VAR_22, VAR_5);

   VAR_15->icount.overrun++;
   FUNC_6(VAR_16, 0, VAR_3);
  }

  if (!(VAR_18 & FUNC_0(VAR_13)))
   break;

  VAR_20 = VAR_19 = FUNC_1(VAR_15, VAR_11);
  VAR_15->icount.rx++;
  VAR_21 = VAR_2;
  VAR_19 &= 0xff;

  if (FUNC_9((VAR_20 & VAR_7))) {

   if (VAR_20 & VAR_8) {
    VAR_15->icount.brk++;
    if (FUNC_7(VAR_15))
     continue;
   }

   if (VAR_20 & VAR_10)
    VAR_15->icount.parity++;
   if (VAR_20 & VAR_9)
    VAR_15->icount.frame++;


   VAR_20 &= VAR_15->read_status_mask;
   if (VAR_20 & VAR_8)
    VAR_21 = VAR_0;
   if (VAR_20 & VAR_9)
    VAR_21 = VAR_1;
   if (VAR_20 & VAR_10)
    VAR_21 = VAR_4;
  }

  if (FUNC_8(VAR_15, VAR_19))
   continue;


  if ((VAR_20 & VAR_15->ignore_status_mask) == 0)
   FUNC_6(VAR_16, VAR_19, VAR_21);

 } while (--VAR_17);

 FUNC_4(&VAR_15->lock);
 FUNC_5(VAR_16);
 FUNC_3(&VAR_15->lock);
}
