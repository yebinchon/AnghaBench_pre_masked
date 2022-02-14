
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct uart_port*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0, unsigned int VAR_1,
      u32 VAR_2)
{
 while (!(FUNC_1(VAR_0, VAR_1) & VAR_2))
  FUNC_0();
}
