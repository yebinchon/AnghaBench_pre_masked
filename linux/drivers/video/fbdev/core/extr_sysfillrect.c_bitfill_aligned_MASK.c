
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;


 unsigned long FUNC_0 (struct fb_info*,unsigned long,int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct fb_info *VAR_0, unsigned long *VAR_1, int VAR_2,
  unsigned long VAR_3, unsigned VAR_4, int VAR_5)
{
 unsigned long VAR_6, VAR_7;

 if (!VAR_4)
  return;

 VAR_6 = FUNC_0(VAR_0, ~0UL, VAR_2);
 VAR_7 = ~(FUNC_0(VAR_0, ~0UL, (VAR_2+VAR_4) % VAR_5));

 if (VAR_2+VAR_4 <= VAR_5) {

  if (VAR_7)
   VAR_6 &= VAR_7;
  *VAR_1 = FUNC_1(VAR_3, *VAR_1, VAR_6);
 } else {



   if (VAR_6!= ~0UL) {
   *VAR_1 = FUNC_1(VAR_3, *VAR_1, VAR_6);
   VAR_1++;
   VAR_4 -= VAR_5 - VAR_2;
  }


  VAR_4 /= VAR_5;
  while (VAR_4 >= 8) {
   *VAR_1++ = VAR_3;
   *VAR_1++ = VAR_3;
   *VAR_1++ = VAR_3;
   *VAR_1++ = VAR_3;
   *VAR_1++ = VAR_3;
   *VAR_1++ = VAR_3;
   *VAR_1++ = VAR_3;
   *VAR_1++ = VAR_3;
   VAR_4 -= 8;
  }
  while (VAR_4--)
   *VAR_1++ = VAR_3;

  if (VAR_7)
   *VAR_1 = FUNC_1(VAR_3, *VAR_1, VAR_7);
 }
}
