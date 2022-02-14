
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_10__ {int read_status_mask; scalar_t__ line; TYPE_3__* state; TYPE_2__* cons; TYPE_1__ icount; } ;
struct uart_pxa_port {int lsr_break_flag; int ier; TYPE_4__ port; } ;
struct TYPE_9__ {int port; } ;
struct TYPE_8__ {scalar_t__ index; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (struct uart_pxa_port*,int ) ;
 int FUNC_1 (struct uart_pxa_port*,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,unsigned int) ;
 int FUNC_5 (TYPE_4__*,int,int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline void FUNC_7(struct uart_pxa_port *VAR_13, int *VAR_14)
{
 unsigned int VAR_15, VAR_16;
 int VAR_17 = 256;

 do {







  VAR_13->ier &= ~VAR_5;
  FUNC_1(VAR_13, VAR_4, VAR_13->ier);

  VAR_15 = FUNC_0(VAR_13, VAR_12);
  VAR_16 = VAR_2;
  VAR_13->port.icount.rx++;

  if (FUNC_6(*VAR_14 & (VAR_7 | VAR_11 |
           VAR_9 | VAR_10))) {



   if (*VAR_14 & VAR_7) {
    *VAR_14 &= ~(VAR_9 | VAR_11);
    VAR_13->port.icount.brk++;






    if (FUNC_3(&VAR_13->port))
     goto ignore_char;
   } else if (*VAR_14 & VAR_11)
    VAR_13->port.icount.parity++;
   else if (*VAR_14 & VAR_9)
    VAR_13->port.icount.frame++;
   if (*VAR_14 & VAR_10)
    VAR_13->port.icount.overrun++;




   *VAR_14 &= VAR_13->port.read_status_mask;
   if (*VAR_14 & VAR_7) {
    VAR_16 = VAR_0;
   } else if (*VAR_14 & VAR_11)
    VAR_16 = VAR_3;
   else if (*VAR_14 & VAR_9)
    VAR_16 = VAR_1;
  }

  if (FUNC_4(&VAR_13->port, VAR_15))
   goto ignore_char;

  FUNC_5(&VAR_13->port, *VAR_14, VAR_10, VAR_15, VAR_16);

 ignore_char:
  *VAR_14 = FUNC_0(VAR_13, VAR_6);
 } while ((*VAR_14 & VAR_8) && (VAR_17-- > 0));
 FUNC_2(&VAR_13->port.state->port);
 VAR_13->ier |= VAR_5;
 FUNC_1(VAR_13, VAR_4, VAR_13->ier);
}
