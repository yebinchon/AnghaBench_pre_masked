
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_2, unsigned VAR_3, unsigned VAR_4,
      unsigned VAR_5, unsigned VAR_6, struct fb_info *VAR_7)
{
 if (VAR_2 >= 256)
  return 1;

 switch (VAR_7->var.bits_per_pixel) {
 case 8:
  FUNC_0(VAR_2 << 8, VAR_0);
  FUNC_0(VAR_3 >> 10, VAR_1);
  FUNC_0(VAR_4 >> 10, VAR_1);
  FUNC_0(VAR_5 >> 10, VAR_1);
  break;
 case 16:
  if (VAR_2 >= 16)
   return 1;
  ((u32 *) (VAR_7->pseudo_palette))[VAR_2] =
      ((VAR_3 & 0xf800)) |
      ((VAR_4 & 0xfc00) >> 5) | ((VAR_5 & 0xf800) >> 11);
  break;
 }
 return 0;
}
