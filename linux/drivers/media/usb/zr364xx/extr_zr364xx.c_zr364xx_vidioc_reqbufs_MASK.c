
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr364xx_camera {void* owner; int vb_vidq; } ;
struct v4l2_requestbuffers {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct zr364xx_camera* FUNC_0 (struct file*) ;
 int FUNC_1 (int *,struct v4l2_requestbuffers*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
     struct v4l2_requestbuffers *VAR_3)
{
 struct zr364xx_camera *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->owner && VAR_4->owner != VAR_2)
  return -VAR_0;
 return FUNC_1(&VAR_4->vb_vidq, VAR_3);
}
