
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {int vb_vidq; struct cx231xx* dev; } ;
struct cx231xx {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (char*,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cx231xx_fh*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct cx231xx_fh *VAR_3 = VAR_1->private_data;
 struct cx231xx *VAR_4 = VAR_3->dev;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_3);

 if (FUNC_5(VAR_5 < 0))
  return VAR_5;

 if (FUNC_2(&VAR_4->lock))
  return -VAR_0;
 VAR_5 = FUNC_6(&VAR_3->vb_vidq, VAR_2);
 FUNC_3(&VAR_4->lock);

 FUNC_1("vma start=0x%08lx, size=%ld, ret=%d\n",
    (unsigned long)VAR_2->vm_start,
    (unsigned long)VAR_2->vm_end -
    (unsigned long)VAR_2->vm_start, VAR_5);

 return VAR_5;
}
