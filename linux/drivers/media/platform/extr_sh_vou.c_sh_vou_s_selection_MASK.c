
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ code; scalar_t__ width; unsigned int height; int colorspace; int field; } ;
struct TYPE_3__ {scalar_t__ width; unsigned int height; } ;
struct v4l2_subdev_selection {scalar_t__ target; TYPE_2__ format; TYPE_1__ r; int which; } ;
struct v4l2_subdev_format {scalar_t__ target; TYPE_2__ format; TYPE_1__ r; int which; } ;
struct v4l2_rect {scalar_t__ width; unsigned int height; scalar_t__ left; unsigned int top; } ;
struct v4l2_selection {scalar_t__ type; scalar_t__ target; struct v4l2_rect r; } ;
struct v4l2_pix_format {int height; int width; } ;
struct sh_vou_geometry {int scale_idx_v; int scale_idx_h; int in_height; int in_width; struct v4l2_rect output; } ;
struct sh_vou_device {int std; int pix_idx; struct v4l2_rect rect; int v4l2_dev; int queue; struct v4l2_pix_format pix; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct sh_vou_device*,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ,int *,struct v4l2_subdev_selection*) ;
 int FUNC_2 (scalar_t__*,int ,scalar_t__,int,unsigned int*,int ,unsigned int,int,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 struct sh_vou_device* FUNC_4 (struct file*) ;
 int FUNC_5 (struct sh_vou_geometry*,int) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_16, void *VAR_17,
         struct v4l2_selection *VAR_18)
{
 struct v4l2_rect *VAR_19 = &VAR_18->r;
 struct sh_vou_device *VAR_20 = FUNC_4(VAR_16);
 struct v4l2_subdev_selection VAR_21 = {
  .which = VAR_9,
  .target = VAR_7,
 };
 struct v4l2_pix_format *VAR_22 = &VAR_20->pix;
 struct sh_vou_geometry VAR_23;
 struct v4l2_subdev_format VAR_24 = {
  .which = VAR_9,

  .format.code = VAR_3,
  .format.field = VAR_6,
  .format.colorspace = VAR_5,
 };
 unsigned int VAR_25;
 int VAR_26;

 if (VAR_18->type != VAR_4 ||
     VAR_18->target != VAR_7)
  return -VAR_1;

 if (FUNC_3(&VAR_20->queue))
  return -VAR_0;

 if (VAR_20->std & VAR_8)
  VAR_25 = 480;
 else
  VAR_25 = 576;

 FUNC_2(&VAR_19->width,
         VAR_12, VAR_10, 1,
         &VAR_19->height,
         VAR_11, VAR_25, 1, 0);

 if (VAR_19->width + VAR_19->left > VAR_10)
  VAR_19->left = VAR_10 - VAR_19->width;

 if (VAR_19->height + VAR_19->top > VAR_25)
  VAR_19->top = VAR_25 - VAR_19->height;

 VAR_23.output = *VAR_19;
 VAR_23.in_width = VAR_22->width;
 VAR_23.in_height = VAR_22->height;


 VAR_21.r.width = VAR_23.output.width;
 VAR_21.r.height = VAR_23.output.height;




 FUNC_1(&VAR_20->v4l2_dev, 0, VAR_13,
       VAR_15, ((void*)0), &VAR_21);
 VAR_24.format.width = VAR_23.output.width;
 VAR_24.format.height = VAR_23.output.height;
 VAR_26 = FUNC_1(&VAR_20->v4l2_dev, 0, VAR_13,
      VAR_14, ((void*)0), &VAR_24);

 if (VAR_26 < 0)
  return VAR_26;


 if ((unsigned)VAR_24.format.width > VAR_10 ||
     (unsigned)VAR_24.format.height > VAR_25 ||
     VAR_24.format.code != VAR_3)
  return -VAR_2;

 VAR_23.output.width = VAR_24.format.width;
 VAR_23.output.height = VAR_24.format.height;





 FUNC_5(&VAR_23, VAR_20->std);


 VAR_20->rect = VAR_23.output;
 VAR_22->width = VAR_23.in_width;
 VAR_22->height = VAR_23.in_height;

 FUNC_0(VAR_20, VAR_20->pix_idx,
      VAR_23.scale_idx_h, VAR_23.scale_idx_v);

 return 0;
}
