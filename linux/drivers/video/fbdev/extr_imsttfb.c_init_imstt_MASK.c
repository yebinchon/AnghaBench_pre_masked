
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct imstt_par {scalar_t__ ramdac; int* cmap_regs; int dc_regs; } ;
struct TYPE_8__ {int smem_len; int mmio_len; int line_length; int xpanstep; int ypanstep; int id; scalar_t__ ywrapstep; int visual; int type; int accel; } ;
struct TYPE_7__ {int length; } ;
struct TYPE_10__ {int xres; int xres_virtual; int yres; int yres_virtual; int bits_per_pixel; int pixclock; TYPE_1__ green; int accel_flags; } ;
struct fb_info {int flags; TYPE_2__ fix; int cmap; int * fbops; TYPE_4__ var; scalar_t__ screen_base; struct imstt_par* par; } ;
typedef int __u32 ;
struct TYPE_9__ {int addr; int value; } ;


 int FUNC_0 (TYPE_3__*) ;
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
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (struct imstt_par*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct fb_info*,char*,int ,int,int) ;
 int FUNC_6 (struct fb_info*) ;
 int FUNC_7 (struct imstt_par*) ;
 TYPE_3__* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_8 (int,int,TYPE_4__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_34 ;
 int FUNC_11 (char*,int,int,int) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (struct fb_info*) ;
 int FUNC_14 (struct imstt_par*) ;
 int FUNC_15 (struct imstt_par*) ;
 int FUNC_16 (struct fb_info*,int) ;
 int FUNC_17 (int ,char*,char*) ;
 TYPE_3__* VAR_35 ;
 int FUNC_18 (int ,int ,int) ;

__attribute__((used)) static void FUNC_19(struct fb_info *VAR_36)
{
 struct imstt_par *VAR_37 = VAR_36->par;
 __u32 VAR_38, VAR_39, *VAR_40, *VAR_41;

 VAR_39 = FUNC_12(VAR_37->dc_regs, VAR_22);
 if (VAR_37->ramdac == VAR_12)
  VAR_36->fix.smem_len = (VAR_39 & 0x0004) ? 0x400000 : 0x200000;
 else
  VAR_36->fix.smem_len = 0x800000;

 VAR_40 = (__u32 *)VAR_36->screen_base;
 VAR_41 = (__u32 *)(VAR_36->screen_base + VAR_36->fix.smem_len);
 while (VAR_40 < VAR_41)
  *VAR_40++ = 0;


 VAR_39 = FUNC_12(VAR_37->dc_regs, VAR_25);
 FUNC_18(VAR_37->dc_regs, VAR_25, VAR_39 & ~0x1);
 FUNC_18(VAR_37->dc_regs, VAR_23, 0);


 if (VAR_37->ramdac == VAR_12) {
  VAR_37->cmap_regs[VAR_21] = 0xff;
  FUNC_3();
  VAR_37->cmap_regs[VAR_19] = 0;
  FUNC_3();
  for (VAR_38 = 0; VAR_38 < FUNC_0(VAR_30); VAR_38++) {
   VAR_37->cmap_regs[VAR_20] = VAR_30[VAR_38].addr;
   FUNC_3();
   VAR_37->cmap_regs[VAR_18] = VAR_30[VAR_38].value;
   FUNC_3();
  }
 } else {
  for (VAR_38 = 0; VAR_38 < FUNC_0(VAR_35); VAR_38++) {
   VAR_37->cmap_regs[VAR_26] = VAR_35[VAR_38].addr;
   FUNC_3();
   VAR_37->cmap_regs[VAR_27] = VAR_35[VAR_38].value;
   FUNC_3();
  }
 }
 {
  VAR_36->var.xres = VAR_36->var.xres_virtual = VAR_14;
  VAR_36->var.yres = VAR_36->var.yres_virtual = VAR_15;
  VAR_36->var.bits_per_pixel = VAR_13;
 }

 if ((VAR_36->var.xres * VAR_36->var.yres) * (VAR_36->var.bits_per_pixel >> 3) > VAR_36->fix.smem_len
     || !(FUNC_2(VAR_37, VAR_36->var.xres, VAR_36->var.yres))) {
  FUNC_11("imsttfb: %ux%ux%u not supported\n", VAR_36->var.xres, VAR_36->var.yres, VAR_36->var.bits_per_pixel);
  FUNC_6(VAR_36);
  return;
 }

 FUNC_17(VAR_36->fix.id, "IMS TT (%s)", VAR_37->ramdac == VAR_12 ? "IBM" : "TVP");
 VAR_36->fix.mmio_len = 0x1000;
 VAR_36->fix.accel = VAR_8;
 VAR_36->fix.type = VAR_9;
 VAR_36->fix.visual = VAR_36->var.bits_per_pixel == 8 ? VAR_11
       : VAR_10;
 VAR_36->fix.line_length = VAR_36->var.xres * (VAR_36->var.bits_per_pixel >> 3);
 VAR_36->fix.xpanstep = 8;
 VAR_36->fix.ypanstep = 1;
 VAR_36->fix.ywrapstep = 0;

 VAR_36->var.accel_flags = VAR_7;



 if (VAR_36->var.green.length == 6)
  FUNC_15(VAR_37);
 else
  FUNC_14(VAR_37);
 FUNC_16(VAR_36, VAR_36->var.bits_per_pixel);

 VAR_36->var.pixclock = 1000000 / FUNC_7(VAR_37);

 VAR_36->fbops = &VAR_31;
 VAR_36->flags = VAR_3 |
                      VAR_4 |
               VAR_5 |
               VAR_6;

 FUNC_4(&VAR_36->cmap, 0, 0);

 if (FUNC_13(VAR_36) < 0) {
  FUNC_6(VAR_36);
  return;
 }

 VAR_39 = (FUNC_12(VAR_37->dc_regs, VAR_24) & 0x0f00) >> 8;
 FUNC_5(VAR_36, "%s frame buffer; %uMB vram; chip version %u\n",
  VAR_36->fix.id, VAR_36->fix.smem_len >> 20, VAR_39);
}
