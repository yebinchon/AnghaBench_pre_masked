
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; int width; int height; int bytesperline; int sizeimage; int colorspace; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct tm6000_fmt {int depth; } ;
struct tm6000_fh {struct tm6000_core* dev; } ;
struct tm6000_core {int width; int height; } ;
struct file {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tm6000_core*,int,char*,int ) ;
 struct tm6000_fmt* FUNC_1 (int ) ;
 int FUNC_2 (struct tm6000_core*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
   struct v4l2_format *VAR_5)
{
 struct tm6000_core *VAR_6 = ((struct tm6000_fh *)VAR_4)->dev;
 struct tm6000_fmt *VAR_7;
 enum v4l2_field VAR_8;

 VAR_7 = FUNC_1(VAR_5->fmt.pix.pixelformat);
 if (((void*)0) == VAR_7) {
  FUNC_0(VAR_6, 2, "Fourcc format (0x%08x) invalid.\n",
   VAR_5->fmt.pix.pixelformat);
  return -VAR_0;
 }

 VAR_8 = VAR_5->fmt.pix.field;

 VAR_8 = VAR_2;

 FUNC_2(VAR_6);

 VAR_5->fmt.pix.width = VAR_6->width;
 VAR_5->fmt.pix.height = VAR_6->height;

 VAR_5->fmt.pix.width &= ~0x01;

 VAR_5->fmt.pix.field = VAR_8;

 VAR_5->fmt.pix.bytesperline =
  (VAR_5->fmt.pix.width * VAR_7->depth) >> 3;
 VAR_5->fmt.pix.sizeimage =
  VAR_5->fmt.pix.height * VAR_5->fmt.pix.bytesperline;
 VAR_5->fmt.pix.colorspace = VAR_1;

 return 0;
}
