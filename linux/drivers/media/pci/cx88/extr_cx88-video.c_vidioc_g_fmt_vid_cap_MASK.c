
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; int bytesperline; int sizeimage; int colorspace; int pixelformat; int field; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct cx88_core {int width; int height; int field; } ;
struct cx8800_dev {TYPE_1__* fmt; struct cx88_core* core; } ;
struct TYPE_4__ {int depth; int fourcc; } ;


 int VAR_0 ;
 struct cx8800_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct cx8800_dev *VAR_4 = FUNC_0(VAR_1);
 struct cx88_core *VAR_5 = VAR_4->core;

 VAR_3->fmt.pix.width = VAR_5->width;
 VAR_3->fmt.pix.height = VAR_5->height;
 VAR_3->fmt.pix.field = VAR_5->field;
 VAR_3->fmt.pix.pixelformat = VAR_4->fmt->fourcc;
 VAR_3->fmt.pix.bytesperline =
  (VAR_3->fmt.pix.width * VAR_4->fmt->depth) >> 3;
 VAR_3->fmt.pix.sizeimage =
  VAR_3->fmt.pix.height * VAR_3->fmt.pix.bytesperline;
 VAR_3->fmt.pix.colorspace = VAR_0;
 return 0;
}
