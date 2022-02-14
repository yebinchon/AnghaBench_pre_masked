
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pm2fb_par {int* palette; } ;
struct TYPE_6__ {int scan_align; } ;
struct TYPE_5__ {int xres; int bits_per_pixel; } ;
struct TYPE_4__ {int visual; } ;
struct fb_info {scalar_t__ state; int flags; TYPE_3__ pixmap; TYPE_2__ var; TYPE_1__ fix; struct pm2fb_par* par; } ;
struct fb_image {int height; int depth; int fg_color; int bg_color; int dy; int dx; int width; scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct pm2fb_par*,int) ;
 int FUNC_1 (struct fb_info*,struct fb_image const*) ;
 int const FUNC_2 (int) ;
 int FUNC_3 (struct pm2fb_par*,int ,int const) ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_20, const struct fb_image *VAR_21)
{
 struct pm2fb_par *VAR_22 = VAR_20->par;
 u32 VAR_23 = VAR_21->height;
 u32 VAR_24, VAR_25;
 const u32 *VAR_26 = (const u32 *)VAR_21->data;
 u32 VAR_27 = (VAR_20->var.xres + 31) & ~31;
 int VAR_28 = 1;





 if (VAR_20->state != VAR_1)
  return;
 if (VAR_20->flags & VAR_0 || VAR_21->depth != 1) {
  FUNC_1(VAR_20, VAR_21);
  return;
 }
 switch (VAR_20->fix.visual) {
 case 129:
  VAR_24 = VAR_21->fg_color;
  VAR_25 = VAR_21->bg_color;
  break;
 case 128:
 default:
  VAR_24 = VAR_22->palette[VAR_21->fg_color];
  VAR_25 = VAR_22->palette[VAR_21->bg_color];
  break;
 }
 if (VAR_20->var.bits_per_pixel == 8) {
  VAR_24 |= VAR_24 << 8;
  VAR_25 |= VAR_25 << 8;
 }
 if (VAR_20->var.bits_per_pixel <= 16) {
  VAR_24 |= VAR_24 << 16;
  VAR_25 |= VAR_25 << 16;
 }

 FUNC_0(VAR_22, 13);
 FUNC_3(VAR_22, VAR_11, FUNC_2(VAR_27));
 FUNC_3(VAR_22, VAR_18,
   ((VAR_21->dy & 0xfff) << 16) | (VAR_21->dx & 0x0fff));
 FUNC_3(VAR_22, VAR_17,
   (((VAR_21->dy + VAR_21->height) & 0x0fff) << 16) |
   ((VAR_21->dx + VAR_21->width) & 0x0fff));
 FUNC_3(VAR_22, VAR_19, 1);

 FUNC_3(VAR_22, VAR_12, (0x3 << 1) | 1);
 FUNC_3(VAR_22, VAR_14,
   ((VAR_21->dy & 0xfff) << 16) | (VAR_21->dx & 0x0fff));
 FUNC_3(VAR_22, VAR_15,
   ((VAR_21->height & 0x0fff) << 16) |
   ((VAR_21->width) & 0x0fff));
 if (VAR_20->var.bits_per_pixel == 24) {
  FUNC_3(VAR_22, VAR_8, 1);

  FUNC_3(VAR_22, VAR_9, VAR_25);
  FUNC_3(VAR_22, VAR_16,
   VAR_5 |
   VAR_2 | VAR_3);

  FUNC_3(VAR_22, VAR_13, VAR_28 | (1 << 9));
  FUNC_3(VAR_22, VAR_9, VAR_24);
  FUNC_3(VAR_22, VAR_16,
   VAR_5 |
   VAR_2 | VAR_3 |
   VAR_6);
 } else {
  FUNC_3(VAR_22, VAR_8, 0);

  FUNC_3(VAR_22, VAR_10, VAR_25);
  FUNC_3(VAR_22, VAR_16,
   VAR_5 |
   VAR_4 |
   VAR_2 | VAR_3);
  FUNC_3(VAR_22, VAR_13, VAR_28);
  FUNC_3(VAR_22, VAR_10, VAR_24);
  FUNC_3(VAR_22, VAR_16,
   VAR_5 |
   VAR_2 | VAR_3 |
   VAR_4 |
   VAR_6);
 }

 while (VAR_23--) {
  int VAR_29 = ((VAR_21->width + 7) >> 3)
    + VAR_20->pixmap.scan_align - 1;
  VAR_29 >>= 2;
  FUNC_0(VAR_22, VAR_29);
  while (VAR_29--) {
   FUNC_3(VAR_22, VAR_7, *VAR_26);
   VAR_26++;
  }
 }
 FUNC_0(VAR_22, 3);
 FUNC_3(VAR_22, VAR_13, 0);
 FUNC_3(VAR_22, VAR_8, 0);
 FUNC_3(VAR_22, VAR_19, 0);
}
