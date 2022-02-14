
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i740fb_par {int video_clk2_m; int video_clk2_n; int video_clk2_mn_msbs; int video_clk2_div_sel; int pixelpipe_cfg0; int misc; int* seq; int* crtc; int* gdc; int* atc; int ext_vert_total; int ext_vert_disp_end; int ext_vert_sync_start; int ext_vert_blank_start; int ext_horiz_total; int ext_horiz_blank; int ext_offset; int ext_start_addr_hi; int ext_start_addr; int interlace_cntl; int address_mapping; int bitblt_cntl; int display_cntl; int pixelpipe_cfg2; int pll_cntl; int pixelpipe_cfg1; int lmi_fifo_watermark; int io_cntl; scalar_t__ regs; } ;
struct TYPE_3__ {int line_length; int visual; } ;
struct TYPE_4__ {int xres_virtual; int bits_per_pixel; } ;
struct fb_info {TYPE_1__ fix; TYPE_2__ var; int screen_size; int screen_base; struct i740fb_par* par; } ;


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
 scalar_t__ VAR_25 ;
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
 size_t VAR_43 ;
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
 size_t VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int FUNC_0 (TYPE_2__*,struct i740fb_par*,struct fb_info*) ;
 int FUNC_1 (struct i740fb_par*,int) ;
 int FUNC_2 (struct i740fb_par*,int,int) ;
 int FUNC_3 (struct i740fb_par*,int ,int,int) ;
 int FUNC_4 (struct i740fb_par*,int ,int ,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct i740fb_par*) ;
 int FUNC_9 (struct i740fb_par*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct fb_info *VAR_59)
{
 struct i740fb_par *VAR_60 = VAR_59->par;
 u32 VAR_61;
 int VAR_62;

 VAR_62 = FUNC_0(&VAR_59->var, VAR_60, VAR_59);
 if (VAR_62)
  return VAR_62;

 FUNC_6(VAR_59->screen_base, 0, VAR_59->screen_size);

 FUNC_8(VAR_60);

 FUNC_3(VAR_60, VAR_58, VAR_9, VAR_11);

 FUNC_5(1);

 FUNC_3(VAR_60, VAR_58, VAR_38, VAR_60->video_clk2_m);
 FUNC_3(VAR_60, VAR_58, VAR_40, VAR_60->video_clk2_n);
 FUNC_3(VAR_60, VAR_58, VAR_39, VAR_60->video_clk2_mn_msbs);
 FUNC_3(VAR_60, VAR_58, VAR_37, VAR_60->video_clk2_div_sel);

 FUNC_4(VAR_60, VAR_58, VAR_33,
   VAR_60->pixelpipe_cfg0 & VAR_5, 0x80);

 FUNC_1(VAR_60, 0x3DA);
 FUNC_2(VAR_60, 0x3C0, 0x00);


 FUNC_2(VAR_60, VAR_49, VAR_60->misc | 0x01);


 FUNC_3(VAR_60, VAR_55, VAR_56, 0x01);

 FUNC_3(VAR_60, VAR_55, VAR_54,
   VAR_60->seq[VAR_54] | 0x20);
 for (VAR_62 = 2; VAR_62 < VAR_53; VAR_62++)
  FUNC_3(VAR_60, VAR_55, VAR_62, VAR_60->seq[VAR_62]);


 FUNC_3(VAR_60, VAR_55, VAR_56, 0x03);


 FUNC_3(VAR_60, VAR_45, VAR_43,
   VAR_60->crtc[VAR_43]);


 for (VAR_62 = 0; VAR_62 < VAR_44; VAR_62++)
  FUNC_3(VAR_60, VAR_45, VAR_62, VAR_60->crtc[VAR_62]);


 for (VAR_62 = 0; VAR_62 < VAR_46; VAR_62++)
  FUNC_3(VAR_60, VAR_47, VAR_62, VAR_60->gdc[VAR_62]);


 for (VAR_62 = 0; VAR_62 < VAR_41; VAR_62++) {
  FUNC_1(VAR_60, VAR_48);
  FUNC_2(VAR_60, VAR_42, VAR_62);
  FUNC_2(VAR_60, VAR_42, VAR_60->atc[VAR_62]);
 }

 FUNC_1(VAR_60, VAR_48);
 FUNC_2(VAR_60, VAR_42, 0x20);

 FUNC_3(VAR_60, VAR_45, VAR_22, VAR_60->ext_vert_total);
 FUNC_3(VAR_60, VAR_45, VAR_20, VAR_60->ext_vert_disp_end);
 FUNC_3(VAR_60, VAR_45, VAR_21,
   VAR_60->ext_vert_sync_start);
 FUNC_3(VAR_60, VAR_45, VAR_19,
   VAR_60->ext_vert_blank_start);
 FUNC_3(VAR_60, VAR_45, VAR_15, VAR_60->ext_horiz_total);
 FUNC_3(VAR_60, VAR_45, VAR_14, VAR_60->ext_horiz_blank);
 FUNC_3(VAR_60, VAR_45, VAR_16, VAR_60->ext_offset);
 FUNC_3(VAR_60, VAR_45, VAR_18, VAR_60->ext_start_addr_hi);
 FUNC_3(VAR_60, VAR_45, VAR_17, VAR_60->ext_start_addr);

 FUNC_4(VAR_60, VAR_45, VAR_27,
   VAR_60->interlace_cntl, VAR_28);
 FUNC_4(VAR_60, VAR_58, VAR_0, VAR_60->address_mapping, 0x1F);
 FUNC_4(VAR_60, VAR_58, VAR_1, VAR_60->bitblt_cntl, VAR_3);
 FUNC_4(VAR_60, VAR_58, VAR_7,
   VAR_60->display_cntl, VAR_57 | VAR_26);
 FUNC_4(VAR_60, VAR_58, VAR_33, VAR_60->pixelpipe_cfg0, 0x9B);
 FUNC_4(VAR_60, VAR_58, VAR_35, VAR_60->pixelpipe_cfg2, 0x0C);

 FUNC_3(VAR_60, VAR_58, VAR_36, VAR_60->pll_cntl);

 FUNC_4(VAR_60, VAR_58, VAR_34,
   VAR_60->pixelpipe_cfg1, VAR_8);

 VAR_61 = FUNC_7(VAR_60->regs + VAR_25);
 VAR_61 &= ~(VAR_30 | VAR_31);
 VAR_61 |= VAR_60->lmi_fifo_watermark;
 FUNC_10(VAR_61, VAR_60->regs + VAR_25);

 FUNC_3(VAR_60, VAR_58, VAR_9, VAR_10);

 FUNC_4(VAR_60, VAR_32, VAR_4, 0, VAR_2);
 FUNC_4(VAR_60, VAR_58, VAR_29,
   VAR_60->io_cntl, VAR_12 | VAR_13);

 if (VAR_60->pixelpipe_cfg1 != VAR_6) {
  FUNC_2(VAR_60, VAR_52, 0xFF);
  FUNC_2(VAR_60, VAR_51, 0x00);
  for (VAR_62 = 0; VAR_62 < 256; VAR_62++) {
   VAR_61 = (VAR_60->pixelpipe_cfg0 & VAR_5) ? VAR_62 : VAR_62 >> 2;
   FUNC_2(VAR_60, VAR_50, VAR_61);
   FUNC_2(VAR_60, VAR_50, VAR_61);
   FUNC_2(VAR_60, VAR_50, VAR_61);
  }
 }


 FUNC_5(50);
 FUNC_9(VAR_60);

 VAR_59->fix.line_length =
   VAR_59->var.xres_virtual * VAR_59->var.bits_per_pixel / 8;
 if (VAR_59->var.bits_per_pixel == 8)
  VAR_59->fix.visual = VAR_23;
 else
  VAR_59->fix.visual = VAR_24;

 return 0;
}
