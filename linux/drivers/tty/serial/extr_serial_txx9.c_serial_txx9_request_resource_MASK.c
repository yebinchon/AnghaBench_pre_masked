
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iotype; int flags; int iobase; int mapbase; int membase; } ;
struct uart_txx9_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int,char*) ;
 int FUNC_3 (int ,unsigned int,char*) ;

__attribute__((used)) static int FUNC_4(struct uart_txx9_port *VAR_4)
{
 unsigned int VAR_5 = VAR_2;
 int VAR_6 = 0;

 switch (VAR_4->port.iotype) {
 default:
  if (!VAR_4->port.mapbase)
   break;

  if (!FUNC_2(VAR_4->port.mapbase, VAR_5, "serial_txx9")) {
   VAR_6 = -VAR_0;
   break;
  }

  if (VAR_4->port.flags & VAR_3) {
   VAR_4->port.membase = FUNC_0(VAR_4->port.mapbase, VAR_5);
   if (!VAR_4->port.membase) {
    FUNC_1(VAR_4->port.mapbase, VAR_5);
    VAR_6 = -VAR_1;
   }
  }
  break;

 case 128:
  if (!FUNC_3(VAR_4->port.iobase, VAR_5, "serial_txx9"))
   VAR_6 = -VAR_0;
  break;
 }
 return VAR_6;
}
