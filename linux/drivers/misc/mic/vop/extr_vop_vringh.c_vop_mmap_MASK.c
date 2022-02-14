
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_vdev {int dummy; } ;
struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; int vm_flags; int vm_page_prot; } ;
struct file {struct vop_vdev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_1 (struct vop_vdev*,unsigned long,unsigned long*,unsigned long*) ;
 int FUNC_2 (struct vop_vdev*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 struct vop_vdev *VAR_6 = VAR_4->private_data;
 unsigned long VAR_7 = VAR_5->vm_pgoff << VAR_2;
 unsigned long VAR_8, VAR_9 = VAR_5->vm_end - VAR_5->vm_start, VAR_10 = VAR_9;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_2(VAR_6);
 if (VAR_12)
  goto ret;
 if (VAR_5->vm_flags & VAR_3) {
  VAR_12 = -VAR_0;
  goto ret;
 }
 while (VAR_10) {
  VAR_11 = FUNC_1(VAR_6, VAR_7, &VAR_9, &VAR_8);
  if (VAR_11 < 0) {
   VAR_12 = -VAR_1;
   goto ret;
  }
  VAR_12 = FUNC_0(VAR_5, VAR_5->vm_start + VAR_7,
          VAR_8 >> VAR_2, VAR_9,
          VAR_5->vm_page_prot);
  if (VAR_12)
   goto ret;
  VAR_10 -= VAR_9;
  VAR_7 += VAR_9;
 }
ret:
 return VAR_12;
}
