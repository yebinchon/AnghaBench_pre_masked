
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int membase; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_1)
{
 unsigned int VAR_2 = 0;

 if (FUNC_1(FUNC_2(FUNC_0(VAR_1->membase))) == 0)
  VAR_2 = VAR_0;

 return VAR_2;
}
