
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; } ;
struct TYPE_4__ {unsigned long smem_len; } ;
struct fb_info {TYPE_2__ fix; } ;
struct clcd_fb {TYPE_1__* board; } ;
struct TYPE_3__ {int (* mmap ) (struct clcd_fb*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct clcd_fb*,struct vm_area_struct*) ;
 struct clcd_fb* FUNC_1 (struct fb_info*) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_2,
         struct vm_area_struct *VAR_3)
{
 struct clcd_fb *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5, VAR_6 = VAR_3->vm_pgoff << VAR_1;
 int VAR_7 = -VAR_0;

 VAR_5 = VAR_2->fix.smem_len;

 if (VAR_6 <= VAR_5 && VAR_3->vm_end - VAR_3->vm_start <= VAR_5 - VAR_6 &&
     VAR_4->board->mmap)
  VAR_7 = VAR_4->board->mmap(VAR_4, VAR_3);

 return VAR_7;
}
