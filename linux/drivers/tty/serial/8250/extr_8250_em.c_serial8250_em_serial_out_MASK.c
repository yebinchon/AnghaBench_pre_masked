
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int membase; } ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0, int VAR_1, int VAR_2)
{
 switch (VAR_1) {
 case 128:
  FUNC_0(VAR_2, VAR_0->membase);
  break;
 case 133:
 case 131:
 case 130:
 case 129:
  FUNC_1(VAR_2, VAR_0->membase + ((VAR_1 + 1) << 2));
  break;
 case 132:
  VAR_2 &= 0x0f;

 case 135:
 case 134:
  FUNC_1(VAR_2, VAR_0->membase + (VAR_1 << 2));
 }
}
