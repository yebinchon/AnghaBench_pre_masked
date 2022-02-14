
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
 int VAR_3 ;
 struct plat_sci_reg* FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ) ;
 struct sci_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_4)
{
 struct sci_port *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6 = (VAR_5->params->fifosize << 1) - 1;
 const struct plat_sci_reg *VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_2);
 if (VAR_7->size)
  return FUNC_1(VAR_4, VAR_2) & VAR_6;

 VAR_7 = FUNC_0(VAR_4, VAR_0);
 if (VAR_7->size)
  return FUNC_1(VAR_4, VAR_0) >> 8;

 return !(FUNC_1(VAR_4, VAR_3) & VAR_1);
}
