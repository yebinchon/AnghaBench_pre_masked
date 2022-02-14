
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_format {int format; int which; } ;
struct v4l2_pix_format {int height; int width; int pixelformat; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct pxa_camera_format_xlate {int code; } ;
struct pxa_camera_dev {struct v4l2_pix_format current_pix; struct pxa_camera_format_xlate const* current_fmt; int user_formats; int lock; int vb2_vq; scalar_t__ active; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int VAR_3 ;
 int FUNC_2 (struct pxa_camera_dev*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pxa_camera_dev*) ;
 struct pxa_camera_format_xlate* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_7 (struct pxa_camera_dev*,int ,int ,int *,struct v4l2_subdev_format*) ;
 int VAR_4 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,struct v4l2_pix_format*,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 struct pxa_camera_dev* FUNC_12 (struct file*) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_5, void *VAR_6,
        struct v4l2_format *VAR_7)
{
 struct pxa_camera_dev *VAR_8 = FUNC_12(VAR_5);
 const struct pxa_camera_format_xlate *VAR_9;
 struct v4l2_pix_format *VAR_10 = &VAR_7->fmt.pix;
 struct v4l2_subdev_format VAR_11 = {
  .which = VAR_2,
 };
 unsigned long VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(FUNC_2(VAR_8),
  "s_fmt_vid_cap(pix=%dx%d:%x)\n",
  VAR_10->width, VAR_10->height, VAR_10->pixelformat);

 FUNC_8(&VAR_8->lock, VAR_12);
 VAR_14 = VAR_8->active || FUNC_11(&VAR_8->vb2_vq);
 FUNC_9(&VAR_8->lock, VAR_12);

 if (VAR_14)
  return -VAR_0;

 VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_7);
 if (VAR_13)
  return VAR_13;

 VAR_9 = FUNC_5(VAR_8->user_formats,
      VAR_10->pixelformat);
 FUNC_10(&VAR_11.format, VAR_10, VAR_9->code);
 VAR_13 = FUNC_7(VAR_8, VAR_3, VAR_4, ((void*)0), &VAR_11);
 if (VAR_13 < 0) {
  FUNC_1(FUNC_2(VAR_8),
    "Failed to configure for format %x\n",
    VAR_10->pixelformat);
 } else if (FUNC_3(VAR_10->width, VAR_10->height)) {
  FUNC_1(FUNC_2(VAR_8),
    "Camera driver produced an unsupported frame %dx%d\n",
    VAR_10->width, VAR_10->height);
  return -VAR_1;
 }

 VAR_8->current_fmt = VAR_9;
 VAR_8->current_pix = *VAR_10;

 VAR_13 = FUNC_4(VAR_8);
 return VAR_13;
}
