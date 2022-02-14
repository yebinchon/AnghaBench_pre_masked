
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int s32 ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;

__attribute__((used)) static s32 FUNC_2(u32 *VAR_3, u16 VAR_4,
       const unsigned char *VAR_5)
{
 u32 VAR_6 = 0, VAR_7 = 0;
 u32 *VAR_8;


 if (!VAR_5 || !VAR_3)
  return VAR_0;

 VAR_8 = &VAR_3[FUNC_0(*VAR_3)];


 do {

  if (VAR_7 && !(VAR_7 % 4)) {
   VAR_8[VAR_7 / 4] = VAR_6;
   VAR_6 = 0;
  }


  VAR_6 |= (u32)(*VAR_5) << (8 * (VAR_7 % 4));
  VAR_7++;


 } while (*(VAR_5++));


 VAR_8[(VAR_7 + 3) / 4] = VAR_6;


 VAR_7 <<= VAR_2;
 VAR_8[0] = VAR_7 | VAR_4;


 VAR_7 += VAR_1 << VAR_2;
 *VAR_3 += FUNC_1(VAR_7);

 return 0;
}
