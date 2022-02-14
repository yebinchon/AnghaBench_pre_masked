
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_jtag {int * ir_buffer; int * dr_buffer; int * ir_post_data; int * ir_pre_data; int * dr_post_data; int * dr_pre_data; scalar_t__ ir_length; scalar_t__ dr_length; scalar_t__ ir_post; scalar_t__ ir_pre; scalar_t__ dr_post; scalar_t__ dr_pre; void* irstop_state; void* drstop_state; int jtag_state; } ;
struct altera_state {struct altera_jtag js; } ;


 void* VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct altera_state *VAR_2)
{
 struct altera_jtag *VAR_3 = &VAR_2->js;


 VAR_3->jtag_state = VAR_1;


 VAR_3->drstop_state = VAR_0;
 VAR_3->irstop_state = VAR_0;
 VAR_3->dr_pre = 0;
 VAR_3->dr_post = 0;
 VAR_3->ir_pre = 0;
 VAR_3->ir_post = 0;
 VAR_3->dr_length = 0;
 VAR_3->ir_length = 0;

 VAR_3->dr_pre_data = ((void*)0);
 VAR_3->dr_post_data = ((void*)0);
 VAR_3->ir_pre_data = ((void*)0);
 VAR_3->ir_post_data = ((void*)0);
 VAR_3->dr_buffer = ((void*)0);
 VAR_3->ir_buffer = ((void*)0);

 return 0;
}
