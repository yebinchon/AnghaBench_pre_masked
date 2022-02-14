
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; int field; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct cx88_core {int field; int height; int width; TYPE_1__* v4ldev; } ;
struct cx8802_dev {int vb2_mpegq; struct cx88_core* core; } ;
struct TYPE_4__ {int vb2_vbiq; int vb2_vidq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx8802_dev*,int ,int,int ,int ,int ) ;
 int FUNC_1 (struct cx88_core*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 struct cx8802_dev* FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct cx8802_dev *VAR_5 = FUNC_3(VAR_2);
 struct cx88_core *VAR_6 = VAR_5->core;

 if (FUNC_2(&VAR_5->vb2_mpegq))
  return -VAR_1;
 if (VAR_6->v4ldev && (FUNC_2(&VAR_6->v4ldev->vb2_vidq) ||
        FUNC_2(&VAR_6->v4ldev->vb2_vbiq)))
  return -VAR_1;
 FUNC_4(VAR_2, VAR_3, VAR_4);
 VAR_6->width = VAR_4->fmt.pix.width;
 VAR_6->height = VAR_4->fmt.pix.height;
 VAR_6->field = VAR_4->fmt.pix.field;
 FUNC_1(VAR_6, VAR_4->fmt.pix.width, VAR_4->fmt.pix.height,
         VAR_4->fmt.pix.field);
 FUNC_0(VAR_5, VAR_0, 2, 0,
     VAR_4->fmt.pix.height, VAR_4->fmt.pix.width);
 return 0;
}
