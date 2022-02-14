
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pixelformat; scalar_t__ field; int width; int height; int bytesperline; int sizeimage; scalar_t__ colorspace; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int subsample; } ;
struct TYPE_8__ {int lock; int mchip_mode; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 TYPE_4__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
        struct v4l2_format *VAR_8)
{
 if (VAR_8->fmt.pix.pixelformat != 128 &&
     VAR_8->fmt.pix.pixelformat != 129)
  return -VAR_0;

 if (VAR_8->fmt.pix.field != VAR_3 &&
     VAR_8->fmt.pix.field != VAR_4)
  return -VAR_0;

 VAR_8->fmt.pix.field = VAR_4;
 FUNC_0(&VAR_5.lock);

 if (VAR_8->fmt.pix.width <= 320) {
  VAR_8->fmt.pix.width = 320;
  VAR_8->fmt.pix.height = 240;
  VAR_5.params.subsample = 1;
 } else {
  VAR_8->fmt.pix.width = 640;
  VAR_8->fmt.pix.height = 480;
  VAR_5.params.subsample = 0;
 }

 switch (VAR_8->fmt.pix.pixelformat) {
 case 128:
  VAR_5.mchip_mode = VAR_2;
  break;
 case 129:
  VAR_5.mchip_mode = VAR_1;
  break;
 }

 FUNC_1(&VAR_5.lock);
 VAR_8->fmt.pix.bytesperline = VAR_8->fmt.pix.width * 2;
 VAR_8->fmt.pix.sizeimage = VAR_8->fmt.pix.height *
          VAR_8->fmt.pix.bytesperline;
 VAR_8->fmt.pix.colorspace = 0;

 return 0;
}
