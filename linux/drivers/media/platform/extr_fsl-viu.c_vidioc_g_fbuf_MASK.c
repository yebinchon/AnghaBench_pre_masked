
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viu_fh {struct viu_dev* dev; } ;
struct v4l2_framebuffer {int capability; } ;
struct viu_dev {struct v4l2_framebuffer ovbuf; } ;
struct file {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2, struct v4l2_framebuffer *VAR_3)
{
 struct viu_fh *VAR_4 = VAR_2;
 struct viu_dev *VAR_5 = VAR_4->dev;
 struct v4l2_framebuffer *VAR_6 = VAR_3;

 *VAR_6 = VAR_5->ovbuf;
 VAR_6->capability = VAR_0;
 return 0;
}
