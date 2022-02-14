
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ unicode_t ;
typedef int u8 ;
struct utf8_table {int cmask; int cval; unsigned long lmask; unsigned long lval; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct utf8_table* VAR_3 ;

int FUNC_0(const u8 *VAR_4, int VAR_5, unicode_t *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8, VAR_9, VAR_10;
 const struct utf8_table *VAR_11;

 VAR_10 = 0;
 VAR_8 = *VAR_4;
 VAR_7 = VAR_8;
 for (VAR_11 = VAR_3; VAR_11->cmask; VAR_11++) {
  VAR_10++;
  if ((VAR_8 & VAR_11->cmask) == VAR_11->cval) {
   VAR_7 &= VAR_11->lmask;
   if (VAR_7 < VAR_11->lval || VAR_7 > VAR_2 ||
     (VAR_7 & VAR_0) == VAR_1)
    return -1;
   *VAR_6 = (unicode_t) VAR_7;
   return VAR_10;
  }
  if (VAR_5 <= VAR_10)
   return -1;
  VAR_4++;
  VAR_9 = (*VAR_4 ^ 0x80) & 0xFF;
  if (VAR_9 & 0xC0)
   return -1;
  VAR_7 = (VAR_7 << 6) | VAR_9;
 }
 return -1;
}
