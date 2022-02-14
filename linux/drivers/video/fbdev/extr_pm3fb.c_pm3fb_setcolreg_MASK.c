
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int u32 ;
struct pm3_par {int dummy; } ;
struct TYPE_12__ {scalar_t__ visual; } ;
struct TYPE_10__ {unsigned int offset; int length; } ;
struct TYPE_9__ {unsigned int offset; int length; } ;
struct TYPE_8__ {unsigned int offset; int length; } ;
struct TYPE_7__ {unsigned int offset; int length; } ;
struct TYPE_11__ {int bits_per_pixel; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; scalar_t__ grayscale; } ;
struct fb_info {TYPE_6__ fix; scalar_t__ pseudo_palette; TYPE_5__ var; struct pm3_par* par; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct pm3_par*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_4, unsigned VAR_5, unsigned VAR_6,
      unsigned VAR_7, unsigned VAR_8,
      struct fb_info *VAR_9)
{
 struct pm3_par *VAR_10 = VAR_9->par;

 if (VAR_4 >= 256)
    return -VAR_0;



 if (VAR_9->var.grayscale)
    VAR_5 = VAR_6 = VAR_7 = (VAR_5 * 77 + VAR_6 * 151 + VAR_7 * 28) >> 8;
 VAR_5 = ((((VAR_5) << (VAR_9->var.red.length)) + 0x7FFF - (VAR_5)) >> 16);
 VAR_6 = ((((VAR_6) << (VAR_9->var.green.length)) + 0x7FFF - (VAR_6)) >> 16);
 VAR_7 = ((((VAR_7) << (VAR_9->var.blue.length)) + 0x7FFF - (VAR_7)) >> 16);
 VAR_8 = ((((VAR_8) << (VAR_9->var.transp.length)) + 0x7FFF - (VAR_8)) >> 16);


 if (VAR_9->fix.visual == VAR_3 ||
 VAR_9->fix.visual == VAR_1) {
  u32 VAR_11;

  if (VAR_4 >= 16)
   return -VAR_0;

  VAR_11 = (VAR_5 << VAR_9->var.red.offset) |
   (VAR_6 << VAR_9->var.green.offset) |
   (VAR_7 << VAR_9->var.blue.offset) |
   (VAR_8 << VAR_9->var.transp.offset);

  switch (VAR_9->var.bits_per_pixel) {
  case 8:
   break;
  case 16:
  case 32:
   ((u32 *)(VAR_9->pseudo_palette))[VAR_4] = VAR_11;
   break;
  }
  return 0;
 } else if (VAR_9->fix.visual == VAR_2)
  FUNC_1(VAR_10, VAR_4, VAR_5, VAR_6, VAR_7);

 return 0;
}
