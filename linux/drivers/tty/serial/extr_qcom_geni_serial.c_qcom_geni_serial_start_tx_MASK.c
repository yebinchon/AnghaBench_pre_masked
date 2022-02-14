
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_7->membase + VAR_5);
 if (VAR_9 & VAR_2)
  return;

 if (!FUNC_0(VAR_7))
  return;

 VAR_8 = FUNC_1(VAR_7->membase + VAR_4);
 VAR_8 |= VAR_3 | VAR_1;

 FUNC_2(VAR_0, VAR_7->membase + VAR_6);
 FUNC_2(VAR_8, VAR_7->membase + VAR_4);
}
