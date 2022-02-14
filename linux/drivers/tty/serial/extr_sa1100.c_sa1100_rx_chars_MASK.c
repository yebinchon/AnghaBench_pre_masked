
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int overrun; int frame; int parity; int rx; } ;
struct TYPE_7__ {unsigned int read_status_mask; int lock; TYPE_2__* state; scalar_t__ sysrq; TYPE_1__ icount; } ;
struct sa1100_port {TYPE_3__ port; } ;
struct TYPE_6__ {int port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct sa1100_port*) ;
 int FUNC_1 (struct sa1100_port*) ;
 int FUNC_2 (struct sa1100_port*) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_3__*,unsigned int) ;
 int FUNC_9 (TYPE_3__*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_10(struct sa1100_port *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_4(FUNC_2(VAR_7)) |
   FUNC_3(FUNC_1(VAR_7));
 while (VAR_8 & FUNC_4(VAR_5)) {
  VAR_9 = FUNC_0(VAR_7);

  VAR_7->port.icount.rx++;

  VAR_10 = VAR_1;





  if (VAR_8 & FUNC_4(VAR_4 | VAR_3 | VAR_6)) {
   if (VAR_8 & FUNC_4(VAR_4))
    VAR_7->port.icount.parity++;
   else if (VAR_8 & FUNC_4(VAR_3))
    VAR_7->port.icount.frame++;
   if (VAR_8 & FUNC_4(VAR_6))
    VAR_7->port.icount.overrun++;

   VAR_8 &= VAR_7->port.read_status_mask;

   if (VAR_8 & FUNC_4(VAR_4))
    VAR_10 = VAR_2;
   else if (VAR_8 & FUNC_4(VAR_3))
    VAR_10 = VAR_0;




  }

  if (FUNC_8(&VAR_7->port, VAR_9))
   goto ignore_char;

  FUNC_9(&VAR_7->port, VAR_8, FUNC_4(VAR_6), VAR_9, VAR_10);

 ignore_char:
  VAR_8 = FUNC_4(FUNC_2(VAR_7)) |
    FUNC_3(FUNC_1(VAR_7));
 }

 FUNC_6(&VAR_7->port.lock);
 FUNC_7(&VAR_7->port.state->port);
 FUNC_5(&VAR_7->port.lock);
}
