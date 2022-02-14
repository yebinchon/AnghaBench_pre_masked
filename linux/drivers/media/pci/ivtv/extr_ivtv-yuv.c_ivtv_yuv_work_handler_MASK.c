
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct yuv_frame_info {int vis_w; int vis_h; scalar_t__ pan_y; scalar_t__ pan_x; } ;
struct yuv_playback_info {int update_frame; int osd_vis_w; struct yuv_frame_info old_frame_info; int decode_height; int osd_vis_h; scalar_t__ osd_y_pan; scalar_t__ osd_x_pan; scalar_t__ track_osd; struct yuv_frame_info* new_frame_info; } ;
struct ivtv {struct yuv_playback_info yuv_info; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ivtv*,struct yuv_frame_info*) ;
 int FUNC_2 (struct ivtv*,struct yuv_frame_info*) ;
 int FUNC_3 (struct ivtv*,struct yuv_frame_info*) ;
 int FUNC_4 (int,int) ;

void FUNC_5(struct ivtv *VAR_3)
{
 struct yuv_playback_info *VAR_4 = &VAR_3->yuv_info;
 struct yuv_frame_info VAR_5;
 int VAR_6 = VAR_4->update_frame;
 u32 VAR_7;

 FUNC_0("Update yuv registers for frame %d\n", VAR_6);
 VAR_5 = VAR_4->new_frame_info[VAR_6];

 if (VAR_4->track_osd) {

  VAR_5.pan_x = VAR_4->osd_x_pan;
  VAR_5.pan_y = VAR_4->osd_y_pan;
  VAR_5.vis_w = VAR_4->osd_vis_w;
  VAR_5.vis_h = VAR_4->osd_vis_h;
 } else {

  VAR_5.pan_x = 0;
  VAR_5.pan_y = 0;
  VAR_5.vis_w = 720;
  VAR_5.vis_h = VAR_4->decode_height;
 }


 if (!(VAR_7 = FUNC_3(VAR_3, &VAR_5)))
  return;

 if (VAR_7 & VAR_1) {
  FUNC_4(0x01008080, 0x2898);
 } else if (VAR_7) {
  FUNC_4(0x00108080, 0x2898);

  if (VAR_7 & VAR_0)
   FUNC_1(VAR_3, &VAR_5);

  if (VAR_7 & VAR_2)
   FUNC_2(VAR_3, &VAR_5);
 }
 VAR_4->old_frame_info = VAR_5;
}
