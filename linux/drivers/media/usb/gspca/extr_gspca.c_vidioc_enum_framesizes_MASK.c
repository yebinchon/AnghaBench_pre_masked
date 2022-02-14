
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; } ;
struct v4l2_frmsizeenum {scalar_t__ pixel_format; scalar_t__ index; TYPE_2__ discrete; int type; } ;
struct TYPE_8__ {int nmodes; TYPE_3__* cam_mode; } ;
struct gspca_dev {TYPE_4__ cam; TYPE_1__* sd_desc; } ;
struct file {int dummy; } ;
typedef scalar_t__ __u32 ;
struct TYPE_7__ {scalar_t__ pixelformat; int height; int width; } ;
struct TYPE_5__ {int (* enum_framesizes ) (struct gspca_dev*,struct v4l2_frmsizeenum*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,struct v4l2_frmsizeenum*) ;
 struct gspca_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
      struct v4l2_frmsizeenum *VAR_4)
{
 struct gspca_dev *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;
 __u32 VAR_7 = 0;

 if (VAR_5->sd_desc->enum_framesizes)
  return VAR_5->sd_desc->enum_framesizes(VAR_5, VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_5->cam.nmodes; VAR_6++) {
  if (VAR_4->pixel_format !=
    VAR_5->cam.cam_mode[VAR_6].pixelformat)
   continue;

  if (VAR_4->index == VAR_7) {
   VAR_4->type = VAR_1;
   VAR_4->discrete.width =
    VAR_5->cam.cam_mode[VAR_6].width;
   VAR_4->discrete.height =
    VAR_5->cam.cam_mode[VAR_6].height;
   return 0;
  }
  VAR_7++;
 }

 return -VAR_0;
}
