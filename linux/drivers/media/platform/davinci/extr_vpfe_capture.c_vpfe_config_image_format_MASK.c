
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpfe_subdev_info {int grp_id; } ;
struct TYPE_12__ {int active_pixels; int active_lines; int frame_format; } ;
struct TYPE_11__ {int width; int height; scalar_t__ left; scalar_t__ top; } ;
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; int pixelformat; int field; } ;
struct TYPE_9__ {struct v4l2_pix_format pix; } ;
struct TYPE_10__ {TYPE_1__ fmt; } ;
struct vpfe_device {int std_index; int v4l2_dev; TYPE_4__ std_info; TYPE_3__ crop; TYPE_2__ fmt; struct vpfe_subdev_info* current_subdev; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; } ;
struct TYPE_13__ {int (* get_line_length ) () ;} ;
struct TYPE_15__ {TYPE_5__ hw_ops; } ;
struct TYPE_14__ {int std_id; int width; int height; int frame_format; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_7__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,int ,int *,struct v4l2_subdev_format*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct v4l2_mbus_framefmt*,struct v4l2_pix_format*,int ) ;
 int FUNC_5 (struct v4l2_pix_format*,struct v4l2_mbus_framefmt*) ;
 int FUNC_6 (struct vpfe_device*) ;
 TYPE_6__* VAR_12 ;

__attribute__((used)) static int FUNC_7(struct vpfe_device *VAR_13,
        v4l2_std_id VAR_14)
{
 struct vpfe_subdev_info *VAR_15 = VAR_13->current_subdev;
 struct v4l2_subdev_format VAR_16 = {
  .which = VAR_8,
 };
 struct v4l2_mbus_framefmt *VAR_17 = &VAR_16.format;
 struct v4l2_pix_format *VAR_18 = &VAR_13->fmt.fmt.pix;
 int VAR_19, VAR_20;

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_12); VAR_19++) {
  if (VAR_12[VAR_19].std_id & VAR_14) {
   VAR_13->std_info.active_pixels =
     VAR_12[VAR_19].width;
   VAR_13->std_info.active_lines =
     VAR_12[VAR_19].height;
   VAR_13->std_info.frame_format =
     VAR_12[VAR_19].frame_format;
   VAR_13->std_index = VAR_19;
   break;
  }
 }

 if (VAR_19 == FUNC_0(VAR_12)) {
  FUNC_3(&VAR_13->v4l2_dev, "standard not supported\n");
  return -VAR_0;
 }

 VAR_13->crop.top = 0;
 VAR_13->crop.left = 0;
 VAR_13->crop.width = VAR_13->std_info.active_pixels;
 VAR_13->crop.height = VAR_13->std_info.active_lines;
 VAR_18->width = VAR_13->crop.width;
 VAR_18->height = VAR_13->crop.height;


 if (VAR_13->std_info.frame_format) {
  VAR_18->field = VAR_4;

  VAR_18->pixelformat = VAR_7;
  FUNC_4(VAR_17, VAR_18,
    VAR_3);
 } else {
  VAR_18->field = VAR_5;

  VAR_18->pixelformat = VAR_6;
  FUNC_4(VAR_17, VAR_18,
    VAR_2);
 }


 VAR_20 = FUNC_2(&VAR_13->v4l2_dev,
   VAR_15->grp_id, VAR_11, VAR_10, ((void*)0), &VAR_16);

 if (VAR_20 && VAR_20 != -VAR_1) {
  FUNC_3(&VAR_13->v4l2_dev,
   "error in getting get_fmt from sub device\n");
  return VAR_20;
 }
 FUNC_5(VAR_18, VAR_17);
 VAR_18->bytesperline = VAR_18->width * 2;
 VAR_18->sizeimage = VAR_18->bytesperline * VAR_18->height;


 VAR_20 = FUNC_6(VAR_13);
 if (VAR_20)
  return VAR_20;


 VAR_18->bytesperline = VAR_9->hw_ops.get_line_length();
 VAR_18->sizeimage = VAR_18->bytesperline * VAR_18->height;

 return 0;
}
