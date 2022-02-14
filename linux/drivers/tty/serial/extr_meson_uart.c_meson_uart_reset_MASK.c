
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4->membase + VAR_1);
 VAR_5 |= (VAR_2 | VAR_3 | VAR_0);
 FUNC_1(VAR_5, VAR_4->membase + VAR_1);

 VAR_5 &= ~(VAR_2 | VAR_3 | VAR_0);
 FUNC_1(VAR_5, VAR_4->membase + VAR_1);
}
