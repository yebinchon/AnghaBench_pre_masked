
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct viu_fh {int vb_vidq; struct viu_dev* dev; } ;
struct viu_dev {int lock; } ;
struct file {struct viu_fh* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct viu_fh *VAR_3 = VAR_1->private_data;
 struct viu_dev *VAR_4 = VAR_3->dev;
 int VAR_5;

 FUNC_0(1, "mmap called, vma=%p\n", VAR_2);

 if (FUNC_1(&VAR_4->lock))
  return -VAR_0;
 VAR_5 = FUNC_3(&VAR_3->vb_vidq, VAR_2);
 FUNC_2(&VAR_4->lock);

 FUNC_0(1, "vma start=0x%08lx, size=%ld, ret=%d\n",
  (unsigned long)VAR_2->vm_start,
  (unsigned long)VAR_2->vm_end-(unsigned long)VAR_2->vm_start,
  VAR_5);

 return VAR_5;
}
