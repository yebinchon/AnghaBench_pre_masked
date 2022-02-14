
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sizeimage; int field; int height; int width; int colorspace; scalar_t__ bytesperline; int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct TYPE_6__ {int height; int width; } ;
struct cx231xx {TYPE_3__ ts1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
    struct v4l2_format *VAR_7)
{
 struct cx231xx_fh *VAR_8 = VAR_5->private_data;
 struct cx231xx *VAR_9 = VAR_8->dev;

 FUNC_0(3, "enter vidioc_g_fmt_vid_cap()\n");
 VAR_7->fmt.pix.pixelformat = VAR_2;
 VAR_7->fmt.pix.bytesperline = 0;
 VAR_7->fmt.pix.sizeimage = VAR_3 * VAR_4;
 VAR_7->fmt.pix.colorspace = VAR_0;
 VAR_7->fmt.pix.width = VAR_9->ts1.width;
 VAR_7->fmt.pix.height = VAR_9->ts1.height;
 VAR_7->fmt.pix.field = VAR_1;
 FUNC_0(1, "VIDIOC_G_FMT: w: %d, h: %d\n",
  VAR_9->ts1.width, VAR_9->ts1.height);
 FUNC_0(3, "exit vidioc_g_fmt_vid_cap()\n");
 return 0;
}
