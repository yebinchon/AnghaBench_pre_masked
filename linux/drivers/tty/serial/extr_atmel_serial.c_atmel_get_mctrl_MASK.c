
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uart_port {int dummy; } ;
struct atmel_uart_port {int gpios; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (int ,unsigned int*) ;
 struct atmel_uart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static u_int FUNC_3(struct uart_port *VAR_9)
{
 struct atmel_uart_port *VAR_10 = FUNC_2(VAR_9);
 unsigned int VAR_11 = 0, VAR_12;

 VAR_12 = FUNC_0(VAR_9, VAR_0);




 if (!(VAR_12 & VAR_2))
  VAR_11 |= VAR_5;
 if (!(VAR_12 & VAR_1))
  VAR_11 |= VAR_6;
 if (!(VAR_12 & VAR_3))
  VAR_11 |= VAR_7;
 if (!(VAR_12 & VAR_4))
  VAR_11 |= VAR_8;

 return FUNC_1(VAR_10->gpios, &VAR_11);
}
