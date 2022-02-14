
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct camera_data {int v4l2_lock; scalar_t__ COM_len; scalar_t__ APP_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct camera_data*) ;
 int FUNC_1 (struct camera_data*) ;
 scalar_t__ FUNC_2 (struct camera_data*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 struct camera_data* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_3)
{
 struct camera_data *VAR_4 = FUNC_8(VAR_3);
 int VAR_5;

 if (FUNC_3(&VAR_4->v4l2_lock))
  return -VAR_2;
 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5)
  goto open_unlock;

 if (FUNC_5(VAR_3)) {
  if (FUNC_0(VAR_4)) {
   FUNC_7(VAR_3);
   VAR_5 = -VAR_1;
   goto open_unlock;
  }


  if (FUNC_2(VAR_4) < 0) {
   FUNC_7(VAR_3);
   VAR_5 = -VAR_0;
   goto open_unlock;
  }

  VAR_4->APP_len = 0;
  VAR_4->COM_len = 0;
 }

 FUNC_1(VAR_4);
open_unlock:
 FUNC_4(&VAR_4->v4l2_lock);
 return VAR_5;
}
