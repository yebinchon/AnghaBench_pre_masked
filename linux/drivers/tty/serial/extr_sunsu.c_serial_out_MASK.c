
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regshift; int iotype; int iobase; int membase; int hub6; } ;
struct uart_sunsu_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_sunsu_port *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_3 == VAR_0)
  VAR_4 |= VAR_1;

 VAR_3 <<= VAR_2->port.regshift;

 switch (VAR_2->port.iotype) {
 case 129:
  FUNC_0(VAR_2->port.hub6 - 1 + VAR_3, VAR_2->port.iobase);
  FUNC_0(VAR_4, VAR_2->port.iobase + 1);
  break;

 case 128:
  FUNC_1(VAR_4, VAR_2->port.membase + VAR_3);
  break;

 default:
  FUNC_0(VAR_4, VAR_2->port.iobase + VAR_3);
 }
}
