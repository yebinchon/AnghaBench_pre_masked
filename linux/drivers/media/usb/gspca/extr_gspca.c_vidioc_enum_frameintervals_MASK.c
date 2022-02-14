
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numerator; int denominator; } ;
struct v4l2_frmivalenum {scalar_t__ pixel_format; size_t index; TYPE_2__ discrete; int type; int height; int width; } ;
struct TYPE_8__ {TYPE_3__* mode_framerates; TYPE_1__* cam_mode; } ;
struct gspca_dev {TYPE_4__ cam; } ;
struct file {int dummy; } ;
typedef size_t __u32 ;
struct TYPE_7__ {scalar_t__ nrates; int * rates; } ;
struct TYPE_5__ {scalar_t__ pixelformat; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gspca_dev* FUNC_0 (struct file*) ;
 int FUNC_1 (struct gspca_dev*,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
          struct v4l2_frmivalenum *VAR_4)
{
 struct gspca_dev *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;
 __u32 VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_4->width, VAR_4->height,
      VAR_4->pixel_format);
 if (VAR_6 < 0)
  return -VAR_0;

 if (VAR_5->cam.mode_framerates == ((void*)0) ||
   VAR_5->cam.mode_framerates[VAR_6].nrates == 0)
  return -VAR_0;

 if (VAR_4->pixel_format !=
   VAR_5->cam.cam_mode[VAR_6].pixelformat)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5->cam.mode_framerates[VAR_6].nrates; VAR_7++) {
  if (VAR_4->index == VAR_7) {
   VAR_4->type = VAR_1;
   VAR_4->discrete.numerator = 1;
   VAR_4->discrete.denominator =
    VAR_5->cam.mode_framerates[VAR_6].rates[VAR_7];
   return 0;
  }
 }

 return -VAR_0;
}
