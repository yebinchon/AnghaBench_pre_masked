
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int membase; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_2(FUNC_0(VAR_5->membase));
 VAR_6 &= ~(VAR_3 | VAR_1);
 FUNC_3(VAR_6, FUNC_0(VAR_5->membase));

 FUNC_3((VAR_0 | VAR_4 |
  VAR_2), FUNC_1(VAR_5->membase));
}
