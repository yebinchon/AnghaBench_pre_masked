
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int field; } ;
struct viu_fh {int width; int sizeimage; TYPE_2__* fmt; TYPE_1__ vb_vidq; int height; } ;
struct TYPE_7__ {int width; int bytesperline; int colorspace; int sizeimage; int pixelformat; int field; int height; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int depth; int pixelformat; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2,
     struct v4l2_format *VAR_3)
{
 struct viu_fh *VAR_4 = VAR_2;

 VAR_3->fmt.pix.width = VAR_4->width;
 VAR_3->fmt.pix.height = VAR_4->height;
 VAR_3->fmt.pix.field = VAR_4->vb_vidq.field;
 VAR_3->fmt.pix.pixelformat = VAR_4->fmt->pixelformat;
 VAR_3->fmt.pix.bytesperline =
   (VAR_3->fmt.pix.width * VAR_4->fmt->depth) >> 3;
 VAR_3->fmt.pix.sizeimage = VAR_4->sizeimage;
 VAR_3->fmt.pix.colorspace = VAR_0;
 return 0;
}
