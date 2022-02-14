
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007_board_info {int sensor_flags; int sensor_width; int sensor_height; int sensor_framerate; int sensor_h_offset; int sensor_v_offset; } ;
struct go7007 {int width; int height; int sensor_framerate; int encoder_h_offset; int encoder_v_offset; int standard; int std; struct go7007_board_info* board_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct go7007 *VAR_4)
{
 const struct go7007_board_info *VAR_5 = VAR_4->board_info;

 if (VAR_5->sensor_flags & VAR_0) {
  VAR_4->standard = VAR_1;
  VAR_4->std = VAR_3;
  VAR_4->width = 720;
  VAR_4->height = 480;
  VAR_4->sensor_framerate = 30000;
 } else {
  VAR_4->standard = VAR_2;
  VAR_4->width = VAR_5->sensor_width;
  VAR_4->height = VAR_5->sensor_height;
  VAR_4->sensor_framerate = VAR_5->sensor_framerate;
 }
 VAR_4->encoder_v_offset = VAR_5->sensor_v_offset;
 VAR_4->encoder_h_offset = VAR_5->sensor_h_offset;
}
