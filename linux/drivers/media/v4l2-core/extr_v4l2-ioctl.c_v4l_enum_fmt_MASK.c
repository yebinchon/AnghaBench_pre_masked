
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct video_device {int device_caps; } ;
struct v4l2_ioctl_ops {int (* vidioc_enum_fmt_vid_cap ) (struct file*,void*,void*) ;int (* vidioc_enum_fmt_vid_overlay ) (struct file*,void*,void*) ;int (* vidioc_enum_fmt_vid_out ) (struct file*,void*,void*) ;int (* vidioc_enum_fmt_sdr_cap ) (struct file*,void*,void*) ;int (* vidioc_enum_fmt_sdr_out ) (struct file*,void*,void*) ;int (* vidioc_enum_fmt_meta_cap ) (struct file*,void*,void*) ;int (* vidioc_enum_fmt_meta_out ) (struct file*,void*,void*) ;} ;
struct v4l2_fmtdesc {int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int) ;
 int FUNC_1 (struct file*,void*,void*) ;
 int FUNC_2 (struct file*,void*,void*) ;
 int FUNC_3 (struct file*,void*,void*) ;
 int FUNC_4 (struct file*,void*,void*) ;
 int FUNC_5 (struct file*,void*,void*) ;
 int FUNC_6 (struct file*,void*,void*) ;
 int FUNC_7 (struct file*,void*,void*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct v4l2_fmtdesc*) ;
 struct video_device* FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(const struct v4l2_ioctl_ops *VAR_4,
    struct file *VAR_5, void *VAR_6, void *VAR_7)
{
 struct video_device *VAR_8 = FUNC_10(VAR_5);
 struct v4l2_fmtdesc *VAR_9 = VAR_7;
 int VAR_10 = FUNC_0(VAR_5, VAR_9->type);
 u32 VAR_11;

 if (VAR_10)
  return VAR_10;
 VAR_10 = -VAR_0;

 switch (VAR_9->type) {
 case 132:
 case 131:
  VAR_11 = VAR_1 |
      VAR_2;
  if (!!(VAR_8->device_caps & VAR_11) !=
      (VAR_9->type == 131))
   break;

  if (FUNC_8(!VAR_4->vidioc_enum_fmt_vid_cap))
   break;
  VAR_10 = VAR_4->vidioc_enum_fmt_vid_cap(VAR_5, VAR_6, VAR_7);
  break;
 case 128:
  if (FUNC_8(!VAR_4->vidioc_enum_fmt_vid_overlay))
   break;
  VAR_10 = VAR_4->vidioc_enum_fmt_vid_overlay(VAR_5, VAR_6, VAR_7);
  break;
 case 130:
 case 129:
  VAR_11 = VAR_3 |
      VAR_2;
  if (!!(VAR_8->device_caps & VAR_11) !=
      (VAR_9->type == 129))
   break;

  if (FUNC_8(!VAR_4->vidioc_enum_fmt_vid_out))
   break;
  VAR_10 = VAR_4->vidioc_enum_fmt_vid_out(VAR_5, VAR_6, VAR_7);
  break;
 case 134:
  if (FUNC_8(!VAR_4->vidioc_enum_fmt_sdr_cap))
   break;
  VAR_10 = VAR_4->vidioc_enum_fmt_sdr_cap(VAR_5, VAR_6, VAR_7);
  break;
 case 133:
  if (FUNC_8(!VAR_4->vidioc_enum_fmt_sdr_out))
   break;
  VAR_10 = VAR_4->vidioc_enum_fmt_sdr_out(VAR_5, VAR_6, VAR_7);
  break;
 case 136:
  if (FUNC_8(!VAR_4->vidioc_enum_fmt_meta_cap))
   break;
  VAR_10 = VAR_4->vidioc_enum_fmt_meta_cap(VAR_5, VAR_6, VAR_7);
  break;
 case 135:
  if (FUNC_8(!VAR_4->vidioc_enum_fmt_meta_out))
   break;
  VAR_10 = VAR_4->vidioc_enum_fmt_meta_out(VAR_5, VAR_6, VAR_7);
  break;
 }
 if (VAR_10 == 0)
  FUNC_9(VAR_9);
 return VAR_10;
}
