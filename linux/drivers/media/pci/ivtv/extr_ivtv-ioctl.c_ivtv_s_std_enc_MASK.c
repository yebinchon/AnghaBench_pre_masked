
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_3__ {int count; int* start; int sliced_decoder_line_size; } ;
struct TYPE_4__ {int width; int height; } ;
struct ivtv {int std; int is_60hz; int is_50hz; int hw_flags; TYPE_1__ vbi; TYPE_2__ cxhdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct ivtv*,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(struct ivtv *VAR_4, v4l2_std_id VAR_5)
{
 VAR_4->std = VAR_5;
 VAR_4->is_60hz = (VAR_5 & VAR_1) ? 1 : 0;
 VAR_4->is_50hz = !VAR_4->is_60hz;
 FUNC_0(&VAR_4->cxhdl, VAR_4->is_50hz);
 VAR_4->cxhdl.width = 720;
 VAR_4->cxhdl.height = VAR_4->is_50hz ? 576 : 480;
 VAR_4->vbi.count = VAR_4->is_50hz ? 18 : 12;
 VAR_4->vbi.start[0] = VAR_4->is_50hz ? 6 : 10;
 VAR_4->vbi.start[1] = VAR_4->is_50hz ? 318 : 273;

 if (VAR_4->hw_flags & VAR_0)
  VAR_4->vbi.sliced_decoder_line_size = VAR_4->is_60hz ? 272 : 284;


 FUNC_1(VAR_4, VAR_3, VAR_2, VAR_4->std);
}
