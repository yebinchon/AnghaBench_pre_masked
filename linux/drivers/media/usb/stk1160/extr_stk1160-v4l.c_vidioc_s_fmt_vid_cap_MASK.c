
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_3__ {int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct stk1160_decimate_ctrl {int dummy; } ;
struct stk1160 {int height; int width; struct vb2_queue vb_vidq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct stk1160*,struct stk1160_decimate_ctrl*) ;
 int FUNC_1 (struct stk1160*,struct v4l2_format*,struct stk1160_decimate_ctrl*) ;
 scalar_t__ FUNC_2 (struct vb2_queue*) ;
 struct stk1160* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
     struct v4l2_format *VAR_3)
{
 struct stk1160 *VAR_4 = FUNC_3(VAR_1);
 struct vb2_queue *VAR_5 = &VAR_4->vb_vidq;
 struct stk1160_decimate_ctrl VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_5))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4, VAR_3, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_4->width = VAR_3->fmt.pix.width;
 VAR_4->height = VAR_3->fmt.pix.height;
 FUNC_0(VAR_4, &VAR_6);

 return 0;
}
