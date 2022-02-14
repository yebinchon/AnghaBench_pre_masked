
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh7760fb_par {TYPE_2__* pd; scalar_t__ base; scalar_t__ rot; scalar_t__ fbdma; } ;
struct fb_videomode {int xres; unsigned short right_margin; unsigned short hsync_len; unsigned short left_margin; unsigned short lower_margin; unsigned short yres; unsigned short vsync_len; unsigned short upper_margin; int sync; } ;
struct TYPE_3__ {unsigned long line_length; } ;
struct fb_info {int dev; int var; TYPE_1__ fix; struct sh7760fb_par* par; } ;
struct TYPE_4__ {int lddfr; unsigned short ldmtr; unsigned long ldickr; unsigned long ldpmmr; unsigned long ldpspr; unsigned long ldaclnr; scalar_t__ rotate; struct fb_videomode* def_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (int ,struct fb_info*) ;
 int FUNC_4 (int *,struct fb_info*) ;
 int FUNC_5 (int ,int,int*,int*) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_23)
{
 struct sh7760fb_par *VAR_24 = VAR_23->par;
 struct fb_videomode *VAR_25 = VAR_24->pd->def_mode;
 unsigned long VAR_26, VAR_27, VAR_28, VAR_29;
 unsigned short VAR_30, VAR_31, VAR_32, VAR_33;
 unsigned short VAR_34, VAR_35, VAR_36, VAR_37;
 unsigned short VAR_38, VAR_39;
 int VAR_40, VAR_41, VAR_42;

 VAR_24->rot = VAR_24->pd->rotate;


 if (VAR_24->rot && (VAR_25->xres > 320)) {
  FUNC_0(VAR_23->dev, "rotation disabled due to display size\n");
  VAR_24->rot = 0;
 }


 VAR_30 = VAR_25->right_margin + VAR_25->xres;
 VAR_31 = VAR_25->hsync_len;
 VAR_32 = VAR_25->left_margin + VAR_30 + VAR_31;
 VAR_33 = VAR_25->xres;
 VAR_34 = VAR_25->lower_margin + VAR_25->yres;
 VAR_35 = VAR_25->vsync_len;
 VAR_36 = VAR_25->upper_margin + VAR_34 + VAR_35;
 VAR_37 = VAR_25->yres;


 VAR_40 = FUNC_5(VAR_23->dev, VAR_24->pd->lddfr, &VAR_41, &VAR_42);
 if (VAR_40)
  return VAR_40;

 FUNC_0(VAR_23->dev, "%dx%d %dbpp %s (orientation %s)\n", VAR_33,
  VAR_37, VAR_41, VAR_42 ? "grayscale" : "color",
  VAR_24->rot ? "rotated" : "normal");




 VAR_38 = VAR_24->pd->lddfr & ~(1 << 8);


 VAR_39 = VAR_24->pd->ldmtr;

 if (!(VAR_25->sync & VAR_2))
  VAR_39 |= VAR_11;
 if (!(VAR_25->sync & VAR_3))
  VAR_39 |= VAR_14;


 FUNC_3(VAR_0, VAR_23);

 FUNC_1(VAR_24->pd->ldickr, VAR_24->base + VAR_8);
 FUNC_1(VAR_39, VAR_24->base + VAR_10);
 FUNC_1(VAR_38, VAR_24->base + VAR_5);
 FUNC_1((VAR_24->rot ? 1 << 13 : 0), VAR_24->base + VAR_19);
 FUNC_1(VAR_24->pd->ldpmmr, VAR_24->base + VAR_15);
 FUNC_1(VAR_24->pd->ldpspr, VAR_24->base + VAR_16);


 FUNC_1(((VAR_32 >> 3) - 1) | (((VAR_33 >> 3) - 1) << 8),
    VAR_24->base + VAR_6);
 FUNC_1(VAR_37 - 1, VAR_24->base + VAR_20);
 FUNC_1(VAR_36 - 1, VAR_24->base + VAR_22);

 FUNC_1((VAR_34 - 1) | ((VAR_35 - 1) << 12), VAR_24->base + VAR_21);
 FUNC_1(((VAR_30 >> 3) - 1) | (((VAR_31 >> 3) - 1) << 12),
    VAR_24->base + VAR_7);

 FUNC_1(VAR_24->pd->ldaclnr, VAR_24->base + VAR_4);

 VAR_29 = (VAR_24->rot) ? VAR_36 : VAR_33;
 if (!VAR_42)
  VAR_29 *= (VAR_41 + 7) >> 3;
 else {
  if (VAR_41 == 1)
   VAR_29 >>= 3;
  else if (VAR_41 == 2)
   VAR_29 >>= 2;
  else if (VAR_41 == 4)
   VAR_29 >>= 1;

 }


 if (VAR_24->rot) {
  unsigned long VAR_43 = 1 << 31;
  while (VAR_43) {
   if (VAR_29 & VAR_43)
    break;
   VAR_43 >>= 1;
  }
  if (VAR_29 & ~VAR_43)
   VAR_29 = VAR_43 << 1;
 }
 FUNC_1(VAR_29, VAR_24->base + VAR_9);


 VAR_26 = (unsigned long)VAR_24->fbdma;
 if (VAR_24->rot)
  VAR_26 += (VAR_33 - 1) * VAR_29;

 FUNC_2(VAR_26, VAR_24->base + VAR_18);






 if (((VAR_39 & 0x003f) >= VAR_13) &&
     ((VAR_39 & 0x003f) <= VAR_12)) {

  FUNC_0(VAR_23->dev, " ***** DSTN untested! *****\n");

  VAR_27 = VAR_29;
  if (VAR_24->rot)
   VAR_27 *= VAR_33 >> 1;
  else
   VAR_27 *= VAR_37 >> 1;

  VAR_28 = VAR_26 + VAR_27;
 } else
  VAR_28 = 0;

 FUNC_2(VAR_28, VAR_24->base + VAR_17);

 VAR_23->fix.line_length = VAR_29;

 FUNC_4(&VAR_23->var, VAR_23);

 FUNC_3(VAR_1, VAR_23);

 FUNC_0(VAR_23->dev, "hdcn  : %6d htcn  : %6d\n", VAR_33, VAR_32);
 FUNC_0(VAR_23->dev, "hsynw : %6d hsynp : %6d\n", VAR_31, VAR_30);
 FUNC_0(VAR_23->dev, "vdln  : %6d vtln  : %6d\n", VAR_37, VAR_36);
 FUNC_0(VAR_23->dev, "vsynw : %6d vsynp : %6d\n", VAR_35, VAR_34);
 FUNC_0(VAR_23->dev, "clksrc: %6d clkdiv: %6d\n",
  (VAR_24->pd->ldickr >> 12) & 3, VAR_24->pd->ldickr & 0x1f);
 FUNC_0(VAR_23->dev, "ldpmmr: 0x%04x ldpspr: 0x%04x\n", VAR_24->pd->ldpmmr,
  VAR_24->pd->ldpspr);
 FUNC_0(VAR_23->dev, "ldmtr : 0x%04x lddfr : 0x%04x\n", VAR_39, VAR_38);
 FUNC_0(VAR_23->dev, "ldlaor: %ld\n", VAR_29);
 FUNC_0(VAR_23->dev, "ldsaru: 0x%08lx ldsarl: 0x%08lx\n", VAR_26, VAR_28);

 return 0;
}
