
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int bits_per_pixel; int xres; } ;
struct fb_info {int par; TYPE_1__ var; } ;
struct fb_copyarea {int sx; int sy; int dx; int dy; int width; int height; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct fb_info*,int,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_16 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct fb_info *VAR_17, const struct fb_copyarea *VAR_18)
{
 u32 VAR_19, VAR_20;
 u32 VAR_21;
 u16 VAR_22 = 0;
 u16 VAR_23 = VAR_18->sx, VAR_24 = VAR_18->sy;
 u16 VAR_25 = VAR_18->dx, VAR_26 = VAR_18->dy;
 u16 VAR_27 = VAR_18->width, VAR_28 = VAR_18->height;
 u16 VAR_29;

 FUNC_3(&VAR_16);


 VAR_29 = (VAR_17->var.bits_per_pixel >> 3);
 VAR_21 = VAR_29 * VAR_17->var.xres;


 if ((VAR_26 > VAR_24) || ((VAR_26 == VAR_24) && (VAR_25 >= VAR_23))) {
  VAR_19 = (((VAR_26 + VAR_28 - 1) * VAR_21) + (VAR_29 * (VAR_25 + VAR_27 - 1)));
  VAR_20 = (((VAR_24 + VAR_28 - 1) * VAR_21) + (VAR_29 * (VAR_23 + VAR_27 - 1)));
  VAR_22 = 1;

 } else {
  VAR_19 = (VAR_26 * VAR_21) + (VAR_29 * VAR_25);
  VAR_20 = (VAR_24 * VAR_21) + (VAR_29 * VAR_23);
 }


 FUNC_2(VAR_17->par, VAR_11, (VAR_20 & 0xff));
 FUNC_2(VAR_17->par, VAR_12, (VAR_20 >> 8) & 0x00ff);
 FUNC_2(VAR_17->par, VAR_13, (VAR_20 >> 16) & 0x00ff);


 FUNC_2(VAR_17->par, VAR_3, (VAR_19 & 0xff));
 FUNC_2(VAR_17->par, VAR_4, (VAR_19 >> 8) & 0x00ff);
 FUNC_2(VAR_17->par, VAR_5, (VAR_19 >> 16) & 0x00ff);


 FUNC_2(VAR_17->par, VAR_14, (VAR_27 & 0xff) - 1);
 FUNC_2(VAR_17->par, VAR_15, (VAR_27 >> 8));

 FUNC_2(VAR_17->par, VAR_6, (VAR_28 & 0xff) - 1);
 FUNC_2(VAR_17->par, VAR_7, (VAR_28 >> 8));


 if (VAR_22 == 1) {
  FUNC_1("(copyarea) negative rop\n");
  FUNC_2(VAR_17->par, VAR_10, 0x03);
 } else {
  FUNC_2(VAR_17->par, VAR_10, 0x02);
  FUNC_1("(copyarea) positive rop\n");
 }


 FUNC_2(VAR_17->par, VAR_1, 0x0);


 FUNC_2(VAR_17->par, VAR_2, (VAR_29 >> 1));


 FUNC_2(VAR_17->par, VAR_8, (VAR_21 >> 1) & 0xff);
 FUNC_2(VAR_17->par, VAR_9, (VAR_21 >> 9));

 FUNC_1("(copyarea) dx=%d, dy=%d\n", VAR_25, VAR_26);
 FUNC_1("(copyarea) sx=%d, sy=%d\n", VAR_23, VAR_24);
 FUNC_1("(copyarea) width=%d, height=%d\n", VAR_27 - 1, VAR_28 - 1);
 FUNC_1("(copyarea) stride=%d\n", VAR_21);
 FUNC_1("(copyarea) bpp=%d=0x0%d, mem_offset1=%d, mem_offset2=%d\n", VAR_29, (VAR_29 >> 1),
  (VAR_21 >> 1) & 0xff, VAR_21 >> 9);

 FUNC_2(VAR_17->par, VAR_0, 0x0c);


 FUNC_2(VAR_17->par, VAR_1, 0x80);


 FUNC_0(VAR_17, 0x80, 8000);

 FUNC_4(&VAR_16);
}
