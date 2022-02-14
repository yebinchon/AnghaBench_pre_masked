
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vga16fb_par {int pel_msk; int* crtc; int vss; int misc; int mode; scalar_t__ isVGA; } ;
struct TYPE_8__ {scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_7__ {int length; scalar_t__ offset; } ;
struct TYPE_6__ {int length; scalar_t__ offset; } ;
struct TYPE_5__ {int length; scalar_t__ offset; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres; int xres_virtual; int xoffset; int left_margin; int right_margin; int hsync_len; int yres; int lower_margin; int vsync_len; int upper_margin; int yres_virtual; int yoffset; int vmode; int sync; int height; int width; scalar_t__ accel_flags; int activate; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; int pixclock; scalar_t__ nonstd; } ;
struct fb_info {struct vga16fb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 int FUNC_1 (struct vga16fb_par*,int ,struct fb_info*,int,int) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_35,
        struct fb_info *VAR_36)
{
 struct vga16fb_par *VAR_37 = VAR_36->par;
 u32 VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;
 u32 VAR_43, VAR_44, VAR_45, VAR_46, VAR_47;
 u32 VAR_48, VAR_49, VAR_50, VAR_51;
 u32 VAR_52;
 u8 VAR_53, VAR_54;
 int VAR_55;
 int VAR_56;
 u32 VAR_57;

 VAR_37->pel_msk = 0xFF;

 if (VAR_35->bits_per_pixel == 4) {
  if (VAR_35->nonstd) {
   if (!VAR_37->isVGA)
    return -VAR_0;
   VAR_55 = 3;
   VAR_56 = VAR_8 | VAR_7;
   VAR_57 = 16384;
   VAR_37->pel_msk = 0x0F;
  } else {
   VAR_55 = 3;
   VAR_56 = 0;
   VAR_57 = 65536;
  }
 } else if (VAR_35->bits_per_pixel == 8) {
  if (!VAR_37->isVGA)
   return -VAR_0;
  VAR_55 = 2;
  if (VAR_35->nonstd) {
   VAR_56 = VAR_6 | VAR_7;
   VAR_57 = 65536;
  } else {
   VAR_56 = VAR_8 | VAR_6 | VAR_7;
   VAR_57 = 16384;
  }
 } else
  return -VAR_0;

 VAR_38 = (VAR_35->xres + 7) & ~7;
 VAR_48 = (VAR_35->xres_virtual + 0xF) & ~0xF;
 VAR_49 = (VAR_35->xoffset + 7) & ~7;
 VAR_41 = (VAR_35->left_margin + 7) & ~7;
 VAR_39 = (VAR_35->right_margin + 7) & ~7;
 VAR_40 = (VAR_35->hsync_len + 7) & ~7;

 if (VAR_48 < VAR_38)
  VAR_48 = VAR_38;
 if (VAR_38 + VAR_49 > VAR_48)
  VAR_49 = VAR_48 - VAR_38;

 VAR_35->xres = VAR_38;
 VAR_35->right_margin = VAR_39;
 VAR_35->hsync_len = VAR_40;
 VAR_35->left_margin = VAR_41;
 VAR_35->xres_virtual = VAR_48;
 VAR_35->xoffset = VAR_49;

 VAR_38 >>= VAR_55;
 VAR_39 >>= VAR_55;
 VAR_40 >>= VAR_55;
 VAR_41 >>= VAR_55;
 VAR_48 >>= VAR_55;
 VAR_42 = VAR_38 + VAR_39 + VAR_40 + VAR_41;
 if (VAR_42 >= 256)
  FUNC_0("xtotal too big");
 if (VAR_40 > 32)
  FUNC_0("hslen too big");
 if (VAR_39 + VAR_40 + VAR_41 > 64)
  FUNC_0("hblank too big");
 VAR_37->crtc[VAR_19] = VAR_42 - 5;
 VAR_37->crtc[VAR_15] = VAR_38 - 1;
 VAR_37->crtc[VAR_16] = VAR_38 - 1;
 VAR_52 = VAR_38 + VAR_39;
 VAR_37->crtc[VAR_18] = VAR_52;
 VAR_52 += VAR_40;
 VAR_37->crtc[VAR_17] = VAR_52 & 0x1F;
 VAR_52 += VAR_41 - 2;
 VAR_37->crtc[VAR_14] = (VAR_52 & 0x1F) | 0x80;
 if (VAR_52 & 0x20)
  VAR_37->crtc[VAR_17] |= 0x80;

 VAR_43 = VAR_35->yres;
 VAR_44 = VAR_35->lower_margin;
 VAR_45 = VAR_35->vsync_len;
 VAR_46 = VAR_35->upper_margin;
 VAR_50 = VAR_35->yres_virtual;
 VAR_51 = VAR_35->yoffset;

 if (VAR_43 > VAR_50)
  VAR_50 = VAR_43;
 if (VAR_48 * VAR_50 > VAR_57) {
  VAR_50 = VAR_57 / VAR_48;
  if (VAR_50 < VAR_43)
   return -VAR_1;
 }
 if (VAR_51 + VAR_43 > VAR_50)
  VAR_51 = VAR_50 - VAR_43;
 VAR_35->yres = VAR_43;
 VAR_35->lower_margin = VAR_44;
 VAR_35->vsync_len = VAR_45;
 VAR_35->upper_margin = VAR_46;
 VAR_35->yres_virtual = VAR_50;
 VAR_35->yoffset = VAR_51;

 if (VAR_35->vmode & VAR_5) {
  VAR_43 <<= 1;
  VAR_44 <<= 1;
  VAR_45 <<= 1;
  VAR_46 <<= 1;
 }
 VAR_47 = VAR_43 + VAR_44 + VAR_45 + VAR_46;
 if (VAR_47 > 1024) {
  VAR_47 >>= 1;
  VAR_43 >>= 1;
  VAR_44 >>= 1;
  VAR_45 >>= 1;
  VAR_46 >>= 1;
  VAR_54 = 0x04;
 } else
  VAR_54 = 0x00;
 if (VAR_47 > 1024)
  FUNC_0("ytotal too big");
 if (VAR_45 > 16)
  FUNC_0("vslen too big");
 VAR_37->crtc[VAR_34] = VAR_47 - 2;
 VAR_53 = 0x10;
 if (VAR_47 & 0x100) VAR_53 |= 0x01;
 if (VAR_47 & 0x200) VAR_53 |= 0x20;
 VAR_37->crtc[VAR_25] = 0;
 VAR_37->crtc[VAR_21] = 0x40;
 if (VAR_35->vmode & VAR_5)
  VAR_37->crtc[VAR_21] |= 0x80;
 VAR_37->crtc[VAR_13] = 0x20;
 VAR_37->crtc[VAR_10] = 0x00;
 if ((VAR_56 & (VAR_7 | VAR_6)) == VAR_7)
  VAR_49--;
 VAR_52 = VAR_51 * VAR_48 + (VAR_49 >> VAR_55);
 VAR_37->crtc[VAR_26] = VAR_52 >> 8;
 VAR_37->crtc[VAR_27] = VAR_52 & 0xFF;
 VAR_37->crtc[VAR_11] = 0x00;
 VAR_37->crtc[VAR_12] = 0x00;
 VAR_52 = VAR_43 - 1;
 VAR_37->crtc[VAR_31] = VAR_52 & 0xFF;
 VAR_37->crtc[VAR_30] = VAR_52 & 0xFF;
 if (VAR_52 & 0x100)
  VAR_53 |= 0x0A;
 if (VAR_52 & 0x200) {
  VAR_53 |= 0x40;
  VAR_37->crtc[VAR_21] |= 0x20;
 }
 VAR_52 += VAR_44;
 VAR_37->crtc[VAR_33] = VAR_52 & 0xFF;
 if (VAR_52 & 0x100)
  VAR_53 |= 0x04;
 if (VAR_52 & 0x200)
  VAR_53 |= 0x80;
 VAR_52 += VAR_45;
 VAR_37->crtc[VAR_32] = (VAR_52 & 0x0F) & ~0x10;
 VAR_52 += VAR_46 - 1;
 VAR_37->crtc[VAR_29] = VAR_52 & 0xFF;

 if (VAR_48 >= 512)
  FUNC_0("vxres too long");
 VAR_37->crtc[VAR_23] = VAR_48 >> 1;
 if (VAR_56 & VAR_8)
  VAR_37->crtc[VAR_28] = 0x5F;
 else
  VAR_37->crtc[VAR_28] = 0x1F;
 VAR_37->crtc[VAR_22] = VAR_54 | ((VAR_56 & VAR_9) ? 0xA3 : 0xE3);
 VAR_37->crtc[VAR_20] = 0xFF;
 VAR_37->crtc[VAR_24] = VAR_53;

 VAR_37->vss = 0x00;

 VAR_37->misc = 0xE3;
 if (VAR_35->sync & VAR_3)
  VAR_37->misc &= ~0x40;
 if (VAR_35->sync & VAR_4)
  VAR_37->misc &= ~0x80;

 VAR_37->mode = VAR_56;

 if (VAR_56 & VAR_6)

  FUNC_1(VAR_37, VAR_35->pixclock, VAR_36, 1, 2);
 else

  FUNC_1(VAR_37, VAR_35->pixclock, VAR_36, 1, 1);

 VAR_35->red.offset = VAR_35->green.offset = VAR_35->blue.offset =
 VAR_35->transp.offset = 0;
 VAR_35->red.length = VAR_35->green.length = VAR_35->blue.length =
  (VAR_37->isVGA) ? 6 : 2;
 VAR_35->transp.length = 0;
 VAR_35->activate = VAR_2;
 VAR_35->height = -1;
 VAR_35->width = -1;
 VAR_35->accel_flags = 0;
 return 0;
}
