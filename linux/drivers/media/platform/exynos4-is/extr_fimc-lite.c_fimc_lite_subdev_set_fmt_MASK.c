
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; int code; } ;
struct v4l2_subdev_format {unsigned int pad; scalar_t__ which; struct v4l2_mbus_framefmt format; } ;
struct TYPE_3__ {scalar_t__ stream_count; } ;
struct v4l2_subdev {TYPE_1__ entity; } ;
struct TYPE_4__ {scalar_t__ top; scalar_t__ left; int height; int width; } ;
struct flite_frame {int f_height; int f_width; TYPE_2__ rect; struct fimc_fmt const* fmt; } ;
struct fimc_lite {int lock; int vb_queue; int out_path; struct flite_frame out_frame; struct flite_frame inp_frame; } ;
struct fimc_fmt {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_6 ;
 struct fimc_fmt* FUNC_2 (struct fimc_lite*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int ,struct v4l2_subdev*,char*,unsigned int,int ,int ,int ) ;
 struct fimc_lite* FUNC_6 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_7,
        struct v4l2_subdev_pad_config *VAR_8,
        struct v4l2_subdev_format *VAR_9)
{
 struct fimc_lite *VAR_10 = FUNC_6(VAR_7);
 struct v4l2_mbus_framefmt *VAR_11 = &VAR_9->format;
 struct flite_frame *VAR_12 = &VAR_10->inp_frame;
 struct flite_frame *VAR_13 = &VAR_10->out_frame;
 const struct fimc_fmt *VAR_14;

 FUNC_5(1, VAR_6, VAR_7, "pad%d: code: 0x%x, %dx%d\n",
   VAR_9->pad, VAR_11->code, VAR_11->width, VAR_11->height);

 FUNC_3(&VAR_10->lock);

 if ((FUNC_1(&VAR_10->out_path) == VAR_2 &&
     VAR_7->entity.stream_count > 0) ||
     (FUNC_1(&VAR_10->out_path) == VAR_1 &&
     FUNC_7(&VAR_10->vb_queue))) {
  FUNC_4(&VAR_10->lock);
  return -VAR_0;
 }

 VAR_14 = FUNC_2(VAR_10, VAR_8, VAR_9);

 if (VAR_9->which == VAR_5) {
  struct v4l2_mbus_framefmt *VAR_15;

  VAR_11 = FUNC_0(VAR_7, VAR_8, VAR_9->pad);
  *VAR_11 = VAR_9->format;

  if (VAR_9->pad == VAR_3) {
   unsigned int VAR_16 = VAR_4;
   VAR_15 = FUNC_0(VAR_7, VAR_8, VAR_16);
   *VAR_15 = *VAR_11;
  }

  FUNC_4(&VAR_10->lock);
  return 0;
 }

 if (VAR_9->pad == VAR_3) {
  VAR_12->f_width = VAR_11->width;
  VAR_12->f_height = VAR_11->height;
  VAR_12->fmt = VAR_14;

  VAR_12->rect.width = VAR_11->width;
  VAR_12->rect.height = VAR_11->height;
  VAR_12->rect.left = 0;
  VAR_12->rect.top = 0;

  VAR_13->rect = VAR_12->rect;
  VAR_13->f_width = VAR_11->width;
  VAR_13->f_height = VAR_11->height;
 }

 FUNC_4(&VAR_10->lock);
 return 0;
}
