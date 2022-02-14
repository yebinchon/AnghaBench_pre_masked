
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;


 unsigned long FUNC_0 (struct fb_info*,unsigned long,int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct fb_info *VAR_0, unsigned long *VAR_1, int VAR_2,
    unsigned long VAR_3, int VAR_4, int VAR_5, unsigned VAR_6, int VAR_7)
{
 unsigned long VAR_8, VAR_9;

 if (!VAR_6)
  return;

 VAR_8 = FUNC_0(VAR_0, ~0UL, VAR_2);
 VAR_9 = ~(FUNC_0(VAR_0, ~0UL, (VAR_2+VAR_6) % VAR_7));

 if (VAR_2+VAR_6 <= VAR_7) {

  if (VAR_9)
   VAR_8 &= VAR_9;
  *VAR_1 = FUNC_1(VAR_3, *VAR_1, VAR_8);
 } else {


  if (VAR_8) {
   *VAR_1 = FUNC_1(VAR_3, *VAR_1, VAR_8);
   VAR_1++;
   VAR_3 = VAR_3 << VAR_4 | VAR_3 >> VAR_5;
   VAR_6 -= VAR_7 - VAR_2;
  }


  VAR_6 /= VAR_7;
  while (VAR_6 >= 4) {
   *VAR_1++ = VAR_3;
   VAR_3 = VAR_3 << VAR_4 | VAR_3 >> VAR_5;
   *VAR_1++ = VAR_3;
   VAR_3 = VAR_3 << VAR_4 | VAR_3 >> VAR_5;
   *VAR_1++ = VAR_3;
   VAR_3 = VAR_3 << VAR_4 | VAR_3 >> VAR_5;
   *VAR_1++ = VAR_3;
   VAR_3 = VAR_3 << VAR_4 | VAR_3 >> VAR_5;
   VAR_6 -= 4;
  }
  while (VAR_6--) {
   *VAR_1++ = VAR_3;
   VAR_3 = VAR_3 << VAR_4 | VAR_3 >> VAR_5;
  }


  if (VAR_9)
   *VAR_1 = FUNC_1(VAR_3, *VAR_1, VAR_9);
 }
}
