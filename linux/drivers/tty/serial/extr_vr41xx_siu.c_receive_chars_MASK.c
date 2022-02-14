
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int overrun; int parity; int frame; int brk; int rx; } ;
struct uart_port {size_t line; int read_status_mask; TYPE_2__* state; TYPE_1__ icount; } ;
struct TYPE_4__ {int port; } ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*,int) ;
 int FUNC_4 (struct uart_port*,int,int,int,char) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline void FUNC_6(struct uart_port *VAR_13, uint8_t *VAR_14)
{
 uint8_t VAR_15, VAR_16;
 char VAR_17;
 int VAR_18 = VAR_0;

 VAR_15 = *VAR_14;

 do {
  VAR_16 = FUNC_0(VAR_13, VAR_11);
  VAR_13->icount.rx++;
  VAR_17 = VAR_3;





  if (FUNC_5(VAR_15 & (VAR_6 | VAR_8 |
                      VAR_10 | VAR_9))) {
   if (VAR_15 & VAR_6) {
    VAR_15 &= ~(VAR_8 | VAR_10);
    VAR_13->icount.brk++;

    if (FUNC_2(VAR_13))
     goto ignore_char;
   }

   if (VAR_15 & VAR_8)
    VAR_13->icount.frame++;
   if (VAR_15 & VAR_10)
    VAR_13->icount.parity++;
   if (VAR_15 & VAR_9)
    VAR_13->icount.overrun++;

   VAR_15 &= VAR_13->read_status_mask;
   if (VAR_15 & VAR_6)
    VAR_17 = VAR_1;
   if (VAR_15 & VAR_8)
    VAR_17 = VAR_2;
   if (VAR_15 & VAR_10)
    VAR_17 = VAR_4;
  }

  if (FUNC_3(VAR_13, VAR_16))
   goto ignore_char;

  FUNC_4(VAR_13, VAR_15, VAR_9, VAR_16, VAR_17);

 ignore_char:
  VAR_15 = FUNC_0(VAR_13, VAR_5);
 } while ((VAR_15 & VAR_7) && (VAR_18-- > 0));

 FUNC_1(&VAR_13->state->port);

 *VAR_14 = VAR_15;
}
