
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u32 ;
struct ivtv {TYPE_2__* osd_info; } ;
struct TYPE_7__ {int length; } ;
struct TYPE_8__ {int bits_per_pixel; TYPE_3__ green; } ;
struct TYPE_5__ {unsigned int len; } ;
struct fb_info {unsigned int* pseudo_palette; TYPE_4__ var; TYPE_1__ cmap; scalar_t__ par; } ;
struct TYPE_6__ {unsigned int* palette_cur; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
    unsigned VAR_4, unsigned VAR_5,
    struct fb_info *VAR_6)
{
 u32 VAR_7, *VAR_8;
 struct ivtv *VAR_9 = (struct ivtv *)VAR_6->par;

 if (VAR_1 >= VAR_6->cmap.len)
  return -VAR_0;

 VAR_7 = ((VAR_5 & 0xFF00) << 16) |((VAR_2 & 0xFF00) << 8) | (VAR_3 & 0xFF00) | ((VAR_4 & 0xFF00) >> 8);
 if (VAR_6->var.bits_per_pixel <= 8) {
  FUNC_0(VAR_1, 0x02a30);
  FUNC_0(VAR_7, 0x02a34);
  VAR_9->osd_info->palette_cur[VAR_1] = VAR_7;
  return 0;
 }
 if (VAR_1 >= 16)
  return -VAR_0;

 VAR_8 = VAR_6->pseudo_palette;
 if (VAR_6->var.bits_per_pixel == 16) {
  switch (VAR_6->var.green.length) {
   case 4:
    VAR_7 = ((VAR_2 & 0xf000) >> 4) |
     ((VAR_3 & 0xf000) >> 8) |
     ((VAR_4 & 0xf000) >> 12);
    break;
   case 5:
    VAR_7 = ((VAR_2 & 0xf800) >> 1) |
     ((VAR_3 & 0xf800) >> 6) |
     ((VAR_4 & 0xf800) >> 11);
    break;
   case 6:
    VAR_7 = (VAR_2 & 0xf800 ) |
     ((VAR_3 & 0xfc00) >> 5) |
     ((VAR_4 & 0xf800) >> 11);
    break;
  }
 }
 VAR_8[VAR_1] = VAR_7;
 return 0;
}
