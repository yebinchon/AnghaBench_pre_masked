
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int field; int height; int width; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct cx88_core {int field; int height; int width; TYPE_1__* dvbdev; } ;
struct cx8800_dev {int fmt; int vb2_vbiq; int vb2_vidq; struct cx88_core* core; } ;
struct TYPE_4__ {int vb2_mpegq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct cx8800_dev* FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct cx8800_dev *VAR_4 = FUNC_2(VAR_1);
 struct cx88_core *VAR_5 = VAR_4->core;
 int VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3);

 if (VAR_6 != 0)
  return VAR_6;
 if (FUNC_1(&VAR_4->vb2_vidq) || FUNC_1(&VAR_4->vb2_vbiq))
  return -VAR_0;
 if (VAR_5->dvbdev && FUNC_1(&VAR_5->dvbdev->vb2_mpegq))
  return -VAR_0;
 VAR_4->fmt = FUNC_0(VAR_3->fmt.pix.pixelformat);
 VAR_5->width = VAR_3->fmt.pix.width;
 VAR_5->height = VAR_3->fmt.pix.height;
 VAR_5->field = VAR_3->fmt.pix.field;
 return 0;
}
