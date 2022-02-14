
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrox_pll_limits {unsigned int vcomax; unsigned int vcomin; } ;
struct matrox_fb_info {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct matrox_fb_info const*,struct matrox_pll_limits const*,unsigned int*,int) ;

__attribute__((used)) static unsigned int FUNC_2(const struct matrox_fb_info *VAR_0,
      const struct matrox_pll_limits *VAR_1,
      unsigned int *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_5 = VAR_1->vcomax;
 if (VAR_3 > (VAR_5 / 2)) {
  if (VAR_3 > VAR_5) {
   *VAR_2 = VAR_5;
  } else {
   *VAR_2 = VAR_3;
  }
  VAR_4 = 0x40;
 } else {
  unsigned int VAR_6;

  VAR_4 = 3;
  VAR_6 = FUNC_0(VAR_4, VAR_3);
  while (VAR_4 && (VAR_6 > VAR_5)) {
   VAR_4--;
   VAR_6 >>= 1;
  }
  if (VAR_6 < VAR_1->vcomin) {
   VAR_6 = VAR_1->vcomin;
  }
  *VAR_2 = VAR_6;
 }
 return FUNC_1(VAR_0, VAR_1, VAR_2, 0xFF0000 | VAR_4);
}
