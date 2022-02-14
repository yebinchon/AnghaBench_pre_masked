
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int width; int height; } ;
struct gbefb_par {TYPE_3__ timing; } ;
struct TYPE_7__ {int line_length; void* visual; } ;
struct TYPE_11__ {int bits_per_pixel; int xres_virtual; } ;
struct fb_info {TYPE_1__ fix; TYPE_5__ var; scalar_t__ par; } ;
struct TYPE_10__ {unsigned int* mode_regs; int vt_intr01; int vt_intr23; unsigned int frm_control; unsigned int frm_size_tile; unsigned int frm_size_pixel; int* gmap; scalar_t__ crs_ctl; scalar_t__ ovr_width_tile; scalar_t__ did_control; } ;
struct TYPE_8__ {int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
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
 int FUNC_0 (int ,int ,unsigned int,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*) ;
 TYPE_4__* VAR_22 ;
 int* VAR_23 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_2__ VAR_24 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct fb_info *VAR_25)
{
 int VAR_26;
 unsigned int VAR_27;
 int VAR_28, VAR_29, VAR_30;
 int VAR_31;
 int VAR_32, VAR_33;
 int VAR_34;
 struct gbefb_par *VAR_35 = (struct gbefb_par *) VAR_25->par;

 FUNC_1(&VAR_25->var, &VAR_35->timing);

 VAR_34 = VAR_25->var.bits_per_pixel / 8;
 VAR_25->fix.line_length = VAR_25->var.xres_virtual * VAR_34;
 VAR_32 = VAR_35->timing.width;
 VAR_33 = VAR_35->timing.height;


 FUNC_4();


 FUNC_3(&VAR_35->timing);


 VAR_27 = 0;
 switch (VAR_34) {
 case 1:
  FUNC_0(VAR_21, VAR_20, VAR_27, VAR_15);
  VAR_25->fix.visual = VAR_2;
  break;
 case 2:
  FUNC_0(VAR_21, VAR_20, VAR_27, VAR_14);
  VAR_25->fix.visual = VAR_3;
  break;
 case 4:
  FUNC_0(VAR_21, VAR_20, VAR_27, VAR_16);
  VAR_25->fix.visual = VAR_3;
  break;
 }
 FUNC_0(VAR_21, VAR_0, VAR_27, VAR_13);

 for (VAR_26 = 0; VAR_26 < 32; VAR_26++)
  VAR_22->mode_regs[VAR_26] = VAR_27;


 VAR_22->vt_intr01 = 0xffffffff;
 VAR_22->vt_intr23 = 0xffffffff;
 VAR_27 = 0;
 FUNC_0(VAR_4, VAR_11, VAR_27, VAR_24.dma >> 9);
 FUNC_0(VAR_4, VAR_6, VAR_27, 0);
 FUNC_0(VAR_4, VAR_7, VAR_27, 0);
 VAR_22->frm_control = VAR_27;

 VAR_30 = 512 / VAR_34;
 VAR_28 = 1;
 VAR_29 = 0;


 VAR_27 = 0;
 FUNC_0(VAR_10, VAR_12, VAR_27, VAR_28);
 FUNC_0(VAR_10, VAR_8, VAR_27, VAR_29);

 switch (VAR_34) {
 case 1:
  FUNC_0(VAR_10, VAR_5, VAR_27,
         VAR_19);
  break;
 case 2:
  FUNC_0(VAR_10, VAR_5, VAR_27,
         VAR_17);
  break;
 case 4:
  FUNC_0(VAR_10, VAR_5, VAR_27,
         VAR_18);
  break;
 }
 VAR_22->frm_size_tile = VAR_27;


 VAR_31 = VAR_32 * VAR_33 / VAR_30;

 VAR_27 = 0;
 FUNC_0(VAR_9, VAR_1, VAR_27, VAR_31);
 VAR_22->frm_size_pixel = VAR_27;


 VAR_22->did_control = 0;
 VAR_22->ovr_width_tile = 0;


 VAR_22->crs_ctl = 0;


 FUNC_5();


 FUNC_6(10);
 for (VAR_26 = 0; VAR_26 < 256; VAR_26++)
  VAR_22->gmap[VAR_26] = (VAR_26 << 24) | (VAR_26 << 16) | (VAR_26 << 8);


 for (VAR_26 = 0; VAR_26 < 256; VAR_26++)
  VAR_23[VAR_26] = (VAR_26 << 8) | (VAR_26 << 16) | (VAR_26 << 24);

 FUNC_2();

 return 0;
}
