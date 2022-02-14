
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,unsigned int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,char*,struct uart_port*) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;


 VAR_6 = FUNC_2(VAR_5->irq, VAR_4, 0, "apbuart", VAR_5);
 if (VAR_6)
  return VAR_6;


 VAR_7 = FUNC_0(VAR_5);
 FUNC_1(VAR_5,
        VAR_7 | VAR_0 | VAR_2 |
        VAR_1 | VAR_3);

 return 0;
}
