
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_pgoff; } ;
struct TYPE_2__ {scalar_t__ smem_start; } ;
struct fb_info {TYPE_1__ fix; } ;


 int FUNC_0 (struct vm_area_struct*,void*,int ) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0,
      struct vm_area_struct *VAR_1)
{
 return FUNC_0(VAR_1, (void *)VAR_0->fix.smem_start, VAR_1->vm_pgoff);
}
