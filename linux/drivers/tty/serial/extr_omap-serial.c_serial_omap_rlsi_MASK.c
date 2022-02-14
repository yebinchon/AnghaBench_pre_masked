
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_7__ {scalar_t__ line; TYPE_2__* cons; TYPE_1__ icount; } ;
struct uart_omap_port {unsigned int lsr_break_flag; TYPE_3__ port; } ;
struct TYPE_6__ {scalar_t__ index; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned char FUNC_1 (struct uart_omap_port*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,unsigned int,unsigned int,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct uart_omap_port *VAR_10, unsigned int VAR_11)
{
 unsigned int VAR_12;
 unsigned char VAR_13 = 0;

 if (FUNC_0(VAR_11 & VAR_5))
  VAR_13 = FUNC_1(VAR_10, VAR_9);

 VAR_10->port.icount.rx++;
 VAR_12 = VAR_2;

 if (VAR_11 & VAR_4) {
  VAR_12 = VAR_0;
  VAR_11 &= ~(VAR_6 | VAR_8);
  VAR_10->port.icount.brk++;






  if (FUNC_2(&VAR_10->port))
   return;

 }

 if (VAR_11 & VAR_8) {
  VAR_12 = VAR_3;
  VAR_10->port.icount.parity++;
 }

 if (VAR_11 & VAR_6) {
  VAR_12 = VAR_1;
  VAR_10->port.icount.frame++;
 }

 if (VAR_11 & VAR_7)
  VAR_10->port.icount.overrun++;







 FUNC_3(&VAR_10->port, VAR_11, VAR_7, 0, VAR_12);
}
