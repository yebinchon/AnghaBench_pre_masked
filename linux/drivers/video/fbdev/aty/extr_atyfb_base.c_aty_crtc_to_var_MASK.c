
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int offset; int length; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int offset; int length; } ;
struct TYPE_6__ {int offset; int length; } ;
struct fb_var_screeninfo {int xres; int yres; int bits_per_pixel; int left_margin; int right_margin; int upper_margin; int lower_margin; int hsync_len; int vsync_len; int sync; int vmode; int yres_virtual; int xres_virtual; TYPE_1__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct crtc {int h_tot_disp; int h_sync_strt_wid; int v_tot_disp; int v_sync_strt_wid; int gen_cntl; int vyres; int vxres; } ;


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
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(const struct crtc *VAR_11,
      struct fb_var_screeninfo *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 u32 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 u32 VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
 u32 VAR_35;
 u32 VAR_36, VAR_37;


 VAR_23 = VAR_11->h_tot_disp & 0x1ff;
 VAR_24 = (VAR_11->h_tot_disp >> 16) & 0xff;
 VAR_25 = (VAR_11->h_sync_strt_wid & 0xff) | ((VAR_11->h_sync_strt_wid >> 4) & 0x100);
 VAR_26 = (VAR_11->h_sync_strt_wid >> 8) & 0x7;
 VAR_27 = (VAR_11->h_sync_strt_wid >> 16) & 0x1f;
 VAR_28 = (VAR_11->h_sync_strt_wid >> 21) & 0x1;
 VAR_29 = VAR_11->v_tot_disp & 0x7ff;
 VAR_30 = (VAR_11->v_tot_disp >> 16) & 0x7ff;
 VAR_31 = VAR_11->v_sync_strt_wid & 0x7ff;
 VAR_32 = (VAR_11->v_sync_strt_wid >> 16) & 0x1f;
 VAR_33 = (VAR_11->v_sync_strt_wid >> 21) & 0x1;
 VAR_34 = VAR_11->gen_cntl & VAR_0 ? 1 : 0;
 VAR_35 = VAR_11->gen_cntl & VAR_3;
 VAR_36 = VAR_11->gen_cntl & VAR_1;
 VAR_37 = VAR_11->gen_cntl & VAR_2;


 VAR_13 = (VAR_24 + 1) * 8;
 VAR_14 = VAR_30 + 1;
 VAR_16 = (VAR_23 - VAR_25 - VAR_27) * 8 - VAR_26;
 VAR_17 = (VAR_25 - VAR_24) * 8 + VAR_26;
 VAR_20 = VAR_27 * 8;
 VAR_18 = VAR_29 - VAR_31 - VAR_32;
 VAR_19 = VAR_31 - VAR_30;
 VAR_21 = VAR_32;
 VAR_22 = (VAR_28 ? 0 : VAR_6) |
  (VAR_33 ? 0 : VAR_7) |
  (VAR_34 ? VAR_5 : 0);

 switch (VAR_35) {
 case 128:
  VAR_15 = 8;
  VAR_12->red.offset = 0;
  VAR_12->red.length = 8;
  VAR_12->green.offset = 0;
  VAR_12->green.length = 8;
  VAR_12->blue.offset = 0;
  VAR_12->blue.length = 8;
  VAR_12->transp.offset = 0;
  VAR_12->transp.length = 0;
  break;
 case 132:
  VAR_15 = 16;
  VAR_12->red.offset = 10;
  VAR_12->red.length = 5;
  VAR_12->green.offset = 5;
  VAR_12->green.length = 5;
  VAR_12->blue.offset = 0;
  VAR_12->blue.length = 5;
  VAR_12->transp.offset = 0;
  VAR_12->transp.length = 0;
  break;
 case 131:
  VAR_15 = 16;
  VAR_12->red.offset = 11;
  VAR_12->red.length = 5;
  VAR_12->green.offset = 5;
  VAR_12->green.length = 6;
  VAR_12->blue.offset = 0;
  VAR_12->blue.length = 5;
  VAR_12->transp.offset = 0;
  VAR_12->transp.length = 0;
  break;
 case 130:
  VAR_15 = 24;
  VAR_12->red.offset = 16;
  VAR_12->red.length = 8;
  VAR_12->green.offset = 8;
  VAR_12->green.length = 8;
  VAR_12->blue.offset = 0;
  VAR_12->blue.length = 8;
  VAR_12->transp.offset = 0;
  VAR_12->transp.length = 0;
  break;
 case 129:
  VAR_15 = 32;
  VAR_12->red.offset = 16;
  VAR_12->red.length = 8;
  VAR_12->green.offset = 8;
  VAR_12->green.length = 8;
  VAR_12->blue.offset = 0;
  VAR_12->blue.length = 8;
  VAR_12->transp.offset = 24;
  VAR_12->transp.length = 8;
  break;
 default:
  FUNC_0("Invalid pixel width\n");
  return -VAR_4;
 }


 VAR_12->xres = VAR_13;
 VAR_12->yres = VAR_14;
 VAR_12->xres_virtual = VAR_11->vxres;
 VAR_12->yres_virtual = VAR_11->vyres;
 VAR_12->bits_per_pixel = VAR_15;
 VAR_12->left_margin = VAR_16;
 VAR_12->right_margin = VAR_17;
 VAR_12->upper_margin = VAR_18;
 VAR_12->lower_margin = VAR_19;
 VAR_12->hsync_len = VAR_20;
 VAR_12->vsync_len = VAR_21;
 VAR_12->sync = VAR_22;
 VAR_12->vmode = VAR_10;






 if (VAR_37)
  VAR_12->vmode = VAR_9;

 if (VAR_36) {
  VAR_12->vmode = VAR_8;
  VAR_12->yres >>= 1;
  VAR_12->upper_margin >>= 1;
  VAR_12->lower_margin >>= 1;
  VAR_12->vsync_len >>= 1;
 }

 return 0;
}
