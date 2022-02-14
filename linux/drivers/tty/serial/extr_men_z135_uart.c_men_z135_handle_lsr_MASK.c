
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int brk; int frame; int parity; int overrun; } ;
struct uart_port {TYPE_1__ icount; } ;
struct men_z135_port {int stat_reg; struct uart_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_port*) ;

__attribute__((used)) static void FUNC_1(struct men_z135_port *VAR_4)
{
 struct uart_port *VAR_5 = &VAR_4->port;
 u8 VAR_6;

 VAR_6 = (VAR_4->stat_reg >> 16) & 0xff;

 if (VAR_6 & VAR_2)
  VAR_5->icount.overrun++;
 if (VAR_6 & VAR_3)
  VAR_5->icount.parity++;
 if (VAR_6 & VAR_1)
  VAR_5->icount.frame++;
 if (VAR_6 & VAR_0) {
  VAR_5->icount.brk++;
  FUNC_0(VAR_5);
 }
}
