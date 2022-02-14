
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int overrun; int frame; int parity; int rx; } ;
struct uart_port {unsigned int read_status_mask; TYPE_2__* state; TYPE_1__ icount; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int port; } ;


 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct uart_port*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_12, void *VAR_13)
{
 struct uart_port *VAR_14 = VAR_13;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = 256;

 VAR_15 = *VAR_2;
 while (!(VAR_15 & 0x10) && VAR_19--) {
  VAR_16 = *VAR_1;
  VAR_17 = VAR_10;
  VAR_14->icount.rx++;

  VAR_18 = *VAR_0 | VAR_5;
  if (FUNC_2(VAR_18 & VAR_4)) {
   if (VAR_18 & VAR_8)
    VAR_14->icount.parity++;
   else if (VAR_18 & VAR_6)
    VAR_14->icount.frame++;
   if (VAR_18 & VAR_7)
    VAR_14->icount.overrun++;

   VAR_18 &= VAR_14->read_status_mask;

   if (VAR_18 & VAR_8)
    VAR_17 = VAR_11;
   else if (VAR_18 & VAR_6)
    VAR_17 = VAR_9;
  }

  FUNC_1(VAR_14, VAR_18, VAR_7, VAR_16, VAR_17);

  VAR_15 = *VAR_2;
 }
 FUNC_0(&VAR_14->state->port);

 return VAR_3;
}
