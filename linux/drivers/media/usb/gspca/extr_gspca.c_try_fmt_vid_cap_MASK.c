
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; int pixelformat; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct TYPE_5__ {TYPE_2__* cam_mode; } ;
struct gspca_dev {TYPE_4__* sd_desc; TYPE_1__ cam; } ;
struct TYPE_8__ {int (* try_fmt ) (struct gspca_dev*,struct v4l2_format*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int ) ;
 int FUNC_2 (struct gspca_dev*,struct v4l2_format*) ;
 int FUNC_3 (struct gspca_dev*,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_1,
   struct v4l2_format *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = VAR_2->fmt.pix.width;
 VAR_4 = VAR_2->fmt.pix.height;

 FUNC_0(VAR_1, VAR_0, "try fmt cap",
      VAR_2->fmt.pix.pixelformat, VAR_3, VAR_4);


 VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_4, VAR_2->fmt.pix.pixelformat);


 if (VAR_1->cam.cam_mode[VAR_5].pixelformat
      != VAR_2->fmt.pix.pixelformat) {


  VAR_6 = FUNC_1(VAR_1, VAR_5,
     VAR_2->fmt.pix.pixelformat);
  if (VAR_6 >= 0)
   VAR_5 = VAR_6;
 }
 VAR_2->fmt.pix = VAR_1->cam.cam_mode[VAR_5];
 if (VAR_1->sd_desc->try_fmt) {

  VAR_2->fmt.pix.width = VAR_3;
  VAR_2->fmt.pix.height = VAR_4;
  VAR_1->sd_desc->try_fmt(VAR_1, VAR_2);
 }
 return VAR_5;
}
