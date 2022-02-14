
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_8__ {unsigned int read_status_mask; int lock; TYPE_2__* state; scalar_t__ sysrq; TYPE_1__ icount; } ;
struct pnx8xxx_port {TYPE_3__ port; } ;
struct TYPE_7__ {int port; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_2 (struct pnx8xxx_port*,int ) ;
 int FUNC_3 (struct pnx8xxx_port*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,unsigned int) ;
 int FUNC_9 (TYPE_3__*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_10(struct pnx8xxx_port *VAR_12)
{
 unsigned int VAR_13, VAR_14, VAR_15;

 VAR_13 = FUNC_0(FUNC_2(VAR_12, VAR_0)) |
   FUNC_1(FUNC_2(VAR_12, VAR_1));
 while (VAR_13 & FUNC_0(VAR_5)) {
  VAR_14 = FUNC_2(VAR_12, VAR_0) & 0xff;

  VAR_12->port.icount.rx++;

  VAR_15 = VAR_10;





  if (VAR_13 & (FUNC_0(VAR_4 |
     VAR_6 |
     VAR_3) |
         FUNC_1(VAR_7))) {
   if (VAR_13 & FUNC_0(VAR_3)) {
    VAR_13 &= ~(FUNC_0(VAR_4) |
     FUNC_0(VAR_6));
    VAR_12->port.icount.brk++;
    if (FUNC_7(&VAR_12->port))
     goto ignore_char;
   } else if (VAR_13 & FUNC_0(VAR_6))
    VAR_12->port.icount.parity++;
   else if (VAR_13 & FUNC_0(VAR_4))
    VAR_12->port.icount.frame++;
   if (VAR_13 & FUNC_1(VAR_7))
    VAR_12->port.icount.overrun++;

   VAR_13 &= VAR_12->port.read_status_mask;

   if (VAR_13 & FUNC_0(VAR_6))
    VAR_15 = VAR_11;
   else if (VAR_13 & FUNC_0(VAR_4))
    VAR_15 = VAR_9;




  }

  if (FUNC_8(&VAR_12->port, VAR_14))
   goto ignore_char;

  FUNC_9(&VAR_12->port, VAR_13,
    FUNC_1(VAR_7), VAR_14, VAR_15);

 ignore_char:
  FUNC_3(VAR_12, VAR_2, FUNC_2(VAR_12, VAR_2) |
    VAR_8);
  VAR_13 = FUNC_0(FUNC_2(VAR_12, VAR_0)) |
    FUNC_1(FUNC_2(VAR_12, VAR_1));
 }

 FUNC_5(&VAR_12->port.lock);
 FUNC_6(&VAR_12->port.state->port);
 FUNC_4(&VAR_12->port.lock);
}
