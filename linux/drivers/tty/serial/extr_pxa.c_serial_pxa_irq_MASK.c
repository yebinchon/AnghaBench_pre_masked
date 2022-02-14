
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct uart_pxa_port {TYPE_1__ port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct uart_pxa_port*) ;
 int FUNC_1 (struct uart_pxa_port*,unsigned int*) ;
 unsigned int FUNC_2 (struct uart_pxa_port*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct uart_pxa_port*) ;

__attribute__((used)) static inline irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct uart_pxa_port *VAR_9 = VAR_8;
 unsigned int VAR_10, VAR_11;

 VAR_10 = FUNC_2(VAR_9, VAR_2);
 if (VAR_10 & VAR_3)
  return VAR_1;
 FUNC_3(&VAR_9->port.lock);
 VAR_11 = FUNC_2(VAR_9, VAR_4);
 if (VAR_11 & VAR_5)
  FUNC_1(VAR_9, &VAR_11);
 FUNC_0(VAR_9);
 if (VAR_11 & VAR_6)
  FUNC_5(VAR_9);
 FUNC_4(&VAR_9->port.lock);
 return VAR_0;
}
