
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int offset; } ;
struct intelfb_info {int pitch; TYPE_1__ fb; int pll_index; } ;
struct intelfb_hwstate {int dpll_b; int fpb0; int fpb1; int hsync_b; int hblank_b; int htotal_b; int vsync_b; int vblank_b; int vtotal_b; int src_size_b; int pipe_b_conf; int dpll_a; int fpa0; int fpa1; int hsync_a; int hblank_a; int htotal_a; int vsync_a; int vblank_a; int vtotal_a; int src_size_a; int pipe_a_conf; int adpa; int disp_a_ctrl; int disp_a_stride; int disp_a_base; int dvoc; int dvob; int vgacntrl; } ;
struct fb_var_screeninfo {int sync; int pixclock; int xres; int right_margin; int hsync_len; int left_margin; int yres; int vmode; int lower_margin; int vsync_len; int upper_margin; int yoffset; int xoffset; int bits_per_pixel; } ;


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
 int FUNC_0 (char*,...) ;
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
 scalar_t__ FUNC_1 (struct intelfb_info*) ;
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
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ,int,int*,int*,int*,int*,int*,int*) ;
 scalar_t__ FUNC_4 (int,int,char*) ;
 int FUNC_5 (struct fb_var_screeninfo*) ;
 int FUNC_6 (struct intelfb_hwstate*) ;

int FUNC_7(struct intelfb_info *VAR_70,
    struct intelfb_hwstate *VAR_71,
    struct fb_var_screeninfo *VAR_72)
{
 int VAR_73 = FUNC_6(VAR_71);
 u32 *VAR_74, *VAR_75, *VAR_76;
 u32 VAR_77, VAR_78, VAR_79, VAR_80, VAR_81, VAR_82, VAR_83;
 u32 VAR_84, VAR_85, VAR_86, VAR_87, VAR_88, VAR_89;
 u32 VAR_90, VAR_91, VAR_92, VAR_93, VAR_94, VAR_95;
 u32 VAR_96, VAR_97;
 u32 *VAR_98, *VAR_99, *VAR_100, *VAR_101, *VAR_102, *VAR_103, *VAR_104, *VAR_105;
 u32 VAR_106;

 FUNC_0("intelfbhw_mode_to_hw\n");


 VAR_71->vgacntrl |= VAR_63;


 if (VAR_73 == VAR_51) {
  VAR_74 = &VAR_71->dpll_b;
  VAR_75 = &VAR_71->fpb0;
  VAR_76 = &VAR_71->fpb1;
  VAR_101 = &VAR_71->hsync_b;
  VAR_102 = &VAR_71->hblank_b;
  VAR_103 = &VAR_71->htotal_b;
  VAR_98 = &VAR_71->vsync_b;
  VAR_99 = &VAR_71->vblank_b;
  VAR_100 = &VAR_71->vtotal_b;
  VAR_104 = &VAR_71->src_size_b;
  VAR_105 = &VAR_71->pipe_b_conf;
 } else {
  VAR_74 = &VAR_71->dpll_a;
  VAR_75 = &VAR_71->fpa0;
  VAR_76 = &VAR_71->fpa1;
  VAR_101 = &VAR_71->hsync_a;
  VAR_102 = &VAR_71->hblank_a;
  VAR_103 = &VAR_71->htotal_a;
  VAR_98 = &VAR_71->vsync_a;
  VAR_99 = &VAR_71->vblank_a;
  VAR_100 = &VAR_71->vtotal_a;
  VAR_104 = &VAR_71->src_size_a;
  VAR_105 = &VAR_71->pipe_a_conf;
 }


 VAR_71->adpa &= ~VAR_8;


 VAR_97 = (VAR_72->sync & VAR_30) ?
   VAR_5 : VAR_6;
 VAR_96 = (VAR_72->sync & VAR_31) ?
   VAR_5 : VAR_6;
 VAR_71->adpa &= ~((VAR_7 << VAR_9) |
        (VAR_7 << VAR_3));
 VAR_71->adpa |= (VAR_97 << VAR_3) |
      (VAR_96 << VAR_9);


 VAR_71->adpa &= ~(VAR_52 << VAR_4);
 VAR_71->adpa |= (VAR_73 << VAR_4);


 VAR_71->adpa &= ~VAR_1;
 VAR_71->adpa |= VAR_2;

 VAR_71->adpa |= VAR_0;

 *VAR_74 |= (VAR_28 | VAR_29);
 *VAR_74 &= ~(VAR_25 | VAR_27);
 *VAR_74 |= (VAR_26 | VAR_24);


 VAR_82 = 1000000000 / VAR_72->pixclock;

 if (FUNC_3(VAR_70->pll_index, VAR_82, &VAR_77, &VAR_78,
       &VAR_79, &VAR_80, &VAR_81, &VAR_83)) {
  FUNC_2("calc_pll_params failed\n");
  return 1;
 }


 if (FUNC_4(VAR_80, VAR_20, "PLL P1 parameter"))
  return 1;
 if (FUNC_4(VAR_81, VAR_22, "PLL P2 parameter"))
  return 1;
 if (FUNC_4(VAR_77, VAR_33, "PLL M1 parameter"))
  return 1;
 if (FUNC_4(VAR_78, VAR_33, "PLL M2 parameter"))
  return 1;
 if (FUNC_4(VAR_79, VAR_33, "PLL N parameter"))
  return 1;

 *VAR_74 &= ~VAR_19;
 *VAR_74 &= ~((VAR_22 << VAR_23) |
     (VAR_20 << VAR_21));

 if (FUNC_1(VAR_70)) {
  *VAR_74 |= (VAR_81 << VAR_18);
  *VAR_74 |= (1 << (VAR_80 - 1)) << VAR_21;
 } else
  *VAR_74 |= (VAR_81 << VAR_23) | (VAR_80 << VAR_21);

 *VAR_75 = (VAR_79 << VAR_36) |
        (VAR_77 << VAR_34) |
        (VAR_78 << VAR_35);
 *VAR_76 = *VAR_75;

 VAR_71->dvob &= ~VAR_53;
 VAR_71->dvoc &= ~VAR_53;


 VAR_71->disp_a_ctrl |= VAR_16;
 VAR_71->disp_a_ctrl &= ~VAR_14;
 VAR_71->disp_a_ctrl &= ~VAR_15;
 switch (FUNC_5(VAR_72)) {
 case 8:
  VAR_71->disp_a_ctrl |= VAR_13 | VAR_14;
  break;
 case 15:
  VAR_71->disp_a_ctrl |= VAR_10;
  break;
 case 16:
  VAR_71->disp_a_ctrl |= VAR_11;
  break;
 case 24:
  VAR_71->disp_a_ctrl |= VAR_12;
  break;
 }
 VAR_71->disp_a_ctrl &= ~(VAR_52 << VAR_17);
 VAR_71->disp_a_ctrl |= (VAR_73 << VAR_17);


 VAR_89 = VAR_72->xres;
 VAR_84 = VAR_89 + VAR_72->right_margin;
 VAR_85 = VAR_84 + VAR_72->hsync_len;
 VAR_88 = VAR_85 + VAR_72->left_margin;
 VAR_86 = VAR_89;
 VAR_87 = VAR_88;

 FUNC_0("H: act %d, ss %d, se %d, tot %d bs %d, be %d\n",
  VAR_89, VAR_84, VAR_85, VAR_88, VAR_86,
  VAR_87);

 VAR_95 = VAR_72->yres;
 if (VAR_72->vmode & VAR_32)
  VAR_95--;
 VAR_90 = VAR_95 + VAR_72->lower_margin;
 VAR_91 = VAR_90 + VAR_72->vsync_len;
 VAR_94 = VAR_91 + VAR_72->upper_margin;
 VAR_92 = VAR_95;
 VAR_93 = VAR_91 + 1;

 FUNC_0("V: act %d, ss %d, se %d, tot %d bs %d, be %d\n",
  VAR_95, VAR_90, VAR_91, VAR_94, VAR_92,
  VAR_93);


 VAR_89--;
 if (FUNC_4(VAR_89, VAR_37, "CRTC hactive"))
  return 1;
 VAR_84--;
 if (FUNC_4(VAR_84, VAR_44, "CRTC hsync_start"))
  return 1;
 VAR_85--;
 if (FUNC_4(VAR_85, VAR_42, "CRTC hsync_end"))
  return 1;
 VAR_88--;
 if (FUNC_4(VAR_88, VAR_46, "CRTC htotal"))
  return 1;
 VAR_86--;
 if (FUNC_4(VAR_86, VAR_40, "CRTC hblank_start"))
  return 1;
 VAR_87--;
 if (FUNC_4(VAR_87, VAR_39, "CRTC hblank_end"))
  return 1;

 VAR_95--;
 if (FUNC_4(VAR_95, VAR_58, "CRTC vactive"))
  return 1;
 VAR_90--;
 if (FUNC_4(VAR_90, VAR_66, "CRTC vsync_start"))
  return 1;
 VAR_91--;
 if (FUNC_4(VAR_91, VAR_64, "CRTC vsync_end"))
  return 1;
 VAR_94--;
 if (FUNC_4(VAR_94, VAR_68, "CRTC vtotal"))
  return 1;
 VAR_92--;
 if (FUNC_4(VAR_92, VAR_61, "CRTC vblank_start"))
  return 1;
 VAR_93--;
 if (FUNC_4(VAR_93, VAR_60, "CRTC vblank_end"))
  return 1;

 *VAR_103 = (VAR_88 << VAR_47) | (VAR_89 << VAR_38);
 *VAR_102 = (VAR_86 << VAR_41) |
       (VAR_87 << VAR_43);
 *VAR_101 = (VAR_84 << VAR_45) | (VAR_85 << VAR_43);

 *VAR_100 = (VAR_94 << VAR_69) | (VAR_95 << VAR_59);
 *VAR_99 = (VAR_92 << VAR_62) |
       (VAR_93 << VAR_65);
 *VAR_98 = (VAR_90 << VAR_67) | (VAR_91 << VAR_65);
 *VAR_104 = (VAR_89 << VAR_54) |
       (VAR_95 << VAR_55);

 VAR_71->disp_a_stride = VAR_70->pitch;
 FUNC_0("pitch is %d\n", VAR_71->disp_a_stride);

 VAR_71->disp_a_base = VAR_71->disp_a_stride * VAR_72->yoffset +
     VAR_72->xoffset * VAR_72->bits_per_pixel / 8;

 VAR_71->disp_a_base += VAR_70->fb.offset << 12;


 VAR_106 = FUNC_1(VAR_70) ? VAR_57 :
         VAR_56;
 if (VAR_71->disp_a_stride % VAR_106 != 0) {
  FUNC_2("display stride %d has bad alignment %d\n",
   VAR_71->disp_a_stride, VAR_106);
  return 1;
 }


 *VAR_105 &= ~VAR_48;

 if (VAR_72->vmode & VAR_32)
  *VAR_105 |= VAR_50;
 else
  *VAR_105 &= ~VAR_49;

 return 0;
}
