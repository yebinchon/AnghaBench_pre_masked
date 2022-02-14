
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_4,
       unsigned int VAR_5)
{
 u32 VAR_6 = 0;

 if (FUNC_0(VAR_4))
  return;

 if (!(VAR_5 & VAR_1))
  VAR_6 = VAR_2 | VAR_3;
 FUNC_1(VAR_6, VAR_4->membase + VAR_0);
}
