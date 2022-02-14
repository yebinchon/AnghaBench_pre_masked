
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {scalar_t__ gpios; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct uart_8250_port*,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct uart_8250_port *VAR_1, int VAR_2)
{
 FUNC_2(VAR_1, VAR_0, VAR_2);

 if (VAR_1->gpios)
  FUNC_0(VAR_1->gpios, FUNC_1(VAR_2));
}
