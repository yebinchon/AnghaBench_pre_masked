
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u_int ;
struct TYPE_6__ {int bits_per_pixel; int xres; } ;
struct TYPE_4__ {int line_length; unsigned long smem_len; unsigned long smem_start; void* visual; } ;
struct fb_info {TYPE_3__ var; TYPE_1__ fix; } ;
struct TYPE_5__ {int palette_size; unsigned long screen_end; unsigned long vram_half_sam; scalar_t__ using_vram; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*,TYPE_3__*) ;
 TYPE_2__ VAR_12 ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_13)
{
 switch (VAR_13->var.bits_per_pixel) {
 case 1:
  VAR_12.palette_size = 2;
  VAR_13->fix.visual = VAR_3;
  break;
 case 2:
  VAR_12.palette_size = 4;
  VAR_13->fix.visual = VAR_4;
  break;
 case 4:
  VAR_12.palette_size = 16;
  VAR_13->fix.visual = VAR_4;
  break;
 case 8:
  VAR_12.palette_size = VAR_11;
  VAR_13->fix.visual = VAR_4;
  break;
 default:
  FUNC_0();
 }

 VAR_13->fix.line_length = (VAR_13->var.xres * VAR_13->var.bits_per_pixel) / 8;
 FUNC_2(VAR_13, &VAR_13->var);
 FUNC_1(VAR_13);

 return 0;
}
