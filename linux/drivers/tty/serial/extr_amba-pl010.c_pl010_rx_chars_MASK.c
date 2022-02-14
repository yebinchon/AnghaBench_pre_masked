
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_8__ {unsigned int read_status_mask; int lock; TYPE_2__* state; scalar_t__ membase; TYPE_1__ icount; } ;
struct uart_amba_port {TYPE_3__ port; } ;
struct TYPE_7__ {int port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,unsigned int) ;
 int FUNC_7 (TYPE_3__*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct uart_amba_port *VAR_14)
{
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = 256;

 VAR_15 = FUNC_1(VAR_14->port.membase + VAR_6);
 while (FUNC_0(VAR_15) && VAR_19--) {
  VAR_16 = FUNC_1(VAR_14->port.membase + VAR_4);
  VAR_17 = VAR_2;

  VAR_14->port.icount.rx++;





  VAR_18 = FUNC_1(VAR_14->port.membase + VAR_7) | VAR_13;
  if (FUNC_8(VAR_18 & VAR_8)) {
   FUNC_9(0, VAR_14->port.membase + VAR_5);

   if (VAR_18 & VAR_9) {
    VAR_18 &= ~(VAR_10 | VAR_12);
    VAR_14->port.icount.brk++;
    if (FUNC_5(&VAR_14->port))
     goto ignore_char;
   } else if (VAR_18 & VAR_12)
    VAR_14->port.icount.parity++;
   else if (VAR_18 & VAR_10)
    VAR_14->port.icount.frame++;
   if (VAR_18 & VAR_11)
    VAR_14->port.icount.overrun++;

   VAR_18 &= VAR_14->port.read_status_mask;

   if (VAR_18 & VAR_9)
    VAR_17 = VAR_0;
   else if (VAR_18 & VAR_12)
    VAR_17 = VAR_3;
   else if (VAR_18 & VAR_10)
    VAR_17 = VAR_1;
  }

  if (FUNC_6(&VAR_14->port, VAR_16))
   goto ignore_char;

  FUNC_7(&VAR_14->port, VAR_18, VAR_11, VAR_16, VAR_17);

 ignore_char:
  VAR_15 = FUNC_1(VAR_14->port.membase + VAR_6);
 }
 FUNC_3(&VAR_14->port.lock);
 FUNC_4(&VAR_14->port.state->port);
 FUNC_2(&VAR_14->port.lock);
}
