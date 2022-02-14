
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fb_var_screeninfo {int bits_per_pixel; int accel_flags; scalar_t__ xres; scalar_t__ hsync_len; scalar_t__ left_margin; scalar_t__ yres; scalar_t__ lower_margin; scalar_t__ vsync_len; int xres_virtual; int upper_margin; int right_margin; int yres_virtual; } ;
struct TYPE_8__ {int smem_start; int visual; int line_length; } ;
struct fb_info {TYPE_1__ fix; int flags; TYPE_2__* fbops; struct fb_var_screeninfo var; scalar_t__ par; } ;
struct TYPE_12__ {int gen_cntl; int h_tot_disp; int v_tot_disp; int vxres; } ;
struct atyfb_par {int accel_flags; int mem_refresh_rate; scalar_t__ lcd_table; TYPE_5__ crtc; scalar_t__ aux_start; int pll; TYPE_4__* pll_ops; TYPE_3__* dac_ops; scalar_t__ blitter_may_be_busy; scalar_t__ asleep; } ;
typedef int debug ;
struct TYPE_11__ {int (* var_to_pll ) (struct fb_info*,scalar_t__,int,int *) ;scalar_t__ (* pll_to_var ) (struct fb_info*,int *) ;int (* set_pll ) (struct fb_info*,int *) ;} ;
struct TYPE_10__ {int (* set_dac ) (struct fb_info*,int *,int,int) ;} ;
struct TYPE_9__ {int * fb_sync; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (char*) ;
 int VAR_20 ;
 int FUNC_3 (TYPE_5__*,struct fb_var_screeninfo*) ;
 int FUNC_4 (struct atyfb_par*,struct fb_info*) ;
 int FUNC_5 (int,struct atyfb_par*) ;
 int FUNC_6 (int,struct atyfb_par*) ;
 int FUNC_7 (int,struct atyfb_par*) ;
 int FUNC_8 (struct atyfb_par*,TYPE_5__*) ;
 int FUNC_9 (int ,int,struct atyfb_par*) ;
 int FUNC_10 (int,scalar_t__,struct atyfb_par*) ;
 int FUNC_11 (struct fb_info*,struct fb_var_screeninfo*,TYPE_5__*) ;
 scalar_t__ FUNC_12 (struct fb_var_screeninfo*,struct atyfb_par*) ;
 int * VAR_21 ;
 int FUNC_13 (int ,int,int,int,int) ;
 int FUNC_14 (struct atyfb_par*,int ,int) ;
 int * VAR_22 ;
 int FUNC_15 (struct fb_var_screeninfo*,int ,int) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (struct fb_info*,scalar_t__,int,int *) ;
 int FUNC_19 (struct fb_info*,int *,int,int) ;
 int FUNC_20 (struct fb_info*,int *) ;
 scalar_t__ FUNC_21 (struct fb_info*,int *) ;
 int FUNC_22 (struct atyfb_par*) ;

__attribute__((used)) static int FUNC_23(struct fb_info *VAR_23)
{
 struct atyfb_par *VAR_24 = (struct atyfb_par *) VAR_23->par;
 struct fb_var_screeninfo *VAR_25 = &VAR_23->var;
 u32 VAR_26, VAR_27;
 int VAR_28;




 if (VAR_24->asleep)
  return 0;

 VAR_28 = FUNC_11(VAR_23, VAR_25, &VAR_24->crtc);
 if (VAR_28)
  return VAR_28;

 VAR_27 = FUNC_12(VAR_25, VAR_24);

 if (VAR_27 == 0) {
  FUNC_2("Invalid pixclock\n");
  return -VAR_7;
 } else {
  VAR_28 = VAR_24->pll_ops->var_to_pll(VAR_23, VAR_27,
            VAR_25->bits_per_pixel, &VAR_24->pll);
  if (VAR_28)
   return VAR_28;
 }

 VAR_24->accel_flags = VAR_25->accel_flags;

 if (VAR_25->accel_flags) {
  VAR_23->fbops->fb_sync = VAR_21;
  VAR_23->flags &= ~VAR_10;
 } else {
  VAR_23->fbops->fb_sync = ((void*)0);
  VAR_23->flags |= VAR_10;
 }

 if (VAR_24->blitter_may_be_busy)
  FUNC_22(VAR_24);

 FUNC_8(VAR_24, &VAR_24->crtc);
 VAR_24->dac_ops->set_dac(VAR_23, &VAR_24->pll,
         VAR_25->bits_per_pixel, VAR_24->accel_flags);
 VAR_24->pll_ops->set_pll(VAR_23, &VAR_24->pll);
 if (!FUNC_1(VAR_14)) {

  VAR_26 = FUNC_6(VAR_17, VAR_24) & 0xf0ffffff;
  switch (VAR_25->bits_per_pixel) {
  case 8:
   VAR_26 |= 0x02000000;
   break;
  case 16:
   VAR_26 |= 0x03000000;
   break;
  case 32:
   VAR_26 |= 0x06000000;
   break;
  }
  FUNC_10(VAR_17, VAR_26, VAR_24);
 } else {
  VAR_26 = FUNC_6(VAR_17, VAR_24) & 0xf00fffff;
  if (!FUNC_1(VAR_16))
   VAR_26 |= VAR_24->mem_refresh_rate << 20;
  switch (VAR_25->bits_per_pixel) {
  case 8:
  case 24:
   VAR_26 |= 0x00000000;
   break;
  case 16:
   VAR_26 |= 0x04000000;
   break;
  case 32:
   VAR_26 |= 0x08000000;
   break;
  }
  if (FUNC_1(VAR_4)) {
   FUNC_10(VAR_5, 0x87010184, VAR_24);
   FUNC_10(VAR_1, 0x680000f9, VAR_24);
  } else if (FUNC_1(VAR_20)) {
   FUNC_10(VAR_5, 0x87010184, VAR_24);
   FUNC_10(VAR_1, 0x680000f9, VAR_24);
  } else if (FUNC_1(VAR_18)) {
   FUNC_10(VAR_5, 0x80010102, VAR_24);
   FUNC_10(VAR_1, 0x7b33a040 | (VAR_24->aux_start ? VAR_0 : 0), VAR_24);
  } else {

   FUNC_10(VAR_5, 0x86010102, VAR_24);
   FUNC_10(VAR_1, 0x7b23a040 | (VAR_24->aux_start ? VAR_0 : 0), VAR_24);
   FUNC_10(VAR_8, FUNC_6(VAR_8, VAR_24) | 0x5000001, VAR_24);
  }
  FUNC_10(VAR_17, VAR_26, VAR_24);
 }
 FUNC_9(VAR_6, 0xff, VAR_24);

 VAR_23->fix.line_length = FUNC_14(VAR_24, VAR_25->xres_virtual,
       VAR_25->bits_per_pixel);

 VAR_23->fix.visual = VAR_25->bits_per_pixel <= 8 ?
  VAR_13 : VAR_12;


 if (VAR_24->accel_flags & VAR_11)
  FUNC_4(VAR_24, VAR_23);
 return 0;
}
