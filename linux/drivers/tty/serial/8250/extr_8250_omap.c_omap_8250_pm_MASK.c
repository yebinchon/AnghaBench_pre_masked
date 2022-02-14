
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_port {int dev; } ;
struct uart_8250_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_8250_port*,int ) ;
 int FUNC_4 (struct uart_8250_port*,int ,int) ;
 struct uart_8250_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_6, unsigned int VAR_7,
    unsigned int VAR_8)
{
 struct uart_8250_port *VAR_9 = FUNC_5(VAR_6);
 u8 VAR_10;

 FUNC_0(VAR_6->dev);
 FUNC_4(VAR_9, VAR_4, VAR_5);
 VAR_10 = FUNC_3(VAR_9, VAR_0);
 FUNC_4(VAR_9, VAR_0, VAR_10 | VAR_1);
 FUNC_4(VAR_9, VAR_4, 0);

 FUNC_4(VAR_9, VAR_2, (VAR_7 != 0) ? VAR_3 : 0);
 FUNC_4(VAR_9, VAR_4, VAR_5);
 FUNC_4(VAR_9, VAR_0, VAR_10);
 FUNC_4(VAR_9, VAR_4, 0);

 FUNC_1(VAR_6->dev);
 FUNC_2(VAR_6->dev);
}
