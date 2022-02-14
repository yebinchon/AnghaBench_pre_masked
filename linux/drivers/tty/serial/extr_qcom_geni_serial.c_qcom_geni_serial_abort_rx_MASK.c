
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct uart_port*,scalar_t__,int,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_7)
{
 u32 VAR_8 = VAR_5 | VAR_4;

 FUNC_1(VAR_6, VAR_7->membase + VAR_2);
 FUNC_0(VAR_7, VAR_2,
     VAR_6, 0);
 FUNC_1(VAR_8, VAR_7->membase + VAR_3);
 FUNC_1(VAR_0, VAR_7->membase + VAR_1);
}
