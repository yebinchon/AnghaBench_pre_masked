
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1)
{
 __le16 *VAR_2 = (__le16 *) VAR_1;
 int VAR_3;
 u16 VAR_4, VAR_5;

 if (VAR_1[0] == 0xff && VAR_1[1] == 0x00 && VAR_1[2] == 0xff &&
     VAR_1[3] == 0x00)
  return 0;

 VAR_3 = 0;
 while (VAR_3 + 1 < VAR_0 / 2) {
  VAR_4 = FUNC_0(VAR_2[VAR_3]);
  VAR_5 = FUNC_0(VAR_2[VAR_3 + 1]);
  if (VAR_4 == 0 || VAR_3 + VAR_4 > VAR_0 / 2)
   return 0;

  if (VAR_5 == 0x0000 && VAR_4 == 2) {

   return 1;
  }

  VAR_3 += VAR_4 + 1;
 }

 return 0;
}
