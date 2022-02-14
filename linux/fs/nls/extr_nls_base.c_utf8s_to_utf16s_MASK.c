
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int unicode_t ;
typedef int u8 ;
typedef int u16 ;
typedef enum utf16_endian { ____Placeholder_utf16_endian } utf16_endian ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int const*,int,int*) ;

int FUNC_2(const u8 *VAR_5, int VAR_6, enum utf16_endian VAR_7,
  wchar_t *VAR_8, int VAR_9)
{
 u16 *VAR_10;
 int VAR_11;
 unicode_t VAR_12;

 VAR_10 = VAR_8;
 while (VAR_6 > 0 && VAR_9 > 0 && *VAR_5) {
  if (*VAR_5 & 0x80) {
   VAR_11 = FUNC_1(VAR_5, VAR_6, &VAR_12);
   if (VAR_11 < 0)
    return -VAR_0;
   VAR_5 += VAR_11;
   VAR_6 -= VAR_11;

   if (VAR_12 >= VAR_1) {
    if (VAR_9 < 2)
     break;
    VAR_12 -= VAR_1;
    FUNC_0(VAR_10++, VAR_4 |
      ((VAR_12 >> 10) & VAR_2),
      VAR_7);
    FUNC_0(VAR_10++, VAR_4 |
      VAR_3 |
      (VAR_12 & VAR_2),
      VAR_7);
    VAR_9 -= 2;
   } else {
    FUNC_0(VAR_10++, VAR_12, VAR_7);
    VAR_9--;
   }
  } else {
   FUNC_0(VAR_10++, *VAR_5++, VAR_7);
   VAR_6--;
   VAR_9--;
  }
 }
 return VAR_10 - VAR_8;
}
