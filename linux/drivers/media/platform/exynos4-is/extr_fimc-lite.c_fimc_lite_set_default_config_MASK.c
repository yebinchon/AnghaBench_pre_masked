
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ top; scalar_t__ left; void* height; void* width; } ;
struct flite_frame {TYPE_1__ rect; void* f_height; void* f_width; int * fmt; } ;
struct fimc_lite {struct flite_frame out_frame; struct flite_frame inp_frame; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_0(struct fimc_lite *VAR_3)
{
 struct flite_frame *VAR_4 = &VAR_3->inp_frame;
 struct flite_frame *VAR_5 = &VAR_3->out_frame;

 VAR_4->fmt = &VAR_2[0];
 VAR_4->f_width = VAR_1;
 VAR_4->f_height = VAR_0;

 VAR_4->rect.width = VAR_1;
 VAR_4->rect.height = VAR_0;
 VAR_4->rect.left = 0;
 VAR_4->rect.top = 0;

 *VAR_5 = *VAR_4;
}
