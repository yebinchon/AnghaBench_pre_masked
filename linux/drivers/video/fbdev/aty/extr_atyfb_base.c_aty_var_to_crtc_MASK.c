
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int length; } ;
struct fb_var_screeninfo {int xres; int yres; int xres_virtual; int yres_virtual; int xoffset; int yoffset; int bits_per_pixel; int sync; int vmode; int right_margin; int hsync_len; int left_margin; int lower_margin; int vsync_len; int upper_margin; int activate; TYPE_1__ green; } ;
struct TYPE_4__ {int smem_len; } ;
struct fb_info {TYPE_2__ fix; scalar_t__ par; } ;
struct crtc {int lcd_index; int lcd_config_panel; int lcd_gen_cntl; int vxres; int vyres; int xoffset; int yoffset; int bpp; int off_pitch; int h_tot_disp; int h_sync_strt_wid; int v_tot_disp; int v_sync_strt_wid; int gen_cntl; int horz_stretching; int ext_vert_stretch; int vert_stretching; int shadow_h_tot_disp; int shadow_h_sync_strt_wid; int shadow_v_tot_disp; int shadow_v_sync_strt_wid; int dp_pix_width; int dp_chain_mask; scalar_t__ vline_crnt_vline; } ;
struct atyfb_par {scalar_t__ lcd_table; int lcd_width; int lcd_height; int lcd_right_margin; int lcd_hsync_len; int lcd_hsync_dly; int lcd_hblank_len; int lcd_lower_margin; int lcd_vsync_len; int lcd_vblank_len; } ;


 int FUNC_0 (int*,int*) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_61 ;
 int VAR_62 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int FUNC_6 (int ,struct atyfb_par*) ;
 int FUNC_7 (int ,struct atyfb_par*) ;
 int FUNC_8 (int ,int,struct atyfb_par*) ;
 int FUNC_9 (struct atyfb_par*,int,int) ;

__attribute__((used)) static int FUNC_10(const struct fb_info *VAR_77,
      const struct fb_var_screeninfo *VAR_78,
      struct crtc *VAR_79)
{
 struct atyfb_par *VAR_80 = (struct atyfb_par *) VAR_77->par;
 u32 VAR_81, VAR_82, VAR_83, VAR_84, VAR_85, VAR_86, VAR_87;
 u32 VAR_88, VAR_89;
 u32 VAR_90, VAR_91, VAR_92, VAR_93, VAR_94, VAR_95, VAR_96;
 u32 VAR_97, VAR_98, VAR_99, VAR_100, VAR_101, VAR_102, VAR_103;
 u32 VAR_104, VAR_105, VAR_106;
 u32 VAR_107;


 VAR_81 = (VAR_78->xres + 7) & ~7;
 VAR_82 = VAR_78->yres;
 VAR_83 = (VAR_78->xres_virtual + 7) & ~7;
 VAR_84 = VAR_78->yres_virtual;
 VAR_85 = (VAR_78->xoffset + 7) & ~7;
 VAR_86 = VAR_78->yoffset;
 VAR_87 = VAR_78->bits_per_pixel;
 if (VAR_87 == 16)
  VAR_87 = (VAR_78->green.length == 5) ? 15 : 16;
 VAR_88 = VAR_78->sync;
 VAR_89 = VAR_78->vmode;


 if (VAR_83 < VAR_81 + VAR_85)
  VAR_83 = VAR_81 + VAR_85;
 VAR_91 = VAR_81;

 if (VAR_84 < VAR_82 + VAR_86)
  VAR_84 = VAR_82 + VAR_86;
 VAR_98 = VAR_82;

 if (VAR_87 <= 8) {
  VAR_87 = 8;
  VAR_104 = VAR_18;
  VAR_105 = VAR_51 | VAR_68 | VAR_32 |
   VAR_2;
  VAR_106 = VAR_28;
 } else if (VAR_87 <= 15) {
  VAR_87 = 16;
  VAR_104 = VAR_14;
  VAR_105 = VAR_48 | VAR_65 | VAR_29 |
   VAR_2;
  VAR_106 = VAR_24;
 } else if (VAR_87 <= 16) {
  VAR_87 = 16;
  VAR_104 = VAR_15;
  VAR_105 = VAR_49 | VAR_66 | VAR_30 |
   VAR_2;
  VAR_106 = VAR_25;
 } else if (VAR_87 <= 24 && FUNC_3(VAR_52)) {
  VAR_87 = 24;
  VAR_104 = VAR_16;
  VAR_105 = VAR_51 | VAR_68 | VAR_32 |
   VAR_2;
  VAR_106 = VAR_26;
 } else if (VAR_87 <= 32) {
  VAR_87 = 32;
  VAR_104 = VAR_17;
  VAR_105 = VAR_50 | VAR_67 | VAR_31 |
   VAR_2;
  VAR_106 = VAR_27;
 } else
  FUNC_1("invalid bpp");

 VAR_107 = FUNC_9(VAR_80, VAR_83, VAR_87);

 if (VAR_84 * VAR_107 > VAR_77->fix.smem_len)
  FUNC_1("not enough video RAM");

 VAR_96 = VAR_88 & VAR_37 ? 0 : 1;
 VAR_102 = VAR_88 & VAR_38 ? 0 : 1;

 if ((VAR_81 > 1920) || (VAR_82 > 1200)) {
  FUNC_1("MACH64 chips are designed for max 1920x1200\n"
       "select another resolution.");
 }
 VAR_92 = VAR_91 + VAR_78->right_margin;
 VAR_93 = VAR_92 + VAR_78->hsync_len;
 VAR_94 = VAR_78->right_margin & 7;
 VAR_90 = VAR_93 + VAR_94 + VAR_78->left_margin;

 VAR_99 = VAR_98 + VAR_78->lower_margin;
 VAR_100 = VAR_99 + VAR_78->vsync_len;
 VAR_97 = VAR_100 + VAR_78->upper_margin;
 VAR_91 = (VAR_91 >> 3) - 1;
 VAR_92 = (VAR_92 >> 3) - 1;
 VAR_93 = (VAR_93 >> 3) - 1;
 VAR_90 = (VAR_90 >> 3) - 1;
 VAR_95 = VAR_93 - VAR_92;

 FUNC_2("h_disp too large", VAR_91, 0xff);
 FUNC_2("h_sync_strt too large", VAR_92, 0x1ff);

 if (VAR_95 > 0x1f)
  VAR_95 = 0x1f;
 FUNC_2("h_total too large", VAR_90, 0x1ff);

 if (VAR_89 & VAR_39) {
  VAR_98 <<= 1;
  VAR_99 <<= 1;
  VAR_100 <<= 1;
  VAR_97 <<= 1;
 }

 VAR_98--;
 VAR_99--;
 VAR_100--;
 VAR_97--;
 VAR_101 = VAR_100 - VAR_99;

 FUNC_2("v_disp too large", VAR_98, 0x7ff);
 FUNC_2("v_sync_stsrt too large", VAR_99, 0x7ff);

 if (VAR_101 > 0x1f)
  VAR_101 = 0x1f;
 FUNC_2("v_total too large", VAR_97, 0x7ff);

 VAR_103 = VAR_88 & VAR_36 ? VAR_7 : 0;


 VAR_79->vxres = VAR_83;
 VAR_79->vyres = VAR_84;
 VAR_79->xoffset = VAR_85;
 VAR_79->yoffset = VAR_86;
 VAR_79->bpp = VAR_87;
 VAR_79->off_pitch =
  ((VAR_86 * VAR_107 + VAR_85 * VAR_87 / 8) / 8) |
  ((VAR_107 / VAR_87) << 22);
 VAR_79->vline_crnt_vline = 0;

 VAR_79->h_tot_disp = VAR_90 | (VAR_91 << 16);
 VAR_79->h_sync_strt_wid = (VAR_92 & 0xff) | (VAR_94 << 8) |
  ((VAR_92 & 0x100) << 4) | (VAR_95 << 16) |
  (VAR_96 << 21);
 VAR_79->v_tot_disp = VAR_97 | (VAR_98 << 16);
 VAR_79->v_sync_strt_wid = VAR_99 | (VAR_101 << 16) |
  (VAR_102 << 21);


 VAR_79->gen_cntl = VAR_10 | VAR_9 | VAR_104 | VAR_103;
 VAR_79->gen_cntl |= VAR_20;


 if (VAR_89 & VAR_39)
  VAR_79->gen_cntl |= VAR_8;

 if (VAR_89 & VAR_40)
  VAR_79->gen_cntl |= VAR_13;
 if (FUNC_3(VAR_61)) {

  VAR_79->gen_cntl |= (FUNC_7(VAR_12, VAR_80) & VAR_11);
 }
 VAR_79->dp_pix_width = VAR_105;
 VAR_79->dp_chain_mask = VAR_106;

 return 0;
}
