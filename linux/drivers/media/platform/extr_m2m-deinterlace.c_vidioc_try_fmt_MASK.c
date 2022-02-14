
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pixelformat; int bytesperline; int width; int sizeimage; int height; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct deinterlace_fmt {int dummy; } ;





__attribute__((used)) static int FUNC_0(struct v4l2_format *VAR_0, struct deinterlace_fmt *VAR_1)
{
 switch (VAR_0->fmt.pix.pixelformat) {
 case 129:
  VAR_0->fmt.pix.bytesperline = VAR_0->fmt.pix.width * 3 / 2;
  break;
 case 128:
 default:
  VAR_0->fmt.pix.bytesperline = VAR_0->fmt.pix.width * 2;
 }
 VAR_0->fmt.pix.sizeimage = VAR_0->fmt.pix.height * VAR_0->fmt.pix.bytesperline;

 return 0;
}
