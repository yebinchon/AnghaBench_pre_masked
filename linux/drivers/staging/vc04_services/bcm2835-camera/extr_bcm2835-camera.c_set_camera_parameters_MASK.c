
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_mmal_instance {int dummy; } ;
struct vchiq_mmal_component {int control; } ;
struct mmal_parameter_camera_config {int stills_yuv422; int one_shot_stills; int max_preview_video_w; int max_preview_video_h; int num_preview_video_frames; int use_stc_timestamp; int fast_preview_resume; int stills_capture_circular_buffer_height; int max_stills_h; int max_stills_w; } ;
struct bm2835_mmal_dev {int max_height; int max_width; } ;
typedef int cam_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vchiq_mmal_instance*,int *,int ,struct mmal_parameter_camera_config*,int) ;

__attribute__((used)) static int FUNC_1(struct vchiq_mmal_instance *VAR_4,
     struct vchiq_mmal_component *VAR_5,
     struct bm2835_mmal_dev *VAR_6)
{
 struct mmal_parameter_camera_config VAR_7 = {
  .max_stills_w = VAR_6->max_width,
  .max_stills_h = VAR_6->max_height,
  .stills_yuv422 = 1,
  .one_shot_stills = 1,
  .max_preview_video_w = (VAR_3 > 1920) ?
      VAR_3 : 1920,
  .max_preview_video_h = (VAR_2 > 1088) ?
      VAR_2 : 1088,
  .num_preview_video_frames = 3,
  .stills_capture_circular_buffer_height = 0,
  .fast_preview_resume = 0,
  .use_stc_timestamp = VAR_1
 };

 return FUNC_0(VAR_4, &VAR_5->control,
         VAR_0,
         &VAR_7, sizeof(VAR_7));
}
