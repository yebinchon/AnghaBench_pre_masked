
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; int iotype; unsigned int (* serial_in ) (struct uart_port*,int) ;int iobase; int membase; } ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct uart_port*,int) ;

__attribute__((used)) static unsigned int FUNC_6(struct uart_port *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1;
 VAR_1 <<= VAR_0->regshift;

 switch (VAR_0->iotype) {
 case 132:
  return FUNC_2(VAR_0->membase + VAR_1);
 case 131:
  return FUNC_4(VAR_0->membase + VAR_1);
 case 130:
  return FUNC_3(VAR_0->membase + VAR_1);
 case 129:
  return FUNC_1(VAR_0->membase + VAR_1);
 case 128:
  return FUNC_0(VAR_0->iobase + VAR_1);
 case 133:
  return VAR_0->serial_in(VAR_0, VAR_2);
 default:
  return 0;
 }
}
