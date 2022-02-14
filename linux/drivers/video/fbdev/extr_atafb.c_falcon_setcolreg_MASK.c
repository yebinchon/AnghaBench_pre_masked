
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct fb_info {scalar_t__ pseudo_palette; } ;
struct TYPE_2__ {unsigned int* color_reg; } ;


 unsigned int* VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_2, unsigned int VAR_3,
       unsigned int VAR_4, unsigned int VAR_5,
       unsigned int VAR_6, struct fb_info *VAR_7)
{
 if (VAR_2 > 255)
  return 1;
 VAR_0[VAR_2] = (((VAR_3 & 0xfc00) << 16) |
      ((VAR_4 & 0xfc00) << 8) |
      ((VAR_5 & 0xfc00) >> 8));
 if (VAR_2 < 16) {
  VAR_1.color_reg[VAR_2] =
   (((VAR_3 & 0xe000) >> 13) | ((VAR_3 & 0x1000) >> 12) << 8) |
   (((VAR_4 & 0xe000) >> 13) | ((VAR_4 & 0x1000) >> 12) << 4) |
   ((VAR_5 & 0xe000) >> 13) | ((VAR_5 & 0x1000) >> 12);
  ((u32 *)VAR_7->pseudo_palette)[VAR_2] = ((VAR_3 & 0xf800) |
             ((VAR_4 & 0xfc00) >> 5) |
             ((VAR_5 & 0xf800) >> 11));
 }
 return 0;
}
