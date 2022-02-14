
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int draw_frame; int next_fill_frame; } ;
struct ivtv {TYPE_1__ yuv_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

void FUNC_1(struct ivtv *VAR_1)
{
 FUNC_0(&VAR_1->yuv_info.next_fill_frame,
   (VAR_1->yuv_info.draw_frame + 1) % VAR_0);
}
