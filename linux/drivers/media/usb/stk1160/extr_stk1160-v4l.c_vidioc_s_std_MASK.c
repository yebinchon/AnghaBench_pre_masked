
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct vb2_queue {int dummy; } ;
struct stk1160 {int norm; int width; int height; int v4l2_dev; int udev; struct vb2_queue vb_vidq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct stk1160*,int *) ;
 int FUNC_1 (struct stk1160*) ;
 int FUNC_2 (int *,int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct vb2_queue*) ;
 int VAR_4 ;
 struct stk1160* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5, void *VAR_6, v4l2_std_id VAR_7)
{
 struct stk1160 *VAR_8 = FUNC_4(VAR_5);
 struct vb2_queue *VAR_9 = &VAR_8->vb_vidq;

 if (VAR_8->norm == VAR_7)
  return 0;

 if (FUNC_3(VAR_9))
  return -VAR_0;


 if (!VAR_8->udev)
  return -VAR_1;


 VAR_8->width = 720;
 VAR_8->height = (VAR_7 & VAR_2) ? 480 : 576;
 VAR_8->norm = VAR_7;

 FUNC_1(VAR_8);


 FUNC_0(VAR_8, ((void*)0));

 FUNC_2(&VAR_8->v4l2_dev, 0, VAR_4, VAR_3,
   VAR_8->norm);

 return 0;
}
