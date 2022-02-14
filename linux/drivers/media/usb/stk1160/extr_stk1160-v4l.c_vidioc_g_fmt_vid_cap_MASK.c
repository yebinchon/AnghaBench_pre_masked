
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
struct stk1160 {int width; int height; TYPE_1__* fmt; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stk1160* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_format *VAR_4)
{
 struct stk1160 *VAR_5 = FUNC_0(VAR_2);

 VAR_4->fmt.pix.width = VAR_5->width;
 VAR_4->fmt.pix.height = VAR_5->height;
 VAR_4->fmt.pix.field = VAR_1;
 VAR_4->fmt.pix.pixelformat = VAR_5->fmt->fourcc;
 VAR_4->fmt.pix.bytesperline = VAR_5->width * 2;
 VAR_4->fmt.pix.sizeimage = VAR_5->height * VAR_4->fmt.pix.bytesperline;
 VAR_4->fmt.pix.colorspace = VAR_0;

 return 0;
}
