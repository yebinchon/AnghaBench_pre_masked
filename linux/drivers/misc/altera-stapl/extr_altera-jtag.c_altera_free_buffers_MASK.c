
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_jtag {scalar_t__ jtag_state; int * ir_buffer; int * ir_post_data; int * ir_pre_data; int * dr_buffer; int * dr_post_data; int * dr_pre_data; } ;
struct altera_state {struct altera_jtag js; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct altera_state*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct altera_state *VAR_1)
{
 struct altera_jtag *VAR_2 = &VAR_1->js;

 if (VAR_2->jtag_state != VAR_0)
  FUNC_0(VAR_1);

 FUNC_1(VAR_2->dr_pre_data);
 VAR_2->dr_pre_data = ((void*)0);

 FUNC_1(VAR_2->dr_post_data);
 VAR_2->dr_post_data = ((void*)0);

 FUNC_1(VAR_2->dr_buffer);
 VAR_2->dr_buffer = ((void*)0);

 FUNC_1(VAR_2->ir_pre_data);
 VAR_2->ir_pre_data = ((void*)0);

 FUNC_1(VAR_2->ir_post_data);
 VAR_2->ir_post_data = ((void*)0);

 FUNC_1(VAR_2->ir_buffer);
 VAR_2->ir_buffer = ((void*)0);
}
