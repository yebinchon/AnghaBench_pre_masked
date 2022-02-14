
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct video_device {int vfl_type; } ;
struct v4l2_ioctl_ops {int (* vidioc_s_fmt_vid_cap ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_vid_cap_mplane ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_vid_overlay ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_vbi_cap ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_sliced_vbi_cap ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_vid_out ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_vid_out_mplane ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_vid_out_overlay ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_vbi_out ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_sliced_vbi_out ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_sdr_cap ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_sdr_out ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_meta_cap ) (struct file*,void*,void*) ;int (* vidioc_s_fmt_meta_out ) (struct file*,void*,void*) ;} ;
struct TYPE_7__ {unsigned int num_planes; struct v4l2_format* plane_fmt; } ;
struct TYPE_9__ {void* priv; } ;
struct TYPE_8__ {TYPE_2__ pix_mp; TYPE_4__ pix; } ;
struct v4l2_format {int type; TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int xfer_func; } ;
struct TYPE_10__ {int meta; int sdr; int sliced; int vbi; int win; TYPE_1__ pix_mp; int pix; } ;


 int FUNC_0 (struct v4l2_format*,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct file*,int) ;
 TYPE_5__ VAR_4 ;
 int FUNC_2 (struct file*,void*,void*) ;
 int FUNC_3 (struct file*,void*,void*) ;
 int FUNC_4 (struct file*,void*,void*) ;
 int FUNC_5 (struct file*,void*,void*) ;
 int FUNC_6 (struct file*,void*,void*) ;
 int FUNC_7 (struct file*,void*,void*) ;
 int FUNC_8 (struct file*,void*,void*) ;
 int FUNC_9 (struct file*,void*,void*) ;
 int FUNC_10 (struct file*,void*,void*) ;
 int FUNC_11 (struct file*,void*,void*) ;
 int FUNC_12 (struct file*,void*,void*) ;
 int FUNC_13 (struct file*,void*,void*) ;
 int FUNC_14 (struct file*,void*,void*) ;
 int FUNC_15 (struct file*,void*,void*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct video_device*) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (struct v4l2_format*) ;
 struct video_device* FUNC_20 (struct file*) ;

__attribute__((used)) static int FUNC_21(const struct v4l2_ioctl_ops *VAR_5,
    struct file *VAR_6, void *VAR_7, void *VAR_8)
{
 struct v4l2_format *VAR_9 = VAR_8;
 struct video_device *VAR_10 = FUNC_20(VAR_6);
 int VAR_11 = FUNC_1(VAR_6, VAR_9->type);
 unsigned int VAR_12;

 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_17(VAR_10);
 if (VAR_11)
  return VAR_11;
 FUNC_19(VAR_9);

 switch (VAR_9->type) {
 case 133:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_vid_cap))
   break;
  FUNC_0(VAR_9, VAR_4.pix);
  VAR_11 = VAR_5->vidioc_s_fmt_vid_cap(VAR_6, VAR_7, VAR_8);

  VAR_9->fmt.pix.priv = VAR_1;
  if (VAR_10->vfl_type == VAR_2)
   FUNC_18(&VAR_9->fmt.pix);
  return VAR_11;
 case 132:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_vid_cap_mplane))
   break;
  FUNC_0(VAR_9, VAR_4.pix_mp.xfer_func);
  for (VAR_12 = 0; VAR_12 < VAR_9->fmt.pix_mp.num_planes; VAR_12++)
   FUNC_0(&VAR_9->fmt.pix_mp.plane_fmt[VAR_12],
       VAR_3);
  return VAR_5->vidioc_s_fmt_vid_cap_mplane(VAR_6, VAR_7, VAR_8);
 case 128:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_vid_overlay))
   break;
  FUNC_0(VAR_9, VAR_4.win);
  return VAR_5->vidioc_s_fmt_vid_overlay(VAR_6, VAR_7, VAR_8);
 case 135:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_vbi_cap))
   break;
  FUNC_0(VAR_9, VAR_4.vbi);
  return VAR_5->vidioc_s_fmt_vbi_cap(VAR_6, VAR_7, VAR_8);
 case 137:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_sliced_vbi_cap))
   break;
  FUNC_0(VAR_9, VAR_4.sliced);
  return VAR_5->vidioc_s_fmt_sliced_vbi_cap(VAR_6, VAR_7, VAR_8);
 case 131:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_vid_out))
   break;
  FUNC_0(VAR_9, VAR_4.pix);
  VAR_11 = VAR_5->vidioc_s_fmt_vid_out(VAR_6, VAR_7, VAR_8);

  VAR_9->fmt.pix.priv = VAR_1;
  return VAR_11;
 case 130:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_vid_out_mplane))
   break;
  FUNC_0(VAR_9, VAR_4.pix_mp.xfer_func);
  for (VAR_12 = 0; VAR_12 < VAR_9->fmt.pix_mp.num_planes; VAR_12++)
   FUNC_0(&VAR_9->fmt.pix_mp.plane_fmt[VAR_12],
       VAR_3);
  return VAR_5->vidioc_s_fmt_vid_out_mplane(VAR_6, VAR_7, VAR_8);
 case 129:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_vid_out_overlay))
   break;
  FUNC_0(VAR_9, VAR_4.win);
  return VAR_5->vidioc_s_fmt_vid_out_overlay(VAR_6, VAR_7, VAR_8);
 case 134:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_vbi_out))
   break;
  FUNC_0(VAR_9, VAR_4.vbi);
  return VAR_5->vidioc_s_fmt_vbi_out(VAR_6, VAR_7, VAR_8);
 case 136:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_sliced_vbi_out))
   break;
  FUNC_0(VAR_9, VAR_4.sliced);
  return VAR_5->vidioc_s_fmt_sliced_vbi_out(VAR_6, VAR_7, VAR_8);
 case 139:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_sdr_cap))
   break;
  FUNC_0(VAR_9, VAR_4.sdr);
  return VAR_5->vidioc_s_fmt_sdr_cap(VAR_6, VAR_7, VAR_8);
 case 138:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_sdr_out))
   break;
  FUNC_0(VAR_9, VAR_4.sdr);
  return VAR_5->vidioc_s_fmt_sdr_out(VAR_6, VAR_7, VAR_8);
 case 141:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_meta_cap))
   break;
  FUNC_0(VAR_9, VAR_4.meta);
  return VAR_5->vidioc_s_fmt_meta_cap(VAR_6, VAR_7, VAR_8);
 case 140:
  if (FUNC_16(!VAR_5->vidioc_s_fmt_meta_out))
   break;
  FUNC_0(VAR_9, VAR_4.meta);
  return VAR_5->vidioc_s_fmt_meta_out(VAR_6, VAR_7, VAR_8);
 }
 return -VAR_0;
}
