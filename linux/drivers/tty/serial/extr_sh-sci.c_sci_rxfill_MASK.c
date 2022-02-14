
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct sci_port {TYPE_1__* params; } ;
struct plat_sci_reg {scalar_t__ size; } ;
struct TYPE_2__ {int fifosize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 struct plat_sci_reg* FUNC_1 (struct uart_port*,int ) ;
 unsigned int FUNC_2 (struct uart_port*,int ) ;
 struct sci_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_3)
{
 struct sci_port *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5 = (VAR_4->params->fifosize << 1) - 1;
 const struct plat_sci_reg *VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_1);
 if (VAR_6->size)
  return FUNC_2(VAR_3, VAR_1) & VAR_5;

 VAR_6 = FUNC_1(VAR_3, VAR_0);
 if (VAR_6->size)
  return FUNC_2(VAR_3, VAR_0) & VAR_5;

 return (FUNC_2(VAR_3, VAR_2) & FUNC_0(VAR_3)) != 0;
}
