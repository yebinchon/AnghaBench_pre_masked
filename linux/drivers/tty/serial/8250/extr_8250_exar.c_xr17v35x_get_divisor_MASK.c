
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_0, unsigned int VAR_1,
      unsigned int *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_0->uartclk, VAR_1);
 *VAR_2 = VAR_3 & 0x0f;

 return VAR_3 >> 4;
}
