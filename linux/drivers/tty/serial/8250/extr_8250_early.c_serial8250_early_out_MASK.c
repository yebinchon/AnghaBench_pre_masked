
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; int iotype; int (* serial_out ) (struct uart_port*,int,int) ;int iobase; int membase; } ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct uart_port*,int,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1;
 VAR_1 <<= VAR_0->regshift;

 switch (VAR_0->iotype) {
 case 132:
  FUNC_3(VAR_2, VAR_0->membase + VAR_1);
  break;
 case 131:
  FUNC_5(VAR_2, VAR_0->membase + VAR_1);
  break;
 case 130:
  FUNC_4(VAR_2, VAR_0->membase + VAR_1);
  break;
 case 129:
  FUNC_0(VAR_2, VAR_0->membase + VAR_1);
  break;
 case 128:
  FUNC_1(VAR_2, VAR_0->iobase + VAR_1);
  break;
 case 133:
  VAR_0->serial_out(VAR_0, VAR_3, VAR_2);
  break;
 }
}
