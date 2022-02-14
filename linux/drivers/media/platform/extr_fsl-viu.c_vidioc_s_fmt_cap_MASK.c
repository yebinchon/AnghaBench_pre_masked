
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int field; } ;
struct viu_fh {int type; TYPE_1__ vb_vidq; int sizeimage; int height; int width; int fmt; } ;
struct TYPE_5__ {int field; int sizeimage; int height; int width; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {int type; TYPE_3__ fmt; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*,struct viu_fh*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct viu_fh *VAR_3 = VAR_1;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->fmt = FUNC_0(VAR_2->fmt.pix.pixelformat);
 VAR_3->width = VAR_2->fmt.pix.width;
 VAR_3->height = VAR_2->fmt.pix.height;
 VAR_3->sizeimage = VAR_2->fmt.pix.sizeimage;
 VAR_3->vb_vidq.field = VAR_2->fmt.pix.field;
 VAR_3->type = VAR_2->type;
 return 0;
}
