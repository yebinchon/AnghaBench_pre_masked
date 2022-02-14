
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int field; unsigned int height; int width; int bytesperline; int sizeimage; int colorspace; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct tw68_format {int depth; } ;
struct tw68_dev {TYPE_1__* tvnorm; } ;
struct file {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 struct tw68_format* FUNC_0 (int ) ;
 struct tw68_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
      struct v4l2_format *VAR_5)
{
 struct tw68_dev *VAR_6 = FUNC_1(VAR_3);
 const struct tw68_format *VAR_7;
 enum v4l2_field VAR_8;
 unsigned int VAR_9;

 VAR_7 = FUNC_0(VAR_5->fmt.pix.pixelformat);
 if (((void*)0) == VAR_7)
  return -VAR_0;

 VAR_8 = VAR_5->fmt.pix.field;
 VAR_9 = (VAR_6->tvnorm->id & VAR_2) ? 480 : 576;

 switch (VAR_8) {
 case 128:
 case 132:
  break;
 case 131:
 case 130:
 case 129:
  VAR_9 = VAR_9 * 2;
  break;
 default:
  VAR_8 = (VAR_5->fmt.pix.height > VAR_9 / 2)
   ? 131
   : 132;
  break;
 }

 VAR_5->fmt.pix.field = VAR_8;
 if (VAR_5->fmt.pix.width < 48)
  VAR_5->fmt.pix.width = 48;
 if (VAR_5->fmt.pix.height < 32)
  VAR_5->fmt.pix.height = 32;
 if (VAR_5->fmt.pix.width > 720)
  VAR_5->fmt.pix.width = 720;
 if (VAR_5->fmt.pix.height > VAR_9)
  VAR_5->fmt.pix.height = VAR_9;
 VAR_5->fmt.pix.width &= ~0x03;
 VAR_5->fmt.pix.bytesperline =
  (VAR_5->fmt.pix.width * (VAR_7->depth)) >> 3;
 VAR_5->fmt.pix.sizeimage =
  VAR_5->fmt.pix.height * VAR_5->fmt.pix.bytesperline;
 VAR_5->fmt.pix.colorspace = VAR_1;
 return 0;
}
