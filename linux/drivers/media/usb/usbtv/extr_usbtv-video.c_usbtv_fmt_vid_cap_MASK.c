
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int bytesperline; int sizeimage; int colorspace; int field; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct usbtv {int width; int height; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usbtv* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
     struct v4l2_format *VAR_5)
{
 struct usbtv *VAR_6 = FUNC_0(VAR_3);

 VAR_5->fmt.pix.width = VAR_6->width;
 VAR_5->fmt.pix.height = VAR_6->height;
 VAR_5->fmt.pix.pixelformat = VAR_2;
 VAR_5->fmt.pix.field = VAR_1;
 VAR_5->fmt.pix.bytesperline = VAR_6->width * 2;
 VAR_5->fmt.pix.sizeimage = (VAR_5->fmt.pix.bytesperline * VAR_5->fmt.pix.height);
 VAR_5->fmt.pix.colorspace = VAR_0;

 return 0;
}
