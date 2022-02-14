
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int member_2; int width; int height; int left; int top; int member_3; int member_1; int member_0; } ;
struct yuv_playback_info {int osd_full_w; int osd_full_h; int track_osd; struct v4l2_rect main_rect; } ;
struct v4l2_selection {scalar_t__ type; int target; struct v4l2_rect r; } ;
struct ivtv_open_id {int type; struct ivtv* itv; } ;
struct ivtv {int v4l2_cap; int is_out_50hz; struct v4l2_rect main_rect; int is_50hz; struct yuv_playback_info yuv_info; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;





 struct ivtv_open_id* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
       struct v4l2_selection *VAR_7)
{
 struct ivtv_open_id *VAR_8 = FUNC_0(VAR_6);
 struct ivtv *VAR_9 = VAR_8->itv;
 struct yuv_playback_info *VAR_10 = &VAR_9->yuv_info;
 struct v4l2_rect VAR_11 = { 0, 0, 720, 0 };
 int VAR_12 = VAR_8->type;

 if (VAR_7->type == VAR_2) {
  switch (VAR_7->target) {
  case 128:
  case 129:
   VAR_7->r.top = VAR_7->r.left = 0;
   VAR_7->r.width = 720;
   VAR_7->r.height = VAR_9->is_50hz ? 576 : 480;
   return 0;
  default:
   return -VAR_0;
  }
 }

 if (VAR_7->type != VAR_3 ||
     !(VAR_9->v4l2_cap & VAR_4))
  return -VAR_0;

 switch (VAR_7->target) {
 case 132:
  if (VAR_12 == VAR_1)
   VAR_7->r = VAR_10->main_rect;
  else
   VAR_7->r = VAR_9->main_rect;
  return 0;
 case 130:
 case 131:
  VAR_11.height = VAR_9->is_out_50hz ? 576 : 480;
  if (VAR_12 == VAR_1 && VAR_10->track_osd) {
   VAR_11.width = VAR_10->osd_full_w;
   VAR_11.height = VAR_10->osd_full_h;
  }
  VAR_7->r = VAR_11;
  return 0;
 }
 return -VAR_0;
}
