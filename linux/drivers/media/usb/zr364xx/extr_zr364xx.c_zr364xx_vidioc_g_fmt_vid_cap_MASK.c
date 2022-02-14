
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zr364xx_camera {int width; int height; } ;
struct TYPE_4__ {int width; int height; int bytesperline; int sizeimage; int colorspace; int field; int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 struct zr364xx_camera* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
        struct v4l2_format *VAR_6)
{
 struct zr364xx_camera *VAR_7;

 if (!VAR_4)
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_4);

 VAR_6->fmt.pix.pixelformat = VAR_3[0].fourcc;
 VAR_6->fmt.pix.field = VAR_2;
 VAR_6->fmt.pix.width = VAR_7->width;
 VAR_6->fmt.pix.height = VAR_7->height;
 VAR_6->fmt.pix.bytesperline = VAR_6->fmt.pix.width * 2;
 VAR_6->fmt.pix.sizeimage = VAR_6->fmt.pix.height * VAR_6->fmt.pix.bytesperline;
 VAR_6->fmt.pix.colorspace = VAR_1;
 return 0;
}
