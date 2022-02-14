
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; } ;
struct TYPE_5__ {TYPE_1__ green; } ;
struct vivid_dev {int fbuf_out_flags; int display_height; int display_byte_stride; TYPE_2__ fb_defined; int display_width; scalar_t__ video_pbase; } ;
struct TYPE_6__ {int height; int bytesperline; int sizeimage; scalar_t__ priv; int colorspace; int field; int pixelformat; int width; } ;
struct v4l2_framebuffer {int capability; int flags; TYPE_3__ fmt; void* base; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct vivid_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_13, void *VAR_14,
    struct v4l2_framebuffer *VAR_15)
{
 struct vivid_dev *VAR_16 = FUNC_0(VAR_13);

 VAR_15->capability = VAR_3 |
   VAR_1 |
   VAR_5 |
   VAR_2 |
   VAR_8 |
   VAR_4 |
   VAR_6 |
   VAR_7;
 VAR_15->flags = VAR_9 | VAR_16->fbuf_out_flags;
 VAR_15->base = (void *)VAR_16->video_pbase;
 VAR_15->fmt.width = VAR_16->display_width;
 VAR_15->fmt.height = VAR_16->display_height;
 if (VAR_16->fb_defined.green.length == 5)
  VAR_15->fmt.pixelformat = VAR_11;
 else
  VAR_15->fmt.pixelformat = VAR_12;
 VAR_15->fmt.bytesperline = VAR_16->display_byte_stride;
 VAR_15->fmt.sizeimage = VAR_15->fmt.height * VAR_15->fmt.bytesperline;
 VAR_15->fmt.field = VAR_10;
 VAR_15->fmt.colorspace = VAR_0;
 VAR_15->fmt.priv = 0;
 return 0;
}
