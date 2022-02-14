
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int frame; int parity; int rx; int overrun; } ;
struct uart_port {int read_status_mask; int ignore_status_mask; int lock; TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct pic32_sport {int dummy; } ;
struct TYPE_3__ {struct tty_port port; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 int FUNC_1 (struct pic32_sport*,int ) ;
 int FUNC_2 (struct pic32_sport*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct pic32_sport* FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct tty_port*) ;
 int FUNC_7 (struct tty_port*,int,char) ;
 scalar_t__ FUNC_8 (struct uart_port*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_11)
{
 struct pic32_sport *VAR_12 = FUNC_5(VAR_11);
 struct tty_port *VAR_13;
 unsigned int VAR_14;





 VAR_14 = VAR_1;

 FUNC_3(&VAR_11->lock);

 VAR_13 = &VAR_11->state->port;

 do {
  u32 VAR_15, VAR_16;
  char VAR_17;


  VAR_15 = FUNC_1(VAR_12, VAR_2);
  if (FUNC_9(VAR_15 & VAR_4)) {


   FUNC_2(VAR_12, FUNC_0(VAR_2),
      VAR_4);

   VAR_11->icount.overrun++;
   FUNC_7(VAR_13, 0, VAR_9);
  }


  if (!(VAR_15 & VAR_6))
   break;


  VAR_16 = FUNC_1(VAR_12, VAR_0);

  VAR_11->icount.rx++;
  VAR_17 = VAR_8;
  VAR_16 &= 0xff;

  if (FUNC_9((VAR_15 & VAR_5) ||
        (VAR_15 & VAR_3))) {


   if (VAR_15 & VAR_5)
    VAR_11->icount.parity++;
   if (VAR_15 & VAR_3)
    VAR_11->icount.frame++;


   VAR_15 &= VAR_11->read_status_mask;

   if (VAR_15 & VAR_3)
    VAR_17 = VAR_7;
   if (VAR_15 & VAR_5)
    VAR_17 = VAR_10;
  }

  if (FUNC_8(VAR_11, VAR_16))
   continue;

  if ((VAR_15 & VAR_11->ignore_status_mask) == 0)
   FUNC_7(VAR_13, VAR_16, VAR_17);

 } while (--VAR_14);

 FUNC_4(&VAR_11->lock);

 FUNC_6(VAR_13);
}
