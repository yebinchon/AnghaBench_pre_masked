
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; unsigned int height; int bytesperline; int sizeimage; int field; int colorspace; int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct tw686x_video_channel {int video_standard; struct tw686x_dev* dev; } ;
struct tw686x_format {int depth; int fourcc; } ;
struct tw686x_dev {TYPE_3__* dma_ops; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int field; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tw686x_format* FUNC_1 (int ) ;
 struct tw686x_format* VAR_2 ;
 struct tw686x_video_channel* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
      struct v4l2_format *VAR_5)
{
 struct tw686x_video_channel *VAR_6 = FUNC_2(VAR_3);
 struct tw686x_dev *VAR_7 = VAR_6->dev;
 unsigned int VAR_8 = FUNC_0(VAR_6->video_standard);
 const struct tw686x_format *VAR_9;

 VAR_9 = FUNC_1(VAR_5->fmt.pix.pixelformat);
 if (!VAR_9) {
  VAR_9 = &VAR_2[0];
  VAR_5->fmt.pix.pixelformat = VAR_9->fourcc;
 }

 if (VAR_5->fmt.pix.width <= VAR_0 / 2)
  VAR_5->fmt.pix.width = VAR_0 / 2;
 else
  VAR_5->fmt.pix.width = VAR_0;

 if (VAR_5->fmt.pix.height <= VAR_8 / 2)
  VAR_5->fmt.pix.height = VAR_8 / 2;
 else
  VAR_5->fmt.pix.height = VAR_8;

 VAR_5->fmt.pix.bytesperline = (VAR_5->fmt.pix.width * VAR_9->depth) / 8;
 VAR_5->fmt.pix.sizeimage = VAR_5->fmt.pix.height * VAR_5->fmt.pix.bytesperline;
 VAR_5->fmt.pix.colorspace = VAR_1;
 VAR_5->fmt.pix.field = VAR_7->dma_ops->field;

 return 0;
}
