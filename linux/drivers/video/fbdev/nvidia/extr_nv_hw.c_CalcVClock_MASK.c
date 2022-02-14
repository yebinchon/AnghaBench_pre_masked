
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct nvidia_par {int CrystalFreqKHz; } ;



__attribute__((used)) static void FUNC_0(int VAR_0,
         int *VAR_1, u32 * VAR_2, struct nvidia_par *VAR_3)
{
 unsigned VAR_4, VAR_5;
 unsigned VAR_6, VAR_7;
 unsigned VAR_8, VAR_9;
 unsigned VAR_10, VAR_11, VAR_12;

 VAR_7 = 0xFFFFFFFF;

 VAR_8 = (unsigned)VAR_0;

 if (VAR_3->CrystalFreqKHz == 13500) {
  VAR_4 = 7;
  VAR_5 = 13;
 } else {
  VAR_4 = 8;
  VAR_5 = 14;
 }

 for (VAR_12 = 0; VAR_12 <= 4; VAR_12++) {
  VAR_9 = VAR_8 << VAR_12;
  if ((VAR_9 >= 128000) && (VAR_9 <= 350000)) {
   for (VAR_10 = VAR_4; VAR_10 <= VAR_5; VAR_10++) {
    VAR_11 = ((VAR_8 << VAR_12) * VAR_10) / VAR_3->CrystalFreqKHz;
    if (VAR_11 <= 255) {
     VAR_9 =
         ((VAR_3->CrystalFreqKHz * VAR_11) /
          VAR_10) >> VAR_12;
     if (VAR_9 > VAR_8)
      VAR_6 = VAR_9 - VAR_8;
     else
      VAR_6 = VAR_8 - VAR_9;
     if (VAR_6 < VAR_7) {
      *VAR_2 =
          (VAR_12 << 16) | (VAR_11 << 8) | VAR_10;
      *VAR_1 = VAR_9;
      VAR_7 = VAR_6;
     }
    }
   }
  }
 }
}
