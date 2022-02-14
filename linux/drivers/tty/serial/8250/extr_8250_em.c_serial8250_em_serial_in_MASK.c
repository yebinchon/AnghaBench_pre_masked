
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int membase; } ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 129:
  return FUNC_0(VAR_0->membase);
 case 131:
 case 132:
 case 130:
 case 128:
  return FUNC_1(VAR_0->membase + ((VAR_1 + 1) << 2));
 case 134:
 case 133:
 case 136:
 case 135:
  return FUNC_1(VAR_0->membase + (VAR_1 << 2));
 }
 return 0;
}
