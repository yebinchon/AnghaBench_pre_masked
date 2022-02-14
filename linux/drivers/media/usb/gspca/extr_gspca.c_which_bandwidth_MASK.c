
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int denominator; int numerator; } ;
struct TYPE_11__ {TYPE_3__ timeperframe; } ;
struct TYPE_12__ {TYPE_4__ capture; } ;
struct v4l2_streamparm {TYPE_5__ parm; } ;
struct TYPE_13__ {int sizeimage; int width; int height; } ;
struct TYPE_8__ {int needs_full_bandwidth; } ;
struct gspca_dev {TYPE_7__* dev; TYPE_6__ pixfmt; TYPE_2__* sd_desc; TYPE_1__ cam; } ;
struct TYPE_14__ {scalar_t__ speed; } ;
struct TYPE_9__ {int (* get_streamparm ) (struct gspca_dev*,struct v4l2_streamparm*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_1 (struct gspca_dev*,struct v4l2_streamparm*) ;

__attribute__((used)) static u32 FUNC_2(struct gspca_dev *VAR_2)
{
 u32 VAR_3;


 VAR_3 = VAR_2->pixfmt.sizeimage;


 if (!VAR_2->cam.needs_full_bandwidth &&
     VAR_3 < VAR_2->pixfmt.width *
    VAR_2->pixfmt.height)
  VAR_3 = VAR_3 * 3 / 8;


 if (VAR_2->sd_desc->get_streamparm) {
  struct v4l2_streamparm VAR_4;

  VAR_2->sd_desc->get_streamparm(VAR_2, &VAR_4);
  VAR_3 *= VAR_4.parm.capture.timeperframe.denominator;
  VAR_3 /= VAR_4.parm.capture.timeperframe.numerator;
 } else {



  if (VAR_2->pixfmt.width >= 640
   && VAR_2->dev->speed == VAR_1)
   VAR_3 *= 15;
  else
   VAR_3 *= 30;
 }

 FUNC_0(VAR_2, VAR_0, "min bandwidth: %d\n", VAR_3);
 return VAR_3;
}
