
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_4, u32 VAR_5)
{
 u32 VAR_6;

 FUNC_0(VAR_5, VAR_4->membase + VAR_2);
 VAR_6 = VAR_3 << VAR_0;
 FUNC_0(VAR_6, VAR_4->membase + VAR_1);
}
