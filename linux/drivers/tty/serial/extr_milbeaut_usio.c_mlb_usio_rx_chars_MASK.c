
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int overrun; int parity; int rx; } ;
struct uart_port {int read_status_mask; scalar_t__ membase; TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct TYPE_3__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tty_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*,char) ;
 int FUNC_4 (struct uart_port*,int,int,char,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_16)
{
 struct tty_port *VAR_17 = &VAR_16->state->port;
 unsigned long VAR_18 = 0;
 char VAR_19 = 0;
 u8 VAR_20;
 int VAR_21 = 2;

 while (VAR_21--) {
  VAR_20 = FUNC_0(VAR_16->membase + VAR_5);

  if (!(VAR_20 & VAR_10))
   break;

  if (!(VAR_20 & (VAR_8 | VAR_7 |
    VAR_9))) {
   VAR_19 = FUNC_1(VAR_16->membase + VAR_2);
   VAR_18 = VAR_14;
   VAR_16->icount.rx++;
   if (FUNC_3(VAR_16, VAR_19))
    continue;
   FUNC_4(VAR_16, VAR_20, VAR_8,
      VAR_19, VAR_18);
   continue;
  }
  if (VAR_20 & VAR_9)
   VAR_16->icount.parity++;
  if (VAR_20 & VAR_8)
   VAR_16->icount.overrun++;
  VAR_20 &= VAR_16->read_status_mask;
  if (VAR_20 & VAR_6) {
   VAR_18 = VAR_12;
   VAR_19 = 0;
  } else
   if (VAR_20 & VAR_9) {
    VAR_18 = VAR_15;
    VAR_19 = 0;
   } else
    if (VAR_20 & VAR_7) {
     VAR_18 = VAR_13;
     VAR_19 = 0;
    }
  if (VAR_18)
   FUNC_4(VAR_16, VAR_20, VAR_8,
      VAR_19, VAR_18);

  FUNC_5(FUNC_0(VAR_16->membase + VAR_5) |
    VAR_11,
    VAR_16->membase + VAR_5);

  VAR_21 = FUNC_1(VAR_16->membase + VAR_3) >> 8;
  FUNC_6(FUNC_1(VAR_16->membase + VAR_4) |
         VAR_0 | VAR_1,
  VAR_16->membase + VAR_4);
 }

 FUNC_2(VAR_17);
}
