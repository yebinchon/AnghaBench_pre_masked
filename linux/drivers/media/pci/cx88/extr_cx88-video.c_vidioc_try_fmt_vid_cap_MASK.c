
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
struct cx88_core {int tvnorm; } ;
struct cx8800_fmt {int depth; } ;
struct cx8800_dev {struct cx88_core* core; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ FUNC_0 (int) ;




 struct cx8800_fmt* FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int*,int,unsigned int,int,unsigned int*,int,unsigned int,int ,int ) ;
 struct cx8800_dev* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, void *VAR_3,
      struct v4l2_format *VAR_4)
{
 struct cx8800_dev *VAR_5 = FUNC_5(VAR_2);
 struct cx88_core *VAR_6 = VAR_5->core;
 const struct cx8800_fmt *VAR_7;
 enum v4l2_field VAR_8;
 unsigned int VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_4->fmt.pix.pixelformat);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_6->tvnorm);
 VAR_10 = FUNC_2(VAR_6->tvnorm);

 VAR_8 = VAR_4->fmt.pix.field;

 switch (VAR_8) {
 case 128:
 case 132:
 case 131:
 case 130:
 case 129:
  break;
 default:
  VAR_8 = (VAR_4->fmt.pix.height > VAR_10 / 2)
   ? 131
   : 132;
  break;
 }
 if (FUNC_0(VAR_8))
  VAR_10 /= 2;

 FUNC_4(&VAR_4->fmt.pix.width, 48, VAR_9, 2,
         &VAR_4->fmt.pix.height, 32, VAR_10, 0, 0);
 VAR_4->fmt.pix.field = VAR_8;
 VAR_4->fmt.pix.bytesperline =
  (VAR_4->fmt.pix.width * VAR_7->depth) >> 3;
 VAR_4->fmt.pix.sizeimage =
  VAR_4->fmt.pix.height * VAR_4->fmt.pix.bytesperline;
 VAR_4->fmt.pix.colorspace = VAR_1;

 return 0;
}
