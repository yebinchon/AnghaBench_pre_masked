
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_5__ {int length; } ;
struct TYPE_6__ {int bits_per_pixel; TYPE_2__ green; } ;
struct TYPE_4__ {unsigned int len; } ;
struct fb_info {unsigned int* pseudo_palette; TYPE_3__ var; TYPE_1__ cmap; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
    unsigned VAR_4, unsigned VAR_5,
    struct fb_info *VAR_6)
{
 u32 VAR_7, *VAR_8;

 if (VAR_1 >= VAR_6->cmap.len)
  return -VAR_0;

 VAR_7 = ((VAR_5 & 0xFF00) << 16) | ((VAR_2 & 0xFF00) << 8) |
   (VAR_3 & 0xFF00) | ((VAR_4 & 0xFF00) >> 8);
 if (VAR_1 >= 16)
  return -VAR_0;

 VAR_8 = VAR_6->pseudo_palette;
 if (VAR_6->var.bits_per_pixel == 16) {
  switch (VAR_6->var.green.length) {
  case 6:
   VAR_7 = (VAR_2 & 0xf800) |
    ((VAR_3 & 0xfc00) >> 5) |
    ((VAR_4 & 0xf800) >> 11);
   break;
  case 5:
   VAR_7 = ((VAR_2 & 0xf800) >> 1) |
    ((VAR_3 & 0xf800) >> 6) |
    ((VAR_4 & 0xf800) >> 11) |
    (VAR_5 ? 0x8000 : 0);
   break;
  }
 }
 VAR_8[VAR_1] = VAR_7;
 return 0;
}
