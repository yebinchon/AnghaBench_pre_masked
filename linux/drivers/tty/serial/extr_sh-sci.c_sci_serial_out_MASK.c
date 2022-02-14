
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; scalar_t__ membase; } ;
struct plat_sci_reg {int size; int offset; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 struct plat_sci_reg* FUNC_3 (struct uart_port*,int) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_0, int VAR_1, int VAR_2)
{
 const struct plat_sci_reg *VAR_3 = FUNC_3(VAR_0, VAR_1);

 if (VAR_3->size == 8)
  FUNC_2(VAR_2, VAR_0->membase + (VAR_3->offset << VAR_0->regshift));
 else if (VAR_3->size == 16)
  FUNC_1(VAR_2, VAR_0->membase + (VAR_3->offset << VAR_0->regshift));
 else
  FUNC_0(1, "Invalid register access\n");
}
