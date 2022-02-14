
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned int uartclk; struct dw8250_port_data* private_data; } ;
struct dw8250_port_data {unsigned int dlf_size; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_0, unsigned int VAR_1,
           unsigned int *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5 = VAR_1 * 16;
 struct dw8250_port_data *VAR_6 = VAR_0->private_data;

 VAR_3 = VAR_0->uartclk / VAR_5;
 VAR_4 = VAR_0->uartclk % VAR_5;
 *VAR_2 = FUNC_0(VAR_4 << VAR_6->dlf_size, VAR_5);

 return VAR_3;
}
