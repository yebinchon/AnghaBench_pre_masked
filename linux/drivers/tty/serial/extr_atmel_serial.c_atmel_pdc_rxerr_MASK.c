
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int overrun; int frame; int parity; int brk; } ;
struct uart_port {TYPE_1__ icount; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct uart_port*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_6, unsigned int VAR_7)
{

 FUNC_0(VAR_6, VAR_0, VAR_4);

 if (VAR_7 & VAR_5) {

  VAR_7 &= ~(VAR_3 | VAR_1);
  VAR_6->icount.brk++;
 }
 if (VAR_7 & VAR_3)
  VAR_6->icount.parity++;
 if (VAR_7 & VAR_1)
  VAR_6->icount.frame++;
 if (VAR_7 & VAR_2)
  VAR_6->icount.overrun++;
}
