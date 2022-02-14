
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int field; unsigned int height; int width; int bytesperline; int sizeimage; int colorspace; int pixelformat; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; } ;
struct saa7134_format {int depth; scalar_t__ planar; } ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_5__ {int width; int height; } ;
struct saa7134_dev {TYPE_2__ crop_bounds; TYPE_1__ crop_current; } ;
struct file {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 struct saa7134_format* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int,int ) ;
 struct saa7134_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
      struct v4l2_format *VAR_6)
{
 struct saa7134_dev *VAR_7 = FUNC_2(VAR_4);
 struct saa7134_format *VAR_8;
 enum v4l2_field VAR_9;
 unsigned int VAR_10, VAR_11;

 VAR_8 = FUNC_0(VAR_6->fmt.pix.pixelformat);
 if (((void*)0) == VAR_8)
  return -VAR_0;

 VAR_9 = VAR_6->fmt.pix.field;
 VAR_10 = FUNC_1(VAR_7->crop_current.width*4, VAR_7->crop_bounds.width);
 VAR_11 = FUNC_1(VAR_7->crop_current.height*4, VAR_7->crop_bounds.height);

 if (VAR_2 == VAR_9) {
  VAR_9 = (VAR_6->fmt.pix.height > VAR_11/2)
   ? VAR_3
   : 129;
 }
 switch (VAR_9) {
 case 128:
 case 129:
  VAR_11 = VAR_11 / 2;
  break;
 default:
  VAR_9 = VAR_3;
  break;
 }

 VAR_6->fmt.pix.field = VAR_9;
 if (VAR_6->fmt.pix.width < 48)
  VAR_6->fmt.pix.width = 48;
 if (VAR_6->fmt.pix.height < 32)
  VAR_6->fmt.pix.height = 32;
 if (VAR_6->fmt.pix.width > VAR_10)
  VAR_6->fmt.pix.width = VAR_10;
 if (VAR_6->fmt.pix.height > VAR_11)
  VAR_6->fmt.pix.height = VAR_11;
 VAR_6->fmt.pix.width &= ~0x03;
 if (VAR_8->planar)
  VAR_6->fmt.pix.bytesperline = VAR_6->fmt.pix.width;
 else
  VAR_6->fmt.pix.bytesperline =
   (VAR_6->fmt.pix.width * VAR_8->depth) / 8;
 VAR_6->fmt.pix.sizeimage =
  (VAR_6->fmt.pix.height * VAR_6->fmt.pix.width * VAR_8->depth) / 8;
 VAR_6->fmt.pix.colorspace = VAR_1;

 return 0;
}
