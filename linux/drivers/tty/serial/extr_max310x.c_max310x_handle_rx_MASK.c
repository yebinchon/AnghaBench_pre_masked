
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int overrun; int frame; int parity; int brk; scalar_t__ rx; int buf_overrun; } ;
struct uart_port {unsigned int read_status_mask; unsigned int fifosize; unsigned int ignore_status_mask; TYPE_2__* state; TYPE_1__ icount; int dev; } ;
struct max310x_one {unsigned int* rx_buf; } ;
struct TYPE_4__ {int port; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct uart_port*,unsigned int*,unsigned int) ;
 unsigned int FUNC_2 (struct uart_port*,int ) ;
 struct max310x_one* FUNC_3 (struct uart_port*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (struct uart_port*,unsigned int) ;
 int FUNC_7 (struct uart_port*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_11, unsigned int VAR_12)
{
 struct max310x_one *VAR_13 = FUNC_3(VAR_11);
 unsigned int VAR_14, VAR_15, VAR_16, VAR_17;

 if (VAR_11->read_status_mask == VAR_3) {
  VAR_14 = FUNC_2(VAR_11, VAR_1);
  FUNC_1(VAR_11, VAR_13->rx_buf, VAR_12);

  VAR_11->icount.rx += VAR_12;
  VAR_16 = VAR_8;
  VAR_14 &= VAR_11->read_status_mask;

  if (VAR_14 & VAR_3) {
   FUNC_0(VAR_11->dev, "Hardware RX FIFO overrun\n");
   VAR_11->icount.overrun++;
  }

  for (VAR_17 = 0; VAR_17 < (VAR_12 - 1); ++VAR_17)
   FUNC_7(VAR_11, VAR_14, 0, VAR_13->rx_buf[VAR_17], VAR_16);






  FUNC_7(VAR_11, VAR_14, VAR_3,
     VAR_13->rx_buf[VAR_12-1], VAR_16);

 } else {
  if (FUNC_8(VAR_12 >= VAR_11->fifosize)) {
   FUNC_0(VAR_11->dev, "Possible RX FIFO overrun\n");
   VAR_11->icount.buf_overrun++;

   VAR_12 = VAR_11->fifosize;
  }

  while (VAR_12--) {
   VAR_15 = FUNC_2(VAR_11, VAR_5);
   VAR_14 = FUNC_2(VAR_11, VAR_1);

   VAR_14 &= VAR_4 | VAR_0 |
          VAR_3 | VAR_2;

   VAR_11->icount.rx++;
   VAR_16 = VAR_8;

   if (FUNC_8(VAR_14)) {
    if (VAR_14 & VAR_2) {
     VAR_11->icount.brk++;
     if (FUNC_5(VAR_11))
      continue;
    } else if (VAR_14 & VAR_4)
     VAR_11->icount.parity++;
    else if (VAR_14 & VAR_0)
     VAR_11->icount.frame++;
    else if (VAR_14 & VAR_3)
     VAR_11->icount.overrun++;

    VAR_14 &= VAR_11->read_status_mask;
    if (VAR_14 & VAR_2)
     VAR_16 = VAR_6;
    else if (VAR_14 & VAR_4)
     VAR_16 = VAR_10;
    else if (VAR_14 & VAR_0)
     VAR_16 = VAR_7;
    else if (VAR_14 & VAR_3)
     VAR_16 = VAR_9;
   }

   if (FUNC_6(VAR_11, VAR_15))
    continue;

   if (VAR_14 & VAR_11->ignore_status_mask)
    continue;

   FUNC_7(VAR_11, VAR_14, VAR_3, VAR_15, VAR_16);
  }
 }

 FUNC_4(&VAR_11->state->port);
}
