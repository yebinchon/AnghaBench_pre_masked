
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct tm6000_fh {int vb_vidq; struct tm6000_core* dev; } ;
struct tm6000_core {int lock; } ;
struct file {struct tm6000_fh* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, struct vm_area_struct * VAR_2)
{
 struct tm6000_fh *VAR_3 = VAR_1->private_data;
 struct tm6000_core *VAR_4 = VAR_3->dev;
 int VAR_5;

 if (FUNC_0(&VAR_4->lock))
  return -VAR_0;
 VAR_5 = FUNC_2(&VAR_3->vb_vidq, VAR_2);
 FUNC_1(&VAR_4->lock);
 return VAR_5;
}
