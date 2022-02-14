
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int colorspace; int sizeimage; int pixelformat; int field; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct tw5864_input {int std; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct tw5864_input* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
         struct v4l2_format *VAR_7)
{
 struct tw5864_input *VAR_8 = FUNC_1(VAR_5);

 VAR_7->fmt.pix.width = 704;
 switch (VAR_8->std) {
 default:
  FUNC_0(1);
  return -VAR_0;
 case 130:
  VAR_7->fmt.pix.height = 480;
  break;
 case 129:
 case 128:
  VAR_7->fmt.pix.height = 576;
  break;
 }
 VAR_7->fmt.pix.field = VAR_3;
 VAR_7->fmt.pix.pixelformat = VAR_4;
 VAR_7->fmt.pix.sizeimage = VAR_1;
 VAR_7->fmt.pix.colorspace = VAR_2;
 return 0;
}
