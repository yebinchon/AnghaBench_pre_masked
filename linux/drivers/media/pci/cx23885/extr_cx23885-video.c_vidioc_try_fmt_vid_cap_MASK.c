
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; unsigned int height; int width; int bytesperline; int sizeimage; int colorspace; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx23885_fmt {int depth; } ;
struct cx23885_dev {int tvnorm; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 struct cx23885_fmt* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int*,int,unsigned int,int,unsigned int*,int,unsigned int,int ,int ) ;
 struct cx23885_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
 struct v4l2_format *VAR_5)
{
 struct cx23885_dev *VAR_6 = FUNC_3(VAR_3);
 struct cx23885_fmt *VAR_7;
 enum v4l2_field VAR_8;
 unsigned int VAR_9, VAR_10;

 VAR_7 = FUNC_0(VAR_5->fmt.pix.pixelformat);
 if (((void*)0) == VAR_7)
  return -VAR_0;

 VAR_8 = VAR_5->fmt.pix.field;
 VAR_9 = 720;
 VAR_10 = FUNC_1(VAR_6->tvnorm);

 if (VAR_2 == VAR_8) {
  VAR_8 = (VAR_5->fmt.pix.height > VAR_10/2)
   ? 131
   : 132;
 }

 switch (VAR_8) {
 case 128:
 case 132:
  VAR_10 = VAR_10 / 2;
  break;
 case 131:
 case 129:
 case 130:
  break;
 default:
  VAR_8 = 131;
  break;
 }

 VAR_5->fmt.pix.field = VAR_8;
 FUNC_2(&VAR_5->fmt.pix.width, 48, VAR_9, 2,
         &VAR_5->fmt.pix.height, 32, VAR_10, 0, 0);
 VAR_5->fmt.pix.bytesperline =
  (VAR_5->fmt.pix.width * VAR_7->depth) >> 3;
 VAR_5->fmt.pix.sizeimage =
  VAR_5->fmt.pix.height * VAR_5->fmt.pix.bytesperline;
 VAR_5->fmt.pix.colorspace = VAR_1;

 return 0;
}
