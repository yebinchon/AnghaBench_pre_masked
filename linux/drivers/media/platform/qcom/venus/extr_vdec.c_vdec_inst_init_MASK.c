
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numerator; int denominator; } ;
struct venus_inst {int fps; int opb_buftype; TYPE_1__ timeperframe; int out_height; void* out_width; int height; void* width; int * fmt_cap; int * fmt_out; int hfi_codec; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct venus_inst*) ;
 void* FUNC_2 (struct venus_inst*) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(struct venus_inst *VAR_3)
{
 VAR_3->hfi_codec = VAR_1;
 VAR_3->fmt_out = &VAR_2[6];
 VAR_3->fmt_cap = &VAR_2[0];
 VAR_3->width = FUNC_2(VAR_3);
 VAR_3->height = FUNC_0(FUNC_1(VAR_3), 32);
 VAR_3->out_width = FUNC_2(VAR_3);
 VAR_3->out_height = FUNC_1(VAR_3);
 VAR_3->fps = 30;
 VAR_3->timeperframe.numerator = 1;
 VAR_3->timeperframe.denominator = 30;
 VAR_3->opb_buftype = VAR_0;
}
