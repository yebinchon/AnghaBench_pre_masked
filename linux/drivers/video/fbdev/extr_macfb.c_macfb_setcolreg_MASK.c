
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_9__ {unsigned int offset; } ;
struct TYPE_8__ {unsigned int offset; } ;
struct TYPE_7__ {int offset; } ;
struct TYPE_10__ {int bits_per_pixel; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct TYPE_6__ {unsigned int len; } ;
struct fb_info {TYPE_5__ var; scalar_t__ pseudo_palette; TYPE_1__ cmap; } ;


 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int,struct fb_info*) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      struct fb_info *VAR_5)
{







 if (VAR_0 >= VAR_5->cmap.len)
  return 1;

 if (VAR_5->var.bits_per_pixel <= 8) {
  switch (VAR_5->var.bits_per_pixel) {
  case 1:

   break;
  case 2:
  case 4:
  case 8:
   if (&FUNC_0)
    FUNC_0(VAR_0, VAR_1 >> 8, VAR_2 >> 8,
       VAR_3 >> 8, VAR_5);
   else
    return 1;
   break;
  }
 } else if (VAR_0 < 16) {
  switch (VAR_5->var.bits_per_pixel) {
  case 16:
   if (VAR_5->var.red.offset == 10) {

    ((u32*) (VAR_5->pseudo_palette))[VAR_0] =
     ((VAR_1 & 0xf800) >> 1) |
     ((VAR_2 & 0xf800) >> 6) |
     ((VAR_3 & 0xf800) >> 11) |
     ((VAR_4 != 0) << 15);
   } else {

    ((u32*) (VAR_5->pseudo_palette))[VAR_0] =
     ((VAR_1 & 0xf800) >> 0) |
     ((VAR_2 & 0xfc00) >> 5) |
     ((VAR_3 & 0xf800) >> 11);
   }
   break;




  case 24:
  case 32:
   VAR_1 >>= 8;
   VAR_2 >>= 8;
   VAR_3 >>= 8;
   ((u32 *)(VAR_5->pseudo_palette))[VAR_0] =
    (VAR_1 << VAR_5->var.red.offset) |
    (VAR_2 << VAR_5->var.green.offset) |
    (VAR_3 << VAR_5->var.blue.offset);
   break;
  }
 }

 return 0;
}
