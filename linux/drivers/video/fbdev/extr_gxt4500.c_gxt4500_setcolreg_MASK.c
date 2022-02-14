
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct gxt4500_par {int pixfmt; } ;
struct fb_info {unsigned int* pseudo_palette; struct gxt4500_par* par; } ;


 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct gxt4500_par*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_2, unsigned int VAR_3,
        unsigned int VAR_4, unsigned int VAR_5,
        unsigned int VAR_6, struct fb_info *VAR_7)
{
 u32 VAR_8;
 struct gxt4500_par *VAR_9 = VAR_7->par;

 if (VAR_2 > 1023)
  return 1;
 VAR_8 = ((VAR_6 & 0xff00) << 16) | ((VAR_3 & 0xff00) << 8) |
  (VAR_4 & 0xff00) | (VAR_5 >> 8);
 FUNC_0(VAR_9, VAR_0 + VAR_2 * 4, VAR_8);

 if (VAR_2 < 16 && VAR_9->pixfmt != VAR_1) {
  u32 *VAR_10 = VAR_7->pseudo_palette;
  u32 VAR_11 = VAR_2;
  switch (VAR_9->pixfmt) {
  case 130:
   VAR_11 |= (VAR_2 << 11) | (VAR_2 << 5);
   break;
  case 131:
   VAR_11 |= (VAR_2 << 10) | (VAR_2 << 5);
   break;
  case 128:
   VAR_11 |= (VAR_2 << 24);

  case 129:
   VAR_11 |= (VAR_2 << 16) | (VAR_2 << 8);
   break;
  }
  VAR_10[VAR_2] = VAR_11;
 }

 return 0;
}
