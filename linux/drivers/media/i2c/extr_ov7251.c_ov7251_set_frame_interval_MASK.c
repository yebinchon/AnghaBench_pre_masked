
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_frame_interval {int interval; } ;
struct v4l2_subdev {int dummy; } ;
struct ov7251_mode_info {int link_freq; int exposure_def; int timeperframe; int exposure_max; int pixel_clock; } ;
struct ov7251 {int lock; struct ov7251_mode_info const* current_mode; int gain; int exposure; int link_freq; int pixel_clock; } ;


 int FUNC_0 (int ,int,int ,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ov7251_mode_info* FUNC_5 (struct ov7251*,int *) ;
 struct ov7251* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_0,
         struct v4l2_subdev_frame_interval *VAR_1)
{
 struct ov7251 *VAR_2 = FUNC_6(VAR_0);
 const struct ov7251_mode_info *VAR_3;
 int VAR_4 = 0;

 FUNC_3(&VAR_2->lock);
 VAR_3 = FUNC_5(VAR_2, &VAR_1->interval);

 if (VAR_3 != VAR_2->current_mode) {
  VAR_4 = FUNC_2(VAR_2->pixel_clock,
            VAR_3->pixel_clock);
  if (VAR_4 < 0)
   goto exit;

  VAR_4 = FUNC_1(VAR_2->link_freq,
      VAR_3->link_freq);
  if (VAR_4 < 0)
   goto exit;

  VAR_4 = FUNC_0(VAR_2->exposure,
            1, VAR_3->exposure_max,
            1, VAR_3->exposure_def);
  if (VAR_4 < 0)
   goto exit;

  VAR_4 = FUNC_1(VAR_2->exposure,
      VAR_3->exposure_def);
  if (VAR_4 < 0)
   goto exit;

  VAR_4 = FUNC_1(VAR_2->gain, 16);
  if (VAR_4 < 0)
   goto exit;

  VAR_2->current_mode = VAR_3;
 }

 VAR_1->interval = VAR_2->current_mode->timeperframe;

exit:
 FUNC_4(&VAR_2->lock);

 return VAR_4;
}
