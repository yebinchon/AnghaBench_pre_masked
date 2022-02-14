
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viu_fmt {int depth; } ;
struct viu_fh {struct viu_dev* dev; } ;
struct TYPE_2__ {int bytesperline; int width; int pixelformat; } ;
struct v4l2_framebuffer {TYPE_1__ fmt; } ;
struct viu_dev {struct v4l2_framebuffer ovbuf; struct viu_fmt* ovfmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct viu_fmt* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5, const struct v4l2_framebuffer *VAR_6)
{
 struct viu_fh *VAR_7 = VAR_5;
 struct viu_dev *VAR_8 = VAR_7->dev;
 const struct v4l2_framebuffer *VAR_9 = VAR_6;
 struct viu_fmt *VAR_10;

 if (!FUNC_0(VAR_0) && !FUNC_0(VAR_1))
  return -VAR_3;


 VAR_10 = FUNC_1(VAR_9->fmt.pixelformat);
 if (VAR_10 == ((void*)0))
  return -VAR_2;


 VAR_8->ovbuf = *VAR_9;
 VAR_8->ovfmt = VAR_10;
 if (VAR_8->ovbuf.fmt.bytesperline == 0) {
  VAR_8->ovbuf.fmt.bytesperline =
   VAR_8->ovbuf.fmt.width * VAR_10->depth / 8;
 }
 return 0;
}
