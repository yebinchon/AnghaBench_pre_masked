
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_port {scalar_t__ membase; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0, unsigned int VAR_1,
    u8 VAR_2)
{
 while (!(FUNC_1(VAR_0->membase + VAR_1) & VAR_2))
  FUNC_0();
}
