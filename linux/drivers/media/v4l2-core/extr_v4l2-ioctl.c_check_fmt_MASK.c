
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; scalar_t__ vfl_dir; struct v4l2_ioctl_ops* ioctl_ops; } ;
struct v4l2_ioctl_ops {int vidioc_g_fmt_meta_out; int vidioc_g_fmt_meta_cap; int vidioc_g_fmt_sdr_out; int vidioc_g_fmt_sdr_cap; int vidioc_g_fmt_sliced_vbi_out; int vidioc_g_fmt_sliced_vbi_cap; int vidioc_g_fmt_vbi_out; int vidioc_g_fmt_vbi_cap; int vidioc_g_fmt_vid_out_overlay; int vidioc_g_fmt_vid_out_mplane; int vidioc_g_fmt_vid_out; int vidioc_g_fmt_vid_overlay; int vidioc_g_fmt_vid_cap_mplane; int vidioc_g_fmt_vid_cap; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct video_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_7, enum v4l2_buf_type VAR_8)
{
 struct video_device *VAR_9 = FUNC_0(VAR_7);
 const struct v4l2_ioctl_ops *VAR_10 = VAR_9->ioctl_ops;
 bool VAR_11 = VAR_9->vfl_type == VAR_3;
 bool VAR_12 = VAR_9->vfl_type == VAR_6;
 bool VAR_13 = VAR_9->vfl_type == VAR_4;
 bool VAR_14 = VAR_9->vfl_type == VAR_5;
 bool VAR_15 = VAR_9->vfl_dir != VAR_2;
 bool VAR_16 = VAR_9->vfl_dir != VAR_1;

 if (VAR_10 == ((void*)0))
  return -VAR_0;

 switch (VAR_8) {
 case 133:
  if ((VAR_11 || VAR_14) && VAR_15 &&
      (VAR_10->vidioc_g_fmt_vid_cap || VAR_10->vidioc_g_fmt_vid_cap_mplane))
   return 0;
  break;
 case 132:
  if (VAR_11 && VAR_15 && VAR_10->vidioc_g_fmt_vid_cap_mplane)
   return 0;
  break;
 case 128:
  if (VAR_11 && VAR_15 && VAR_10->vidioc_g_fmt_vid_overlay)
   return 0;
  break;
 case 131:
  if (VAR_11 && VAR_16 &&
      (VAR_10->vidioc_g_fmt_vid_out || VAR_10->vidioc_g_fmt_vid_out_mplane))
   return 0;
  break;
 case 130:
  if (VAR_11 && VAR_16 && VAR_10->vidioc_g_fmt_vid_out_mplane)
   return 0;
  break;
 case 129:
  if (VAR_11 && VAR_16 && VAR_10->vidioc_g_fmt_vid_out_overlay)
   return 0;
  break;
 case 135:
  if (VAR_12 && VAR_15 && VAR_10->vidioc_g_fmt_vbi_cap)
   return 0;
  break;
 case 134:
  if (VAR_12 && VAR_16 && VAR_10->vidioc_g_fmt_vbi_out)
   return 0;
  break;
 case 137:
  if (VAR_12 && VAR_15 && VAR_10->vidioc_g_fmt_sliced_vbi_cap)
   return 0;
  break;
 case 136:
  if (VAR_12 && VAR_16 && VAR_10->vidioc_g_fmt_sliced_vbi_out)
   return 0;
  break;
 case 139:
  if (VAR_13 && VAR_15 && VAR_10->vidioc_g_fmt_sdr_cap)
   return 0;
  break;
 case 138:
  if (VAR_13 && VAR_16 && VAR_10->vidioc_g_fmt_sdr_out)
   return 0;
  break;
 case 141:
  if (VAR_11 && VAR_15 && VAR_10->vidioc_g_fmt_meta_cap)
   return 0;
  break;
 case 140:
  if (VAR_11 && VAR_16 && VAR_10->vidioc_g_fmt_meta_out)
   return 0;
  break;
 default:
  break;
 }
 return -VAR_0;
}
