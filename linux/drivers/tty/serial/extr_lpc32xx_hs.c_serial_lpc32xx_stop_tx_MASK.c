
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int membase; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(FUNC_0(VAR_1->membase));
 VAR_2 &= ~VAR_0;
 FUNC_2(VAR_2, FUNC_0(VAR_1->membase));
}
