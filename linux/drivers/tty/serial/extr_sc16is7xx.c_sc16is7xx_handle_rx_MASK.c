
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int overrun; int frame; int parity; int brk; int rx; int buf_overrun; } ;
struct uart_port {unsigned int read_status_mask; unsigned int ignore_status_mask; TYPE_2__* state; TYPE_1__ icount; int line; int dev; } ;
struct sc16is7xx_port {unsigned int* buf; } ;
struct TYPE_4__ {int port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 struct sc16is7xx_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,unsigned int) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 void* FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (struct uart_port*,unsigned int) ;
 int FUNC_7 (struct uart_port*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_14, unsigned int VAR_15,
    unsigned int VAR_16)
{
 struct sc16is7xx_port *VAR_17 = FUNC_0(VAR_14->dev);
 unsigned int VAR_18 = 0, VAR_19, VAR_20, VAR_21, VAR_22;
 bool VAR_23 = (VAR_16 == VAR_0) ? 1 : 0;

 if (FUNC_8(VAR_15 >= sizeof(VAR_17->buf))) {
  FUNC_1(VAR_14->dev,
         "ttySC%i: Possible RX FIFO overrun: %d\n",
         VAR_14->line, VAR_15);
  VAR_14->icount.buf_overrun++;

  VAR_15 = sizeof(VAR_17->buf);
 }

 while (VAR_15) {

  if (VAR_23) {
   VAR_18 = FUNC_3(VAR_14, VAR_7);
   if (!(VAR_18 & VAR_4))
    VAR_23 = 0;
  } else
   VAR_18 = 0;

  if (VAR_23) {
   VAR_17->buf[0] = FUNC_3(VAR_14, VAR_8);
   VAR_21 = 1;
  } else {
   FUNC_2(VAR_14, VAR_15);
   VAR_21 = VAR_15;
  }

  VAR_18 &= VAR_2;

  VAR_14->icount.rx++;
  VAR_20 = VAR_11;

  if (FUNC_8(VAR_18)) {
   if (VAR_18 & VAR_1) {
    VAR_14->icount.brk++;
    if (FUNC_5(VAR_14))
     continue;
   } else if (VAR_18 & VAR_6)
    VAR_14->icount.parity++;
   else if (VAR_18 & VAR_3)
    VAR_14->icount.frame++;
   else if (VAR_18 & VAR_5)
    VAR_14->icount.overrun++;

   VAR_18 &= VAR_14->read_status_mask;
   if (VAR_18 & VAR_1)
    VAR_20 = VAR_9;
   else if (VAR_18 & VAR_6)
    VAR_20 = VAR_13;
   else if (VAR_18 & VAR_3)
    VAR_20 = VAR_10;
   else if (VAR_18 & VAR_5)
    VAR_20 = VAR_12;
  }

  for (VAR_22 = 0; VAR_22 < VAR_21; ++VAR_22) {
   VAR_19 = VAR_17->buf[VAR_22];
   if (FUNC_6(VAR_14, VAR_19))
    continue;

   if (VAR_18 & VAR_14->ignore_status_mask)
    continue;

   FUNC_7(VAR_14, VAR_18, VAR_5, VAR_19,
      VAR_20);
  }
  VAR_15 -= VAR_21;
 }

 FUNC_4(&VAR_14->state->port);
}
