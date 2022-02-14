
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct pm3_par {int dummy; } ;
struct fb_cmap {int* red; int* green; int* blue; } ;
struct TYPE_4__ {int xoffset; int yoffset; } ;
struct fb_info {struct fb_cmap cmap; TYPE_1__ var; struct pm3_par* par; } ;
struct TYPE_6__ {int width; int height; int depth; int dx; int dy; size_t fg_color; size_t bg_color; scalar_t__ data; } ;
struct TYPE_5__ {int x; int y; } ;
struct fb_cursor {int set; scalar_t__ rop; TYPE_3__ image; scalar_t__ mask; TYPE_2__ hot; scalar_t__ enable; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct pm3_par*,int ,int) ;
 scalar_t__ VAR_15 ;
 int* VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_18, struct fb_cursor *VAR_19)
{
 struct pm3_par *VAR_20 = VAR_18->par;
 u8 VAR_21;

 if (!VAR_17)
  return -VAR_0;


 if (VAR_19->image.width > 64 ||
     VAR_19->image.height > 64 ||
     VAR_19->image.depth > 1)
  return -VAR_0;

 VAR_21 = VAR_10;
 if (VAR_19->enable)
   VAR_21 |= VAR_9;

 FUNC_2(VAR_20, VAR_8, VAR_21);






 if (!VAR_19->set)
  return 0;

 if (VAR_19->set & VAR_4) {
  int VAR_22 = VAR_19->image.dx - VAR_18->var.xoffset;
  int VAR_23 = VAR_19->image.dy - VAR_18->var.yoffset;

  FUNC_2(VAR_20, VAR_12, VAR_22 & 0xff);
  FUNC_2(VAR_20, VAR_11, (VAR_22 >> 8) & 0xf);
  FUNC_2(VAR_20, VAR_14, VAR_23 & 0xff);
  FUNC_2(VAR_20, VAR_13, (VAR_23 >> 8) & 0xf);
 }

 if (VAR_19->set & VAR_2) {
  FUNC_2(VAR_20, VAR_6,
      VAR_19->hot.x & 0x3f);
  FUNC_2(VAR_20, VAR_7,
      VAR_19->hot.y & 0x3f);
 }

 if (VAR_19->set & VAR_1) {
  u32 VAR_24 = VAR_19->image.fg_color;
  u32 VAR_25 = VAR_19->image.bg_color;
  struct fb_cmap VAR_26 = VAR_18->cmap;


  FUNC_2(VAR_20, FUNC_0(39),
      VAR_26.red[VAR_24] >> 8 );
  FUNC_2(VAR_20, FUNC_0(40),
      VAR_26.green[VAR_24] >> 8 );
  FUNC_2(VAR_20, FUNC_0(41),
      VAR_26.blue[VAR_24] >> 8 );

  FUNC_2(VAR_20, FUNC_0(42),
      VAR_26.red[VAR_25] >> 8 );
  FUNC_2(VAR_20, FUNC_0(43),
      VAR_26.green[VAR_25] >> 8 );
  FUNC_2(VAR_20, FUNC_0(44),
      VAR_26.blue[VAR_25] >> 8 );
 }

 if (VAR_19->set & (VAR_5 | VAR_3)) {
  u8 *VAR_27 = (u8 *)VAR_19->image.data;
  u8 *VAR_28 = (u8 *)VAR_19->mask;
  int VAR_29;
  int VAR_30 = FUNC_1(0);

  for (VAR_29 = 0; VAR_29 < VAR_19->image.height; VAR_29++) {
   int VAR_31 = (VAR_19->image.width + 7) >> 3;
   int VAR_32 = 8 - VAR_31;

   for (; VAR_31 > 0; VAR_31--) {
    u8 VAR_33 = *VAR_27 ^ *VAR_28;

    if (VAR_19->rop == VAR_15)
     VAR_33 = *VAR_28 & *VAR_27;

    FUNC_2(VAR_20, VAR_30++,
     VAR_16[VAR_33 >> 4] |
     (VAR_16[*VAR_28 >> 4] << 1));

    FUNC_2(VAR_20, VAR_30++,
     VAR_16[VAR_33 & 0xf] |
     (VAR_16[*VAR_28 & 0xf] << 1));
    VAR_27++;
    VAR_28++;
   }
   for (; VAR_32 > 0; VAR_32--) {
    FUNC_2(VAR_20, VAR_30++, 0);
    FUNC_2(VAR_20, VAR_30++, 0);
   }
  }
  while (VAR_30 < FUNC_1(1024))
   FUNC_2(VAR_20, VAR_30++, 0);
 }
 return 0;
}
