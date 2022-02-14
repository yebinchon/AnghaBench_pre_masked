
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; unsigned int vm_pgoff; int vm_page_prot; } ;
struct vfio_platform_region {scalar_t__ size; scalar_t__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,scalar_t__,unsigned int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct vfio_platform_region VAR_4,
       struct vm_area_struct *VAR_5)
{
 u64 VAR_6, VAR_7, VAR_8;

 VAR_6 = VAR_5->vm_end - VAR_5->vm_start;
 VAR_7 = VAR_5->vm_pgoff &
  ((1U << (VAR_3 - VAR_1)) - 1);
 VAR_8 = VAR_7 << VAR_1;

 if (VAR_4.size < VAR_2 || VAR_8 + VAR_6 > VAR_4.size)
  return -VAR_0;

 VAR_5->vm_page_prot = FUNC_0(VAR_5->vm_page_prot);
 VAR_5->vm_pgoff = (VAR_4.addr >> VAR_1) + VAR_7;

 return FUNC_1(VAR_5, VAR_5->vm_start, VAR_5->vm_pgoff,
          VAR_6, VAR_5->vm_page_prot);
}
