
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int stream_mode; } ;
struct TYPE_5__ {int flicker_mode_req; } ;
struct TYPE_7__ {int height; int width; } ;
struct TYPE_8__ {TYPE_2__ camera_state; TYPE_1__ flicker_control; TYPE_3__ roi; } ;
struct camera_data {int pixelformat; TYPE_4__ params; int num_frames; int frame_size; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct camera_data *VAR_5)
{
 VAR_5->width = VAR_5->params.roi.width;
 VAR_5->height = VAR_5->params.roi.height;

 VAR_5->frame_size = VAR_2;
 VAR_5->num_frames = VAR_4;


 VAR_5->params.flicker_control.flicker_mode_req = VAR_3;


 VAR_5->params.camera_state.stream_mode = VAR_1;

 VAR_5->pixelformat = VAR_0;
}
