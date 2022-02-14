
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdic_priv {size_t active_input_pad; int lock; struct v4l2_fract* frame_interval; int csi_direct; } ;
struct v4l2_fract {int denominator; int numerator; } ;
struct v4l2_subdev_frame_interval {int pad; struct v4l2_fract interval; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vdic_priv* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1,
    struct v4l2_subdev_frame_interval *VAR_2)
{
 struct vdic_priv *VAR_3 = FUNC_2(VAR_1);
 struct v4l2_fract *VAR_4, *VAR_5;
 int VAR_6 = 0;

 FUNC_0(&VAR_3->lock);

 VAR_4 = &VAR_3->frame_interval[VAR_3->active_input_pad];
 VAR_5 = &VAR_3->frame_interval[128];

 switch (VAR_2->pad) {
 case 130:
 case 129:

  if (VAR_2->interval.numerator == 0 ||
      VAR_2->interval.denominator == 0)
   VAR_2->interval = VAR_3->frame_interval[VAR_2->pad];

  *VAR_5 = VAR_2->interval;
  if (VAR_3->csi_direct)
   VAR_5->denominator *= 2;
  break;
 case 128:






  VAR_2->interval = *VAR_4;
  if (VAR_3->csi_direct)
   VAR_2->interval.denominator *= 2;
  break;
 default:
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_3->frame_interval[VAR_2->pad] = VAR_2->interval;
out:
 FUNC_1(&VAR_3->lock);
 return VAR_6;
}
