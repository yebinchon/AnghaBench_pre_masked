
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long unicode_t ;
typedef scalar_t__ u8 ;
struct utf8_table {unsigned long lmask; int shift; unsigned long cval; scalar_t__ cmask; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct utf8_table* VAR_3 ;

int FUNC_0(unicode_t VAR_4, u8 *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 int VAR_8, VAR_9;
 const struct utf8_table *VAR_10;

 if (!VAR_5)
  return 0;

 VAR_7 = VAR_4;
 if (VAR_7 > VAR_2 || (VAR_7 & VAR_0) == VAR_1)
  return -1;

 VAR_9 = 0;
 for (VAR_10 = VAR_3; VAR_10->cmask && VAR_6; VAR_10++, VAR_6--) {
  VAR_9++;
  if (VAR_7 <= VAR_10->lmask) {
   VAR_8 = VAR_10->shift;
   *VAR_5 = (u8) (VAR_10->cval | (VAR_7 >> VAR_8));
   while (VAR_8 > 0) {
    VAR_8 -= 6;
    VAR_5++;
    *VAR_5 = (u8) (0x80 | ((VAR_7 >> VAR_8) & 0x3F));
   }
   return VAR_9;
  }
 }
 return -1;
}
