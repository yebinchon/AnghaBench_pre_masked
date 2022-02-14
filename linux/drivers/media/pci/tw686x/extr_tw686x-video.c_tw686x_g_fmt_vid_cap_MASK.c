
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int width; int height; int bytesperline; int sizeimage; int colorspace; int pixelformat; int field; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; } ;
struct tw686x_video_channel {int width; int height; TYPE_2__* format; struct tw686x_dev* dev; } ;
struct tw686x_dev {TYPE_1__* dma_ops; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int depth; int fourcc; } ;
struct TYPE_5__ {int field; } ;


 int VAR_0 ;
 struct tw686x_video_channel* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct tw686x_video_channel *VAR_4 = FUNC_0(VAR_1);
 struct tw686x_dev *VAR_5 = VAR_4->dev;

 VAR_3->fmt.pix.width = VAR_4->width;
 VAR_3->fmt.pix.height = VAR_4->height;
 VAR_3->fmt.pix.field = VAR_5->dma_ops->field;
 VAR_3->fmt.pix.pixelformat = VAR_4->format->fourcc;
 VAR_3->fmt.pix.colorspace = VAR_0;
 VAR_3->fmt.pix.bytesperline = (VAR_3->fmt.pix.width * VAR_4->format->depth) / 8;
 VAR_3->fmt.pix.sizeimage = VAR_3->fmt.pix.height * VAR_3->fmt.pix.bytesperline;
 return 0;
}
