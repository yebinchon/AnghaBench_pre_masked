
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uart_port {int membase; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1)
{
 u32 VAR_2;
 int VAR_3 = 0;

 while ((FUNC_2(FUNC_1(VAR_1->membase)) > 0) &&
        (VAR_3++ < VAR_0))
  VAR_2 = FUNC_2(FUNC_0(VAR_1->membase));
}
