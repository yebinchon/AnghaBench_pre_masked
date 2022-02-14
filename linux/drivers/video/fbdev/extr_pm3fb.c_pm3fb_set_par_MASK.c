
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pm3_par {int video; int base; } ;
struct TYPE_4__ {int xres; unsigned int bits_per_pixel; int const yoffset; int sync; int vmode; int activate; int xres_virtual; scalar_t__ xoffset; } ;
struct TYPE_3__ {int line_length; int visual; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct pm3_par* par; } ;


 int FUNC_0 (char*) ;
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
 int FUNC_1 (struct pm3_par*,int ,int ) ;
 int FUNC_2 (struct pm3_par*,int ,int ,int ) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (unsigned int const,scalar_t__) ;
 int FUNC_5 (struct fb_info*) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_18)
{
 struct pm3_par *VAR_19 = VAR_18->par;
 const u32 VAR_20 = (VAR_18->var.xres + 31) & ~31;
 const unsigned VAR_21 = VAR_18->var.bits_per_pixel;

 VAR_19->base = FUNC_4(VAR_21, (VAR_18->var.yoffset * VAR_20)
     + VAR_18->var.xoffset);
 VAR_19->video = 0;

 if (VAR_18->var.sync & VAR_2)
  VAR_19->video |= VAR_10;
 else
  VAR_19->video |= VAR_11;

 if (VAR_18->var.sync & VAR_3)
  VAR_19->video |= VAR_16;
 else
  VAR_19->video |= VAR_17;

 if ((VAR_18->var.vmode & VAR_7) == VAR_6)
  VAR_19->video |= VAR_12;

 if ((VAR_18->var.activate & VAR_0) == VAR_1)
  VAR_19->video |= VAR_9;
 else
  FUNC_0("PM3Video disabled\n");

 switch (VAR_21) {
 case 8:
  VAR_19->video |= VAR_15;
  break;
 case 16:
  VAR_19->video |= VAR_13;
  break;
 case 32:
  VAR_19->video |= VAR_14;
  break;
 default:
  FUNC_0("Unsupported depth\n");
  break;
 }

 VAR_18->fix.visual =
  (VAR_21 == 8) ? VAR_4 : VAR_5;
 VAR_18->fix.line_length = ((VAR_18->var.xres_virtual + 7) >> 3) * VAR_21;


 FUNC_2(VAR_19, 0, 0, 0);
 FUNC_1(VAR_19, VAR_8, 0);
 FUNC_3(VAR_18);
 FUNC_5(VAR_18);
 return 0;
}
