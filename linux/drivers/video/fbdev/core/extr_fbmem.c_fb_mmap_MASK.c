
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vm_area_struct {unsigned long vm_pgoff; void* vm_page_prot; int vm_flags; } ;
struct file {int dummy; } ;
struct fb_ops {int (* fb_mmap ) (struct fb_info*,struct vm_area_struct*) ;} ;
struct TYPE_4__ {unsigned long smem_start; unsigned long mmio_start; scalar_t__ mmio_len; scalar_t__ smem_len; } ;
struct TYPE_3__ {scalar_t__ accel_flags; } ;
struct fb_info {int mm_lock; TYPE_2__ fix; TYPE_1__ var; struct fb_ops* fbops; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct file*,struct vm_area_struct*,unsigned long) ;
 struct fb_info* FUNC_2 (struct file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (struct fb_info*,struct vm_area_struct*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct vm_area_struct*,unsigned long,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_4, struct vm_area_struct * VAR_5)
{
 struct fb_info *VAR_6 = FUNC_2(VAR_4);
 struct fb_ops *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 u32 VAR_10;

 if (!VAR_6)
  return -VAR_1;
 VAR_7 = VAR_6->fbops;
 FUNC_3(&VAR_6->mm_lock);
 if (VAR_7->fb_mmap) {
  int VAR_11;





  VAR_5->vm_page_prot = FUNC_5(VAR_5->vm_page_prot);
  VAR_11 = VAR_7->fb_mmap(VAR_6, VAR_5);
  FUNC_4(&VAR_6->mm_lock);
  return VAR_11;
 }





 VAR_9 = VAR_6->fix.smem_start;
 VAR_10 = VAR_6->fix.smem_len;
 VAR_8 = FUNC_0((VAR_9 & ~VAR_2) + VAR_10) >> VAR_3;
 if (VAR_5->vm_pgoff >= VAR_8) {
  if (VAR_6->var.accel_flags) {
   FUNC_4(&VAR_6->mm_lock);
   return -VAR_0;
  }

  VAR_5->vm_pgoff -= VAR_8;
  VAR_9 = VAR_6->fix.mmio_start;
  VAR_10 = VAR_6->fix.mmio_len;
 }
 FUNC_4(&VAR_6->mm_lock);

 VAR_5->vm_page_prot = FUNC_7(VAR_5->vm_flags);




 VAR_5->vm_page_prot = FUNC_5(VAR_5->vm_page_prot);
 FUNC_1(VAR_4, VAR_5, VAR_9);

 return FUNC_8(VAR_5, VAR_9, VAR_10);
}
