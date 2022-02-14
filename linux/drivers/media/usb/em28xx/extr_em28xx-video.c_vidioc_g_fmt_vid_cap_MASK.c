
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; int bytesperline; int sizeimage; int field; int colorspace; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct em28xx_v4l2 {int width; int height; scalar_t__ interlaced_fieldmode; scalar_t__ progressive; TYPE_1__* format; } ;
struct em28xx {struct em28xx_v4l2* v4l2; } ;
struct TYPE_4__ {int depth; int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct em28xx* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
    struct v4l2_format *VAR_6)
{
 struct em28xx *VAR_7 = FUNC_0(VAR_4);
 struct em28xx_v4l2 *VAR_8 = VAR_7->v4l2;

 VAR_6->fmt.pix.width = VAR_8->width;
 VAR_6->fmt.pix.height = VAR_8->height;
 VAR_6->fmt.pix.pixelformat = VAR_8->format->fourcc;
 VAR_6->fmt.pix.bytesperline = (VAR_8->width * VAR_8->format->depth + 7) >> 3;
 VAR_6->fmt.pix.sizeimage = VAR_6->fmt.pix.bytesperline * VAR_8->height;
 VAR_6->fmt.pix.colorspace = VAR_0;


 if (VAR_8->progressive)
  VAR_6->fmt.pix.field = VAR_2;
 else
  VAR_6->fmt.pix.field = VAR_8->interlaced_fieldmode ?
      VAR_1 : VAR_3;
 return 0;
}
