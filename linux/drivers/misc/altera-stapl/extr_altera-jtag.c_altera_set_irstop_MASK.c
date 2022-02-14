
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_jtag {int irstop_state; } ;
typedef enum altera_jtag_state { ____Placeholder_altera_jtag_state } altera_jtag_state ;



int FUNC_0(struct altera_jtag *VAR_0, enum altera_jtag_state VAR_1)
{
 VAR_0->irstop_state = VAR_1;

 return 0;
}
