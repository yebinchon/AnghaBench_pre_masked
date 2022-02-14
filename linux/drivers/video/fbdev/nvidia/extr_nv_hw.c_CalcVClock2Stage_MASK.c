
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvidia_par {int CrystalFreqKHz; } ;



__attribute__((used)) static void FUNC_0(int VAR_0,
        int *VAR_1,
        u32 * VAR_2,
        u32 * VAR_3, struct nvidia_par *VAR_4)
{
 unsigned VAR_5, VAR_6;
 unsigned VAR_7, VAR_8;
 unsigned VAR_9, VAR_10, VAR_11;

 VAR_6 = 0xFFFFFFFF;

 *VAR_3 = 0x80000401;

 VAR_7 = (unsigned)VAR_0;

 for (VAR_11 = 0; VAR_11 <= 6; VAR_11++) {
  VAR_8 = VAR_7 << VAR_11;
  if ((VAR_8 >= 400000) && (VAR_8 <= 1000000)) {
   for (VAR_9 = 1; VAR_9 <= 13; VAR_9++) {
    VAR_10 = ((VAR_7 << VAR_11) * VAR_9) /
        (VAR_4->CrystalFreqKHz << 2);
    if ((VAR_10 >= 5) && (VAR_10 <= 255)) {
     VAR_8 =
         (((VAR_4->CrystalFreqKHz << 2) * VAR_10) /
          VAR_9) >> VAR_11;
     if (VAR_8 > VAR_7)
      VAR_5 = VAR_8 - VAR_7;
     else
      VAR_5 = VAR_7 - VAR_8;
     if (VAR_5 < VAR_6) {
      *VAR_2 =
          (VAR_11 << 16) | (VAR_10 << 8) | VAR_9;
      *VAR_1 = VAR_8;
      VAR_6 = VAR_5;
     }
    }
   }
  }
 }
}
