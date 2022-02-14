
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_page_prot; } ;
struct TYPE_2__ {int smem_len; int smem_start; } ;
struct fb_info {TYPE_1__ fix; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,int ,int ) ;

int FUNC_2(struct fb_info *VAR_0,
      struct vm_area_struct *VAR_1)
{
 VAR_1->vm_page_prot = FUNC_0(VAR_1->vm_page_prot);

 return FUNC_1(VAR_1, VAR_0->fix.smem_start, VAR_0->fix.smem_len);
}
