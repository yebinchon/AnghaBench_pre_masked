
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int line_length; int smem_len; int smem_start; } ;
struct TYPE_4__ {int yres_virtual; } ;
struct fb_info {int screen_size; TYPE_1__ fix; int mm_lock; void* screen_base; int dev; TYPE_2__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_3)
{
 u32 VAR_4 = VAR_3->fix.line_length * VAR_3->var.yres_virtual;
 void *VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1 | VAR_2);
 if (!VAR_5) {
  FUNC_1(VAR_3->dev, "unable to allocate fb memory\n");
  return -VAR_0;
 }
 FUNC_2(&VAR_3->mm_lock);
 VAR_3->screen_base = VAR_5;
 VAR_3->fix.smem_start = FUNC_4(VAR_3->screen_base);
 VAR_3->fix.smem_len = VAR_4;
 FUNC_3(&VAR_3->mm_lock);
 VAR_3->screen_size = VAR_3->fix.smem_len;

 return 0;
}
