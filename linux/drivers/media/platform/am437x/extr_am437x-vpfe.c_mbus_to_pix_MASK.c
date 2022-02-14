
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int bus_width; } ;
struct vpfe_subdev_info {TYPE_1__ vpfe_param; } ;
struct TYPE_6__ {unsigned int bpp; } ;
struct TYPE_5__ {unsigned int bpp; } ;
struct vpfe_fmt {TYPE_3__ s; TYPE_2__ l; int fourcc; } ;
struct vpfe_device {struct vpfe_subdev_info* current_subdev; } ;
struct v4l2_pix_format {int bytesperline; unsigned int width; int sizeimage; int height; int pixelformat; } ;
struct v4l2_mbus_framefmt {int code; } ;


 int FUNC_0 (unsigned int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct vpfe_fmt* FUNC_2 (int ) ;
 int FUNC_3 (struct v4l2_pix_format*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct v4l2_pix_format*,struct v4l2_mbus_framefmt const*) ;

__attribute__((used)) static void
FUNC_6(struct vpfe_device *VAR_0,
     const struct v4l2_mbus_framefmt *VAR_1,
     struct v4l2_pix_format *VAR_2, unsigned int *VAR_3)
{
 struct vpfe_subdev_info *VAR_4 = VAR_0->current_subdev;
 unsigned int VAR_5 = VAR_4->vpfe_param.bus_width;
 struct vpfe_fmt *VAR_6;

 VAR_6 = FUNC_2(VAR_1->code);
 if (FUNC_1(VAR_6 == ((void*)0))) {
  FUNC_4("Invalid mbus code set\n");
  *VAR_3 = 1;
  return;
 }

 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 FUNC_5(VAR_2, VAR_1);
 VAR_2->pixelformat = VAR_6->fourcc;
 *VAR_3 = (VAR_5 == 10) ? VAR_6->l.bpp : VAR_6->s.bpp;


 VAR_2->bytesperline = FUNC_0(VAR_2->width * *VAR_3, 32);
 VAR_2->sizeimage = VAR_2->bytesperline * VAR_2->height;
}
