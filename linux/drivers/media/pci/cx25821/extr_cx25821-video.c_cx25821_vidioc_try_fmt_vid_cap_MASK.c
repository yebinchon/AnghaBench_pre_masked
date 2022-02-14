
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; unsigned int width; unsigned int height; int bytesperline; int sizeimage; int colorspace; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx25821_fmt {int depth; } ;
struct cx25821_dev {int tvnorm; } ;
struct cx25821_channel {struct cx25821_dev* dev; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cx25821_fmt* FUNC_0 (int ) ;
 struct cx25821_channel* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
       struct v4l2_format *VAR_8)
{
 struct cx25821_channel *VAR_9 = FUNC_1(VAR_6);
 struct cx25821_dev *VAR_10 = VAR_9->dev;
 const struct cx25821_fmt *VAR_11;
 enum v4l2_field VAR_12 = VAR_8->fmt.pix.field;
 unsigned int VAR_13;
 unsigned VAR_14;

 VAR_11 = FUNC_0(VAR_8->fmt.pix.pixelformat);
 if (((void*)0) == VAR_11)
  return -VAR_0;
 VAR_13 = (VAR_10->tvnorm & VAR_5) ? 576 : 480;

 VAR_14 = VAR_8->fmt.pix.width;
 if (VAR_12 != VAR_2)
  VAR_12 = VAR_4;
 if (VAR_14 < 352) {
  VAR_14 = 176;
  VAR_8->fmt.pix.height = VAR_13 / 4;
 } else if (VAR_14 < 720) {
  VAR_14 = 352;
  VAR_8->fmt.pix.height = VAR_13 / 2;
 } else {
  VAR_14 = 720;
  VAR_8->fmt.pix.height = VAR_13;
  VAR_12 = VAR_3;
 }
 VAR_8->fmt.pix.field = VAR_12;
 VAR_8->fmt.pix.width = VAR_14;
 VAR_8->fmt.pix.bytesperline = (VAR_8->fmt.pix.width * VAR_11->depth) >> 3;
 VAR_8->fmt.pix.sizeimage = VAR_8->fmt.pix.height * VAR_8->fmt.pix.bytesperline;
 VAR_8->fmt.pix.colorspace = VAR_1;

 return 0;
}
