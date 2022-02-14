
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytesperline; int width; int pixelformat; } ;
struct v4l2_framebuffer {TYPE_1__ fmt; } ;
struct saa7134_format {int depth; } ;
struct saa7134_dev {struct v4l2_framebuffer ovbuf; struct saa7134_format* ovfmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct saa7134_format* FUNC_1 (int ) ;
 struct saa7134_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
     const struct v4l2_framebuffer *VAR_6)
{
 struct saa7134_dev *VAR_7 = FUNC_2(VAR_4);
 struct saa7134_format *VAR_8;

 if (!FUNC_0(VAR_0) &&
    !FUNC_0(VAR_1))
  return -VAR_3;


 VAR_8 = FUNC_1(VAR_6->fmt.pixelformat);
 if (((void*)0) == VAR_8)
  return -VAR_2;


 VAR_7->ovbuf = *VAR_6;
 VAR_7->ovfmt = VAR_8;
 if (0 == VAR_7->ovbuf.fmt.bytesperline)
  VAR_7->ovbuf.fmt.bytesperline =
   VAR_7->ovbuf.fmt.width*VAR_8->depth/8;
 return 0;
}
