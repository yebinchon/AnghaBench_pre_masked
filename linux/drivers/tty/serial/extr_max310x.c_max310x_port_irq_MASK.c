
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct max310x_port {TYPE_1__* p; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct uart_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct uart_port*,unsigned int) ;
 unsigned int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct max310x_port *VAR_8, int VAR_9)
{
 struct uart_port *VAR_10 = &VAR_8->p[VAR_9].port;
 irqreturn_t VAR_11 = VAR_1;

 do {
  unsigned int VAR_12, VAR_13, VAR_14;


  VAR_12 = FUNC_1(VAR_10, VAR_2);
  VAR_14 = FUNC_1(VAR_10, VAR_7);
  if (!VAR_12 && !VAR_14)
   break;

  VAR_11 = VAR_0;

  if (VAR_12 & VAR_3) {
   VAR_13 = FUNC_1(VAR_10, VAR_6);
   FUNC_3(VAR_10,
            !!(VAR_13 & VAR_5));
  }
  if (VAR_14)
   FUNC_0(VAR_10, VAR_14);
  if (VAR_12 & VAR_4)
   FUNC_2(VAR_10);
 } while (1);
 return VAR_11;
}
