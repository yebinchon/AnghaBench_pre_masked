
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numerator; int denominator; } ;
struct venus_inst {int width; int out_width; int out_height; int fps; int hfi_codec; TYPE_1__ timeperframe; int height; int * fmt_out; int * fmt_cap; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(struct venus_inst *VAR_2)
{
 VAR_2->fmt_cap = &VAR_1[2];
 VAR_2->fmt_out = &VAR_1[0];
 VAR_2->width = 1280;
 VAR_2->height = FUNC_0(720, 32);
 VAR_2->out_width = 1280;
 VAR_2->out_height = 720;
 VAR_2->fps = 15;
 VAR_2->timeperframe.numerator = 1;
 VAR_2->timeperframe.denominator = 15;
 VAR_2->hfi_codec = VAR_0;
}
