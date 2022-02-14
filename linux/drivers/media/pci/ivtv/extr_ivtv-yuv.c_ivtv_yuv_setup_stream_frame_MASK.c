
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yuv_playback_info {size_t draw_frame; int v4l2_src_h; int v4l2_src_w; int main_rect; } ;
struct TYPE_2__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct ivtv_dma_frame {int src_height; int src_width; int dst; TYPE_1__ src; int * uv_source; int * y_source; } ;
struct ivtv {scalar_t__ dma_data_req_offset; struct yuv_playback_info yuv_info; } ;


 int FUNC_0 (struct ivtv*) ;
 int FUNC_1 (struct ivtv*,struct ivtv_dma_frame*) ;
 scalar_t__* VAR_0 ;

void FUNC_2(struct ivtv *VAR_1)
{
 struct yuv_playback_info *VAR_2 = &VAR_1->yuv_info;
 struct ivtv_dma_frame VAR_3;

 FUNC_0(VAR_1);


 VAR_3.y_source = ((void*)0);
 VAR_3.uv_source = ((void*)0);
 VAR_3.src.left = 0;
 VAR_3.src.top = 0;
 VAR_3.src.width = VAR_2->v4l2_src_w;
 VAR_3.src.height = VAR_2->v4l2_src_h;
 VAR_3.dst = VAR_2->main_rect;
 VAR_3.src_width = VAR_2->v4l2_src_w;
 VAR_3.src_height = VAR_2->v4l2_src_h;


 FUNC_1(VAR_1, &VAR_3);

 if (!VAR_1->dma_data_req_offset)
  VAR_1->dma_data_req_offset = VAR_0[VAR_2->draw_frame];
}
