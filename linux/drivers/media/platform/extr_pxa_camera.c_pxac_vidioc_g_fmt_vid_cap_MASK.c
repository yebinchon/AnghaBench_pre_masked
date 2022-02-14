
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_pix_format {int colorspace; int pixelformat; int field; int sizeimage; int bytesperline; int height; int width; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_6__ {int colorspace; int field; int sizeimage; int bytesperline; int height; int width; } ;
struct pxa_camera_dev {TYPE_4__* current_fmt; TYPE_2__ current_pix; } ;
struct file {int dummy; } ;
struct TYPE_8__ {TYPE_3__* host_fmt; } ;
struct TYPE_7__ {int fourcc; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct pxa_camera_dev*) ;
 struct pxa_camera_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
        struct v4l2_format *VAR_2)
{
 struct pxa_camera_dev *VAR_3 = FUNC_2(VAR_0);
 struct v4l2_pix_format *VAR_4 = &VAR_2->fmt.pix;

 VAR_4->width = VAR_3->current_pix.width;
 VAR_4->height = VAR_3->current_pix.height;
 VAR_4->bytesperline = VAR_3->current_pix.bytesperline;
 VAR_4->sizeimage = VAR_3->current_pix.sizeimage;
 VAR_4->field = VAR_3->current_pix.field;
 VAR_4->pixelformat = VAR_3->current_fmt->host_fmt->fourcc;
 VAR_4->colorspace = VAR_3->current_pix.colorspace;
 FUNC_0(FUNC_1(VAR_3), "current_fmt->fourcc: 0x%08x\n",
  VAR_3->current_fmt->host_fmt->fourcc);
 return 0;
}
