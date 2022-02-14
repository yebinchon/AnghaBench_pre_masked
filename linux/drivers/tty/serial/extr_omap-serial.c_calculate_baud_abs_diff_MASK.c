
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned int uartclk; } ;



__attribute__((used)) static inline int FUNC_0(struct uart_port *VAR_0,
    unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_0->uartclk / (VAR_2 * VAR_1);
 int VAR_4;

 if (VAR_3 == 0)
  VAR_3 = 1;

 VAR_4 = VAR_1 - (VAR_0->uartclk / (VAR_2 * VAR_3));
 if (VAR_4 < 0)
  VAR_4 = -VAR_4;

 return VAR_4;
}
