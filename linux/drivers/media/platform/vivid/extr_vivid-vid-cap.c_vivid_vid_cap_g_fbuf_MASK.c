
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ priv; int colorspace; int field; } ;
struct v4l2_framebuffer {int capability; TYPE_1__ fmt; int flags; } ;
struct vivid_dev {struct v4l2_framebuffer fb_cap; scalar_t__ multiplanar; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vivid_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_6, void *VAR_7,
    struct v4l2_framebuffer *VAR_8)
{
 struct vivid_dev *VAR_9 = FUNC_0(VAR_6);

 if (VAR_9->multiplanar)
  return -VAR_0;

 *VAR_8 = VAR_9->fb_cap;
 VAR_8->capability = VAR_2 |
   VAR_3;
 VAR_8->flags = VAR_4;
 VAR_8->fmt.field = VAR_5;
 VAR_8->fmt.colorspace = VAR_1;
 VAR_8->fmt.priv = 0;
 return 0;
}
