
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_7)
{
 u16 VAR_8 = FUNC_2(VAR_7->membase + VAR_2);

 FUNC_4(VAR_8 | VAR_1, VAR_7->membase + VAR_2);
 if (!(VAR_8 & VAR_0))
  return;

 FUNC_3(FUNC_1(VAR_7->membase + VAR_3) | VAR_5,
        VAR_7->membase + VAR_3);

 if (FUNC_1(VAR_7->membase + VAR_4) & VAR_6)
  FUNC_0(VAR_7);
}
