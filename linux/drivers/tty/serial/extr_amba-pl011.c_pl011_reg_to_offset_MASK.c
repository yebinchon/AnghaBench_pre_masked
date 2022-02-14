
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_amba_port {unsigned int* reg_offset; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct uart_amba_port *VAR_0,
 unsigned int VAR_1)
{
 return VAR_0->reg_offset[VAR_1];
}
