
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; scalar_t__ membase; } ;
struct plat_sci_reg {int size; int offset; } ;


 int FUNC_0 (int,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 struct plat_sci_reg* FUNC_3 (struct uart_port*,int) ;

__attribute__((used)) static unsigned int FUNC_4(struct uart_port *VAR_0, int VAR_1)
{
 const struct plat_sci_reg *VAR_2 = FUNC_3(VAR_0, VAR_1);

 if (VAR_2->size == 8)
  return FUNC_2(VAR_0->membase + (VAR_2->offset << VAR_0->regshift));
 else if (VAR_2->size == 16)
  return FUNC_1(VAR_0->membase + (VAR_2->offset << VAR_0->regshift));
 else
  FUNC_0(1, "Invalid register access\n");

 return 0;
}
