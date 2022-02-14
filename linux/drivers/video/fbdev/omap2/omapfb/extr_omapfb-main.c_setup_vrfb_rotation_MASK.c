
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vrfb {int yuv_mode; unsigned int bytespp; scalar_t__ xres; int yres; scalar_t__* paddr; int ** vaddr; } ;
struct omapfb_info {scalar_t__ rotation_type; struct omapfb2_mem_region* region; } ;
struct omapfb2_mem_region {struct vrfb vrfb; int paddr; int size; } ;
struct fb_var_screeninfo {int bits_per_pixel; scalar_t__ xres_virtual; int yres_virtual; int nonstd; } ;
struct fb_fix_screeninfo {int smem_len; int line_length; scalar_t__ smem_start; } ;
struct fb_info {int * screen_base; struct fb_fix_screeninfo fix; struct fb_var_screeninfo var; } ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int FUNC_0 (char*) ;
 struct omapfb_info* FUNC_1 (struct fb_info*) ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct fb_var_screeninfo*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vrfb*,int,int ) ;
 int FUNC_5 (struct vrfb*,int ,scalar_t__,int,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_4)
{
 struct omapfb_info *VAR_5 = FUNC_1(VAR_4);
 struct omapfb2_mem_region *VAR_6 = VAR_5->region;
 struct vrfb *VAR_7 = &VAR_6->vrfb;
 struct fb_var_screeninfo *VAR_8 = &VAR_4->var;
 struct fb_fix_screeninfo *VAR_9 = &VAR_4->fix;
 unsigned VAR_10;
 bool VAR_11;
 enum omap_color_mode VAR_12;
 int VAR_13;
 bool VAR_14;

 if (!VAR_6->size || VAR_5->rotation_type != VAR_2)
  return 0;

 FUNC_0("setup_vrfb_rotation\n");

 VAR_13 = FUNC_2(VAR_8, &VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_10 = VAR_8->bits_per_pixel >> 3;

 VAR_11 = VAR_12 == VAR_1 || VAR_12 == VAR_0;






 VAR_14 = 0;

 if (VAR_11 != VAR_7->yuv_mode)
  VAR_14 = 1;
 else if (VAR_10 != VAR_7->bytespp)
  VAR_14 = 1;
 else if (VAR_7->xres != VAR_8->xres_virtual ||
   VAR_7->yres != VAR_8->yres_virtual)
  VAR_14 = 1;

 if (VAR_7->vaddr[0] && VAR_14) {
  VAR_4->screen_base = ((void*)0);
  VAR_9->smem_start = 0;
  VAR_9->smem_len = 0;
  FUNC_3(VAR_7->vaddr[0]);
  VAR_7->vaddr[0] = ((void*)0);
  FUNC_0("setup_vrfb_rotation: reset fb\n");
 }

 if (VAR_7->vaddr[0])
  return 0;

 FUNC_5(&VAR_6->vrfb, VAR_6->paddr,
   VAR_8->xres_virtual,
   VAR_8->yres_virtual,
   VAR_10, VAR_11);


 VAR_13 = FUNC_4(VAR_7, VAR_8->yres_virtual, 0);
 if (VAR_13)
  return VAR_13;


 VAR_4->screen_base = VAR_5->region->vrfb.vaddr[0];

 VAR_9->smem_start = VAR_5->region->vrfb.paddr[0];

 switch (VAR_8->nonstd) {
 case 129:
 case 128:
  VAR_9->line_length =
   (VAR_3 * VAR_8->bits_per_pixel) >> 2;
  break;
 default:
  VAR_9->line_length =
   (VAR_3 * VAR_8->bits_per_pixel) >> 3;
  break;
 }

 VAR_9->smem_len = VAR_8->yres_virtual * VAR_9->line_length;

 return 0;
}
