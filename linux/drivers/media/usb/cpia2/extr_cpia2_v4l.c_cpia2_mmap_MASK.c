
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct file {int private_data; } ;
struct camera_data {int v4l2_lock; int stream_fh; } ;


 int VAR_0 ;
 int FUNC_0 (struct camera_data*,struct vm_area_struct*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct camera_data* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct camera_data *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 if (FUNC_1(&VAR_3->v4l2_lock))
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_3, VAR_2);

 if(!VAR_4)
  VAR_3->stream_fh = VAR_1->private_data;
 FUNC_2(&VAR_3->v4l2_lock);
 return VAR_4;
}
