
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int bytesperline; int sizeimage; int field; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct rga_fmt {scalar_t__ hw_format; int depth; int fourcc; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct rga_fmt* VAR_6 ;
 struct rga_fmt* FUNC_0 (struct v4l2_format*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_7, void *VAR_8, struct v4l2_format *VAR_9)
{
 struct rga_fmt *VAR_10;

 VAR_10 = FUNC_0(VAR_9);
 if (!VAR_10) {
  VAR_10 = &VAR_6[0];
  VAR_9->fmt.pix.pixelformat = VAR_10->fourcc;
 }

 VAR_9->fmt.pix.field = VAR_5;

 if (VAR_9->fmt.pix.width > VAR_1)
  VAR_9->fmt.pix.width = VAR_1;
 if (VAR_9->fmt.pix.height > VAR_0)
  VAR_9->fmt.pix.height = VAR_0;

 if (VAR_9->fmt.pix.width < VAR_3)
  VAR_9->fmt.pix.width = VAR_3;
 if (VAR_9->fmt.pix.height < VAR_2)
  VAR_9->fmt.pix.height = VAR_2;

 if (VAR_10->hw_format >= VAR_4)
  VAR_9->fmt.pix.bytesperline = VAR_9->fmt.pix.width;
 else
  VAR_9->fmt.pix.bytesperline = (VAR_9->fmt.pix.width * VAR_10->depth) >> 3;

 VAR_9->fmt.pix.sizeimage =
  VAR_9->fmt.pix.height * (VAR_9->fmt.pix.width * VAR_10->depth) >> 3;

 return 0;
}
