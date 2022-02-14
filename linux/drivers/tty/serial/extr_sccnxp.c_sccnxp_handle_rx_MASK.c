
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct uart_port {int read_status_mask; int ignore_status_mask; TYPE_2__* state; TYPE_1__ icount; } ;
struct TYPE_4__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 void* FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 scalar_t__ FUNC_4 (struct uart_port*,unsigned int) ;
 int FUNC_5 (struct uart_port*,int,int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_15)
{
 u8 VAR_16;
 unsigned int VAR_17, VAR_18;

 for (;;) {
  VAR_16 = FUNC_0(VAR_15, VAR_4);
  if (!(VAR_16 & VAR_9))
   break;
  VAR_16 &= VAR_8 | VAR_6 | VAR_7 | VAR_5;

  VAR_17 = FUNC_0(VAR_15, VAR_3);

  VAR_15->icount.rx++;
  VAR_18 = VAR_12;

  if (FUNC_6(VAR_16)) {
   if (VAR_16 & VAR_5) {
    VAR_15->icount.brk++;
    FUNC_1(VAR_15, VAR_2,
        VAR_0);
    if (FUNC_3(VAR_15))
     continue;
   } else if (VAR_16 & VAR_8)
    VAR_15->icount.parity++;
   else if (VAR_16 & VAR_6)
    VAR_15->icount.frame++;
   else if (VAR_16 & VAR_7) {
    VAR_15->icount.overrun++;
    FUNC_1(VAR_15, VAR_2,
        VAR_1);
   }

   VAR_16 &= VAR_15->read_status_mask;
   if (VAR_16 & VAR_5)
    VAR_18 = VAR_10;
   else if (VAR_16 & VAR_8)
    VAR_18 = VAR_14;
   else if (VAR_16 & VAR_6)
    VAR_18 = VAR_11;
   else if (VAR_16 & VAR_7)
    VAR_18 = VAR_13;
  }

  if (FUNC_4(VAR_15, VAR_17))
   continue;

  if (VAR_16 & VAR_15->ignore_status_mask)
   continue;

  FUNC_5(VAR_15, VAR_16, VAR_7, VAR_17, VAR_18);
 }

 FUNC_2(&VAR_15->state->port);
}
