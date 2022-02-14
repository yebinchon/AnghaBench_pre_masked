
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
struct uvesafb_pal_entry {unsigned int red; unsigned int green; unsigned int blue; scalar_t__ pad; } ;
struct TYPE_9__ {unsigned int offset; } ;
struct TYPE_8__ {unsigned int offset; } ;
struct TYPE_7__ {int offset; } ;
struct TYPE_10__ {int bits_per_pixel; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct TYPE_6__ {unsigned int len; } ;
struct fb_info {TYPE_5__ var; scalar_t__ pseudo_palette; TYPE_1__ cmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uvesafb_pal_entry*,int,unsigned int,struct fb_info*) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_2, unsigned VAR_3, unsigned VAR_4,
  unsigned VAR_5, unsigned VAR_6,
  struct fb_info *VAR_7)
{
 struct uvesafb_pal_entry VAR_8;
 int VAR_9 = 16 - VAR_1;
 int VAR_10 = 0;

 if (VAR_2 >= VAR_7->cmap.len)
  return -VAR_0;

 if (VAR_7->var.bits_per_pixel == 8) {
  VAR_8.red = VAR_3 >> VAR_9;
  VAR_8.green = VAR_4 >> VAR_9;
  VAR_8.blue = VAR_5 >> VAR_9;
  VAR_8.pad = 0;

  VAR_10 = FUNC_0(&VAR_8, 1, VAR_2, VAR_7);
 } else if (VAR_2 < 16) {
  switch (VAR_7->var.bits_per_pixel) {
  case 16:
   if (VAR_7->var.red.offset == 10) {

    ((u32 *) (VAR_7->pseudo_palette))[VAR_2] =
      ((VAR_3 & 0xf800) >> 1) |
      ((VAR_4 & 0xf800) >> 6) |
      ((VAR_5 & 0xf800) >> 11);
   } else {

    ((u32 *) (VAR_7->pseudo_palette))[VAR_2] =
      ((VAR_3 & 0xf800) ) |
      ((VAR_4 & 0xfc00) >> 5) |
      ((VAR_5 & 0xf800) >> 11);
   }
   break;

  case 24:
  case 32:
   VAR_3 >>= 8;
   VAR_4 >>= 8;
   VAR_5 >>= 8;
   ((u32 *)(VAR_7->pseudo_palette))[VAR_2] =
    (VAR_3 << VAR_7->var.red.offset) |
    (VAR_4 << VAR_7->var.green.offset) |
    (VAR_5 << VAR_7->var.blue.offset);
   break;
  }
 }
 return VAR_10;
}
