
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {int bits_per_pixel; int xres; int yres; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_1__ var; } ;
struct fb_fillrect {int width; int height; int dx; int dy; int color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_12,
    const struct fb_fillrect *VAR_13)
{
 int VAR_14 = VAR_13->width;
 int VAR_15 = VAR_13->height;
 int VAR_16 = VAR_12->var.bits_per_pixel;
 int VAR_17 = VAR_12->var.xres;
 int VAR_18 = 1;
 int VAR_19 = 1;
 int VAR_20 = 0;
 int VAR_21 = VAR_13->dx;
 int VAR_22 = 0;
 int VAR_23 = VAR_13->dy;
 int VAR_24 = 0;
 int VAR_25 = 0xCC;
 int VAR_26 = 1;
 int VAR_27 = 1;
 int VAR_28 = 0;
 int VAR_29 = 0;
 int VAR_30 = VAR_17 * (VAR_16 / 8);
 int VAR_31 = VAR_23 * VAR_30 + VAR_21 * (VAR_16 / 8);
 int VAR_32 = VAR_17 * (VAR_16 / 8);
 int VAR_33 = VAR_22 * VAR_32 + VAR_20 * (VAR_16 / 8);
 unsigned int VAR_34 = 0;
 int VAR_35 = 0;
 int VAR_36 = 0;
 int VAR_37 = 0;
 int VAR_38 = 0;
 int VAR_39 = VAR_12->var.yres - 1;
 int VAR_40 = VAR_12->var.xres - 1;
 int VAR_41 = 0;

 VAR_39 = (VAR_39 << 16) | VAR_40;
 VAR_34 = (VAR_24 << 26) | (VAR_19 << 18) | (VAR_18 << 16)
  | (VAR_26 << 20) | (VAR_27 << 21) | (VAR_34 << 24)
  | (VAR_35 << 23) | (VAR_36 << 22) | (VAR_37 << 27);
 VAR_32 = (VAR_30 << 16) | VAR_32;
 VAR_14 = VAR_14 | (VAR_15 << 16);
 VAR_28 = ((VAR_25 & 0xff) << 8) | (VAR_28 & 0xff)
  | (VAR_29 << 16);
 VAR_20 = (VAR_20 & 0x1fff) | ((VAR_22 & 0x1fff) << 16);
 VAR_21 = (VAR_21 & 0x1fff) | ((VAR_23 & 0x1fff) << 16);
 VAR_38 = VAR_13->color;

 FUNC_0(VAR_12);

 FUNC_1(((u32 *)(VAR_12->pseudo_palette))[VAR_38], VAR_6);
 FUNC_1(0, VAR_0);
 FUNC_1(VAR_32, VAR_7);
 FUNC_1(VAR_33, VAR_9);
 FUNC_1(VAR_31, VAR_4);
 FUNC_1(VAR_14, VAR_11);
 FUNC_1(VAR_41, VAR_1);
 FUNC_1(VAR_39, VAR_2);
 FUNC_1(VAR_28, VAR_8);
 FUNC_1(VAR_20, VAR_10);
 FUNC_1(VAR_21, VAR_5);
 FUNC_1(VAR_34, VAR_3);
}
