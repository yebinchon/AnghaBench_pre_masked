
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {int xres_virtual; int yres_virtual; int bits_per_pixel; } ;
struct TYPE_2__ {int smem_len; int smem_start; } ;
struct fb_info {TYPE_1__ fix; int screen_base; int device; struct fb_var_screeninfo var; } ;
struct atmel_lcdfb_info {int smem_len; struct fb_info* info; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct atmel_lcdfb_info *VAR_2)
{
 struct fb_info *VAR_3 = VAR_2->info;
 struct fb_var_screeninfo *VAR_4 = &VAR_3->var;
 unsigned int VAR_5;

 VAR_5 = (VAR_4->xres_virtual * VAR_4->yres_virtual
      * ((VAR_4->bits_per_pixel + 7) / 8));
 VAR_3->fix.smem_len = FUNC_1(VAR_5, VAR_2->smem_len);

 VAR_3->screen_base = FUNC_0(VAR_3->device, VAR_3->fix.smem_len,
      (dma_addr_t *)&VAR_3->fix.smem_start,
      VAR_1);

 if (!VAR_3->screen_base) {
  return -VAR_0;
 }

 FUNC_2(VAR_3->screen_base, 0, VAR_3->fix.smem_len);

 return 0;
}
