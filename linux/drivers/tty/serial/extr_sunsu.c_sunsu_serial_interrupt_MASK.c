
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; TYPE_1__* state; } ;
struct uart_sunsu_port {TYPE_2__ port; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (struct uart_sunsu_port*) ;
 int FUNC_1 (struct uart_sunsu_port*,unsigned char*) ;
 int FUNC_2 (struct uart_sunsu_port*,int ) ;
 unsigned char FUNC_3 (struct uart_sunsu_port*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct uart_sunsu_port*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct uart_sunsu_port *VAR_8 = VAR_7;
 unsigned long VAR_9;
 unsigned char VAR_10;

 FUNC_4(&VAR_8->port.lock, VAR_9);

 do {
  VAR_10 = FUNC_3(VAR_8, VAR_3);
  if (VAR_10 & VAR_4)
   FUNC_1(VAR_8, &VAR_10);
  FUNC_0(VAR_8);
  if (VAR_10 & VAR_5)
   FUNC_6(VAR_8);

  FUNC_5(&VAR_8->port.lock, VAR_9);

  FUNC_7(&VAR_8->port.state->port);

  FUNC_4(&VAR_8->port.lock, VAR_9);

 } while (!(FUNC_2(VAR_8, VAR_1) & VAR_2));

 FUNC_5(&VAR_8->port.lock, VAR_9);

 return VAR_0;
}
