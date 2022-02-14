
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_pgoff; int vm_start; } ;
struct TYPE_2__ {scalar_t__ smem_start; int smem_len; } ;
struct fb_info {TYPE_1__ fix; int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 int FUNC_1 (struct vm_area_struct*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_1, struct vm_area_struct *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1->fix.smem_start, VAR_1->fix.smem_len);

 FUNC_0(VAR_1->device, "ps3fb: mmap framebuffer P(%lx)->V(%lx)\n",
  VAR_1->fix.smem_start + (VAR_2->vm_pgoff << VAR_0),
  VAR_2->vm_start);

 return VAR_3;
}
