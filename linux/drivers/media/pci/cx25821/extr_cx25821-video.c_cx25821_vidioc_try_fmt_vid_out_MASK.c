
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int bytesperline; int sizeimage; int colorspace; int field; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx25821_fmt {int depth; } ;
struct cx25821_dev {int tvnorm; } ;
struct cx25821_channel {struct cx25821_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cx25821_fmt* FUNC_0 (int ) ;
 struct cx25821_channel* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
       struct v4l2_format *VAR_6)
{
 struct cx25821_channel *VAR_7 = FUNC_1(VAR_4);
 struct cx25821_dev *VAR_8 = VAR_7->dev;
 const struct cx25821_fmt *VAR_9;

 VAR_9 = FUNC_0(VAR_6->fmt.pix.pixelformat);
 if (((void*)0) == VAR_9)
  return -VAR_0;
 VAR_6->fmt.pix.width = 720;
 VAR_6->fmt.pix.height = (VAR_8->tvnorm & VAR_3) ? 576 : 480;
 VAR_6->fmt.pix.field = VAR_2;
 VAR_6->fmt.pix.bytesperline = (VAR_6->fmt.pix.width * VAR_9->depth) >> 3;
 VAR_6->fmt.pix.sizeimage = VAR_6->fmt.pix.height * VAR_6->fmt.pix.bytesperline;
 VAR_6->fmt.pix.colorspace = VAR_1;
 return 0;
}
