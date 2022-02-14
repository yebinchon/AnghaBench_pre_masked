
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pixelformat; int field; int height; int width; int bytesperline; int sizeimage; int colorspace; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct sta2x11_vip {int std; int v4l2_dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct sta2x11_vip* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
      struct v4l2_format *VAR_6)
{
 struct sta2x11_vip *VAR_7 = FUNC_1(VAR_4);
 int VAR_8;

 if (VAR_2 != VAR_6->fmt.pix.pixelformat) {
  FUNC_0(&VAR_7->v4l2_dev, "Invalid format, only UYVY supported\n");
  return -VAR_0;
 }

 if (VAR_3 & VAR_7->std)
  VAR_8 = 240;
 else
  VAR_8 = 288;

 switch (VAR_6->fmt.pix.field) {
 default:
 case 131:
  if (VAR_8 < VAR_6->fmt.pix.height)
   VAR_6->fmt.pix.field = 129;
  else
   VAR_6->fmt.pix.field = 130;
  break;
 case 128:
 case 130:
  if (VAR_8 < VAR_6->fmt.pix.height)
   VAR_6->fmt.pix.height = VAR_8;
  break;
 case 129:
  break;
 }


 VAR_6->fmt.pix.pixelformat = VAR_2;
 VAR_6->fmt.pix.height &= ~1;
 if (2 * VAR_8 < VAR_6->fmt.pix.height)
  VAR_6->fmt.pix.height = 2 * VAR_8;
 if (200 > VAR_6->fmt.pix.height)
  VAR_6->fmt.pix.height = 200;
 VAR_6->fmt.pix.width = 720;
 VAR_6->fmt.pix.bytesperline = VAR_6->fmt.pix.width * 2;
 VAR_6->fmt.pix.sizeimage = VAR_6->fmt.pix.width * 2 * VAR_6->fmt.pix.height;
 VAR_6->fmt.pix.colorspace = VAR_1;
 return 0;
}
