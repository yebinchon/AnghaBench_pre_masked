
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int line; int dev; } ;
struct sc16is7xx_port {TYPE_1__* p; } ;
struct TYPE_2__ {struct uart_port port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

 int VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,unsigned int) ;
 int FUNC_1 (struct uart_port*,unsigned int,unsigned int) ;
 int FUNC_2 (struct uart_port*) ;
 unsigned int FUNC_3 (struct uart_port*,int ) ;

__attribute__((used)) static bool FUNC_4(struct sc16is7xx_port *VAR_4, int VAR_5)
{
 struct uart_port *VAR_6 = &VAR_4->p[VAR_5].port;

 do {
  unsigned int VAR_7, VAR_8;

  VAR_7 = FUNC_3(VAR_6, VAR_2);
  if (VAR_7 & VAR_1)
   return 0;

  VAR_7 &= VAR_0;

  switch (VAR_7) {
  case 132:
  case 131:
  case 130:
  case 128:
   VAR_8 = FUNC_3(VAR_6, VAR_3);
   if (VAR_8)
    FUNC_1(VAR_6, VAR_8, VAR_7);
   break;
  case 129:
   FUNC_2(VAR_6);
   break;
  default:
   FUNC_0(VAR_6->dev,
         "ttySC%i: Unexpected interrupt: %x",
         VAR_6->line, VAR_7);
   break;
  }
 } while (0);
 return 1;
}
