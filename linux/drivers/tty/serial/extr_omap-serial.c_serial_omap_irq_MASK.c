
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* state; int lock; } ;
struct uart_omap_port {int port_activity; int dev; TYPE_2__ port; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 unsigned int VAR_3 ;





 int VAR_4 ;
 int FUNC_0 (struct uart_omap_port*) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct uart_omap_port*,int ) ;
 int FUNC_5 (struct uart_omap_port*,unsigned int) ;
 int FUNC_6 (struct uart_omap_port*,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct uart_omap_port*,unsigned int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_6, void *VAR_7)
{
 struct uart_omap_port *VAR_8 = VAR_7;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11;
 irqreturn_t VAR_12 = VAR_1;
 int VAR_13 = 256;

 FUNC_7(&VAR_8->port.lock);
 FUNC_1(VAR_8->dev);

 do {
  VAR_9 = FUNC_4(VAR_8, VAR_2);
  if (VAR_9 & VAR_3)
   break;

  VAR_12 = VAR_0;
  VAR_10 = FUNC_4(VAR_8, VAR_4);


  VAR_11 = VAR_9 & 0x3e;

  switch (VAR_11) {
  case 133:
   FUNC_0(VAR_8);
   break;
  case 129:
   FUNC_9(VAR_8, VAR_10);
   break;
  case 130:

  case 132:
   FUNC_5(VAR_8, VAR_10);
   break;
  case 131:
   FUNC_6(VAR_8, VAR_10);
   break;
  case 134:

   break;
  case 128:

  default:
   break;
  }
 } while (VAR_13--);

 FUNC_8(&VAR_8->port.lock);

 FUNC_10(&VAR_8->port.state->port);

 FUNC_2(VAR_8->dev);
 FUNC_3(VAR_8->dev);
 VAR_8->port_activity = VAR_5;

 return VAR_12;
}
