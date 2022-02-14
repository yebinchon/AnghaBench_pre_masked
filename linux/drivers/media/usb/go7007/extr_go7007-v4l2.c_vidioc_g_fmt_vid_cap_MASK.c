
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int colorspace; int sizeimage; scalar_t__ bytesperline; int field; int pixelformat; int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; int type; } ;
struct go7007 {int format; int height; int width; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct go7007* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
     struct v4l2_format *VAR_6)
{
 struct go7007 *VAR_7 = FUNC_0(VAR_4);

 VAR_6->type = VAR_1;
 VAR_6->fmt.pix.width = VAR_7->width;
 VAR_6->fmt.pix.height = VAR_7->height;
 VAR_6->fmt.pix.pixelformat = VAR_7->format;
 VAR_6->fmt.pix.field = VAR_3;
 VAR_6->fmt.pix.bytesperline = 0;
 VAR_6->fmt.pix.sizeimage = VAR_0;
 VAR_6->fmt.pix.colorspace = VAR_2;

 return 0;
}
