
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned int vm_pgoff; } ;
struct TYPE_2__ {unsigned int smem_len; int smem_start; } ;
struct fb_info {TYPE_1__ fix; int screen_base; int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,struct vm_area_struct*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_2, struct vm_area_struct *VAR_3)
{
 unsigned int VAR_4 = VAR_3->vm_pgoff << VAR_1;

 if (VAR_4 < VAR_2->fix.smem_len) {
  return FUNC_0(VAR_2->dev, VAR_3, VAR_2->screen_base,
       VAR_2->fix.smem_start, VAR_2->fix.smem_len);
 }

 return -VAR_0;
}
