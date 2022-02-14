
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u_short ;
typedef unsigned int u32 ;
struct TYPE_9__ {unsigned int offset; int length; } ;
struct TYPE_8__ {unsigned int offset; int length; } ;
struct TYPE_7__ {unsigned int offset; int length; } ;
struct TYPE_10__ {int bits_per_pixel; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; int grayscale; } ;
struct TYPE_6__ {int visual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_5__ var; TYPE_1__ fix; struct da8xx_fb_par* par; } ;
struct da8xx_fb_par {scalar_t__ v_palette_base; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct da8xx_fb_par*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(unsigned VAR_5, unsigned VAR_6, unsigned VAR_7,
         unsigned VAR_8, unsigned VAR_9,
         struct fb_info *VAR_10)
{
 struct da8xx_fb_par *VAR_11 = VAR_10->par;
 unsigned short *VAR_12 = (unsigned short *) VAR_11->v_palette_base;
 u_short VAR_13;
 int VAR_14 = 0;

 if (VAR_5 > 255)
  return 1;

 if (VAR_10->fix.visual == VAR_1)
  return 1;

 if (VAR_10->var.bits_per_pixel > 16 && VAR_4 == VAR_2)
  return -VAR_0;

 switch (VAR_10->fix.visual) {
 case 128:
  VAR_6 = FUNC_0(VAR_6, VAR_10->var.red.length);
  VAR_7 = FUNC_0(VAR_7, VAR_10->var.green.length);
  VAR_8 = FUNC_0(VAR_8, VAR_10->var.blue.length);
  break;
 case 129:
  switch (VAR_10->var.bits_per_pixel) {
  case 4:
   if (VAR_5 > 15)
    return -VAR_0;

   if (VAR_10->var.grayscale) {
    VAR_13 = VAR_5;
   } else {
    VAR_6 >>= 4;
    VAR_7 >>= 8;
    VAR_8 >>= 12;

    VAR_13 = VAR_6 & 0x0f00;
    VAR_13 |= VAR_7 & 0x00f0;
    VAR_13 |= VAR_8 & 0x000f;
   }
   if (VAR_5 == 0)
    VAR_13 |= 0x2000;
   VAR_12[VAR_5] = VAR_13;
   break;

  case 8:
   VAR_6 >>= 4;
   VAR_7 >>= 8;
   VAR_8 >>= 12;

   VAR_13 = (VAR_6 & 0x0f00);
   VAR_13 |= (VAR_7 & 0x00f0);
   VAR_13 |= (VAR_8 & 0x000f);

   if (VAR_12[VAR_5] != VAR_13) {
    VAR_14 = 1;
    VAR_12[VAR_5] = VAR_13;
   }
   break;
  }
  break;
 }


 if (VAR_10->fix.visual == 128) {
  u32 VAR_15;

  if (VAR_5 > 15)
   return -VAR_0;

  VAR_15 = (VAR_6 << VAR_10->var.red.offset) |
   (VAR_7 << VAR_10->var.green.offset) |
   (VAR_8 << VAR_10->var.blue.offset);

  ((u32 *) (VAR_10->pseudo_palette))[VAR_5] = VAR_15;
  if (VAR_12[0] != 0x4000) {
   VAR_14 = 1;
   VAR_12[0] = 0x4000;
  }
 }


 if (VAR_14)
  FUNC_1(VAR_3, VAR_11);

 return 0;
}
