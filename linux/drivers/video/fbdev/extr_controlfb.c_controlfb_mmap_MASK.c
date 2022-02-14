
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vm_area_struct {unsigned long vm_pgoff; int vm_page_prot; } ;
struct TYPE_4__ {unsigned long smem_start; unsigned long mmio_start; scalar_t__ mmio_len; scalar_t__ smem_len; } ;
struct TYPE_3__ {scalar_t__ accel_flags; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_3,
                       struct vm_area_struct *VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;

 VAR_6 = VAR_3->fix.smem_start;
 VAR_7 = VAR_3->fix.smem_len;
 VAR_5 = FUNC_0((VAR_6 & ~VAR_1) + VAR_7) >> VAR_2;
 if (VAR_4->vm_pgoff >= VAR_5) {
  if (VAR_3->var.accel_flags)
   return -VAR_0;
  VAR_4->vm_pgoff -= VAR_5;
  VAR_6 = VAR_3->fix.mmio_start;
  VAR_7 = VAR_3->fix.mmio_len;
  VAR_4->vm_page_prot = FUNC_2(VAR_4->vm_page_prot);
 } else {

  VAR_4->vm_page_prot = FUNC_1(VAR_4->vm_page_prot);
 }

 return FUNC_3(VAR_4, VAR_6, VAR_7);
}
