
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline void FUNC_0(u8 *VAR_0, u8 VAR_1,
           u8 VAR_2, u8 VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;

 if (VAR_1) {
  u8 VAR_6 = VAR_1 + 3 + VAR_0[VAR_1 + 1];

  for (VAR_4 = VAR_1 + 3; VAR_4 < VAR_6; VAR_4++) {
   if (VAR_0[VAR_4] == 0x51) {
    for (VAR_5 = VAR_4 + 2; VAR_5 < ((VAR_4 + 2) + VAR_0[VAR_4 + 1]); VAR_5++)
     VAR_0[VAR_5] = VAR_3;
    break;
   }
  }
 }

 if (VAR_2) {
  VAR_0[VAR_2 + 6] = 0x51;
  VAR_0[VAR_2 + 7] = VAR_3;
 }
}
