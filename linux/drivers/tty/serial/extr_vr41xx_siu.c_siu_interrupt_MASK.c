
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_port {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,int*) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct uart_port *VAR_9;
 uint8_t VAR_10, VAR_11;

 VAR_9 = (struct uart_port *)VAR_8;

 VAR_10 = FUNC_2(VAR_9, VAR_2);
 if (VAR_10 & VAR_3)
  return VAR_1;

 VAR_11 = FUNC_2(VAR_9, VAR_4);
 if (VAR_11 & VAR_5)
  FUNC_1(VAR_9, &VAR_11);

 FUNC_0(VAR_9);

 if (VAR_11 & VAR_6)
  FUNC_3(VAR_9);

 return VAR_0;
}
